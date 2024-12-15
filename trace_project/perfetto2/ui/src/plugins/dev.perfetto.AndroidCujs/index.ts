// Copyright (C) 2023 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

import {SimpleSliceTrackConfig} from '../../frontend/simple_slice_track';
import {addDebugSliceTrack} from '../../public/debug_tracks';
import {Trace} from '../../public/trace';
import {PerfettoPlugin, PluginDescriptor} from '../../public/plugin';
import {addAndPinSliceTrack} from './trackUtils';

/**
 * Adds the Debug Slice Track for given Jank CUJ name
 *
 * @param {Trace} ctx For properties and methods of trace viewer
 * @param {string} trackName Display Name of the track
 * @param {string | string[]} cujNames List of Jank CUJs to pin
 */
export function addJankCUJDebugTrack(
  ctx: Trace,
  trackName: string,
  cujNames?: string | string[],
) {
  const jankCujTrackConfig: SimpleSliceTrackConfig =
    generateJankCujTrackConfig(cujNames);
  addAndPinSliceTrack(ctx, jankCujTrackConfig, trackName);
}

const JANK_CUJ_QUERY_PRECONDITIONS = `
  SELECT RUN_METRIC('android/android_jank_cuj.sql');
  INCLUDE PERFETTO MODULE android.critical_blocking_calls;
`;

/**
 * Generate the Track config for a multiple Jank CUJ slices
 *
 * @param {string | string[]} cujNames List of Jank CUJs to pin, default empty
 * @returns {SimpleSliceTrackConfig} Returns the track config for given CUJs
 */
function generateJankCujTrackConfig(
  cujNames: string | string[] = [],
): SimpleSliceTrackConfig {
  // This method expects the caller to have run JANK_CUJ_QUERY_PRECONDITIONS
  // Not running the precondition query here to save time in case already run
  const jankCujQuery = JANK_CUJ_QUERY;
  const jankCujColumns = JANK_COLUMNS;
  const cujNamesList = typeof cujNames === 'string' ? [cujNames] : cujNames;
  const filterCuj =
    cujNamesList?.length > 0
      ? ` AND cuj.name IN (${cujNamesList
          .map((name) => `'J<${name}>'`)
          .join(',')})`
      : '';

  const jankCujTrackConfig: SimpleSliceTrackConfig = {
    data: {
      sqlSource: `${jankCujQuery}${filterCuj}`,
      columns: jankCujColumns,
    },
    columns: {ts: 'ts', dur: 'dur', name: 'name'},
    argColumns: jankCujColumns,
  };
  return jankCujTrackConfig;
}

const JANK_CUJ_QUERY = `
    SELECT
      CASE
        WHEN
          EXISTS(
              SELECT 1
              FROM slice AS cuj_state_marker
                     JOIN track marker_track
                          ON marker_track.id = cuj_state_marker.track_id
              WHERE
                cuj_state_marker.ts >= cuj.ts
                AND cuj_state_marker.ts + cuj_state_marker.dur <= cuj.ts + cuj.dur
                AND
                ( /* e.g. J<CUJ_NAME>#FT#cancel#0 this for backward compatibility */
                      cuj_state_marker.name GLOB(cuj.name || '#FT#cancel*')
                    OR (marker_track.name = cuj.name AND cuj_state_marker.name GLOB 'FT#cancel*')
                  )
            )
          THEN ' ❌ '
        WHEN
          EXISTS(
              SELECT 1
              FROM slice AS cuj_state_marker
                     JOIN track marker_track
                          ON marker_track.id = cuj_state_marker.track_id
              WHERE
                cuj_state_marker.ts >= cuj.ts
                AND cuj_state_marker.ts + cuj_state_marker.dur <= cuj.ts + cuj.dur
                AND
                ( /* e.g. J<CUJ_NAME>#FT#end#0 this for backward compatibility */
                      cuj_state_marker.name GLOB(cuj.name || '#FT#end*')
                    OR (marker_track.name = cuj.name AND cuj_state_marker.name GLOB 'FT#end*')
                  )
            )
          THEN ' ✅ '
        ELSE NULL
        END || cuj.name AS name,
      total_frames,
      missed_app_frames,
      missed_sf_frames,
      sf_callback_missed_frames,
      hwui_callback_missed_frames,
      cuj_layer.layer_name,
      /* Boundaries table doesn't contain ts and dur when a CUJ didn't complete successfully.
        In that case we still want to show that it was canceled, so let's take the slice timestamps. */
      CASE WHEN boundaries.ts IS NOT NULL THEN boundaries.ts ELSE cuj.ts END AS ts,
      CASE WHEN boundaries.dur IS NOT NULL THEN boundaries.dur ELSE cuj.dur END AS dur,
      cuj.track_id,
      cuj.slice_id
    FROM slice AS cuj
           JOIN process_track AS pt ON cuj.track_id = pt.id
           LEFT JOIN android_jank_cuj jc
                     ON pt.upid = jc.upid AND cuj.name = jc.cuj_slice_name AND cuj.ts = jc.ts
           LEFT JOIN android_jank_cuj_main_thread_cuj_boundary boundaries using (cuj_id)
           LEFT JOIN android_jank_cuj_layer_name cuj_layer USING (cuj_id)
           LEFT JOIN android_jank_cuj_counter_metrics USING (cuj_id)
    WHERE cuj.name GLOB 'J<*>'
      AND cuj.dur > 0
`;

const JANK_COLUMNS = [
  'name',
  'total_frames',
  'missed_app_frames',
  'missed_sf_frames',
  'sf_callback_missed_frames',
  'hwui_callback_missed_frames',
  'layer_name',
  'ts',
  'dur',
  'track_id',
  'slice_id',
];

const LATENCY_CUJ_QUERY = `
    SELECT
      CASE
        WHEN
          EXISTS(
              SELECT 1
              FROM slice AS cuj_state_marker
                     JOIN track marker_track
                          ON marker_track.id = cuj_state_marker.track_id
              WHERE
                cuj_state_marker.ts >= cuj.ts
                AND cuj_state_marker.ts + cuj_state_marker.dur <= cuj.ts + cuj.dur
                AND marker_track.name = cuj.name AND (
                    cuj_state_marker.name GLOB 'cancel'
                    OR cuj_state_marker.name GLOB 'timeout')
            )
          THEN ' ❌ '
        ELSE ' ✅ '
        END || cuj.name AS name,
      cuj.dur / 1e6 as dur_ms,
      cuj.ts,
      cuj.dur,
      cuj.track_id,
      cuj.slice_id
    FROM slice AS cuj
           JOIN process_track AS pt
                ON cuj.track_id = pt.id
    WHERE cuj.name GLOB 'L<*>'
      AND cuj.dur > 0
`;

const LATENCY_COLUMNS = ['name', 'dur_ms', 'ts', 'dur', 'track_id', 'slice_id'];

const BLOCKING_CALLS_DURING_CUJS_QUERY = `
    SELECT
      s.id AS slice_id,
      s.name,
      max(s.ts, cuj.ts) AS ts,
      min(s.ts + s.dur, cuj.ts_end) as ts_end,
      min(s.ts + s.dur, cuj.ts_end) - max(s.ts, cuj.ts) AS dur,
      cuj.cuj_id,
      cuj.cuj_name,
      s.process_name,
      s.upid,
      s.utid,
      'slice' AS table_name
    FROM _android_critical_blocking_calls s
      JOIN  android_jank_cuj cuj
      -- only when there is an overlap
      ON s.ts + s.dur > cuj.ts AND s.ts < cuj.ts_end
          -- and are from the same process
          AND s.upid = cuj.upid
`;

const BLOCKING_CALLS_DURING_CUJS_COLUMNS = [
  'slice_id',
  'name',
  'ts',
  'cuj_ts',
  'dur',
  'cuj_id',
  'cuj_name',
  'process_name',
  'upid',
  'utid',
  'table_name',
];

class AndroidCujs implements PerfettoPlugin {
  async onTraceLoad(ctx: Trace): Promise<void> {
    ctx.commands.registerCommand({
      id: 'dev.perfetto.AndroidCujs#PinJankCUJs',
      name: 'Add track: Android jank CUJs',
      callback: () => {
        ctx.engine.query(JANK_CUJ_QUERY_PRECONDITIONS).then(() => {
          addJankCUJDebugTrack(ctx, 'Jank CUJs');
        });
      },
    });

    ctx.commands.registerCommand({
      id: 'dev.perfetto.AndroidCujs#ListJankCUJs',
      name: 'Run query: Android jank CUJs',
      callback: () => {
        ctx.engine
          .query(JANK_CUJ_QUERY_PRECONDITIONS)
          .then(() =>
            ctx.addQueryResultsTab(JANK_CUJ_QUERY, 'Android Jank CUJs'),
          );
      },
    });

    ctx.commands.registerCommand({
      id: 'dev.perfetto.AndroidCujs#PinLatencyCUJs',
      name: 'Add track: Android latency CUJs',
      callback: () => {
        addDebugSliceTrack(
          ctx,
          {
            sqlSource: LATENCY_CUJ_QUERY,
            columns: LATENCY_COLUMNS,
          },
          'Latency CUJs',
          {ts: 'ts', dur: 'dur', name: 'name'},
          [],
        );
      },
    });

    ctx.commands.registerCommand({
      id: 'dev.perfetto.AndroidCujs#ListLatencyCUJs',
      name: 'Run query: Android Latency CUJs',
      callback: () =>
        ctx.addQueryResultsTab(LATENCY_CUJ_QUERY, 'Android Latency CUJs'),
    });

    ctx.commands.registerCommand({
      id: 'dev.perfetto.AndroidCujs#PinBlockingCalls',
      name: 'Add track: Android Blocking calls during CUJs',
      callback: () => {
        ctx.engine.query(JANK_CUJ_QUERY_PRECONDITIONS).then(() =>
          addDebugSliceTrack(
            ctx,
            {
              sqlSource: BLOCKING_CALLS_DURING_CUJS_QUERY,
              columns: BLOCKING_CALLS_DURING_CUJS_COLUMNS,
            },
            'Blocking calls during CUJs',
            {ts: 'ts', dur: 'dur', name: 'name'},
            BLOCKING_CALLS_DURING_CUJS_COLUMNS,
          ),
        );
      },
    });
  }
}

export const plugin: PluginDescriptor = {
  pluginId: 'dev.perfetto.AndroidCujs',
  plugin: AndroidCujs,
};