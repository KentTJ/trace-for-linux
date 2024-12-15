#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/track_event/chrome_renderer_scheduler_state.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeRendererSchedulerState::ChromeRendererSchedulerState() = default;
ChromeRendererSchedulerState::~ChromeRendererSchedulerState() = default;
ChromeRendererSchedulerState::ChromeRendererSchedulerState(const ChromeRendererSchedulerState&) = default;
ChromeRendererSchedulerState& ChromeRendererSchedulerState::operator=(const ChromeRendererSchedulerState&) = default;
ChromeRendererSchedulerState::ChromeRendererSchedulerState(ChromeRendererSchedulerState&&) noexcept = default;
ChromeRendererSchedulerState& ChromeRendererSchedulerState::operator=(ChromeRendererSchedulerState&&) = default;

bool ChromeRendererSchedulerState::operator==(const ChromeRendererSchedulerState& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(rail_mode_, other.rail_mode_)
   && ::protozero::internal::gen_helpers::EqualsField(is_backgrounded_, other.is_backgrounded_)
   && ::protozero::internal::gen_helpers::EqualsField(is_hidden_, other.is_hidden_);
}

bool ChromeRendererSchedulerState::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* rail_mode */:
        field.get(&rail_mode_);
        break;
      case 2 /* is_backgrounded */:
        field.get(&is_backgrounded_);
        break;
      case 3 /* is_hidden */:
        field.get(&is_hidden_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeRendererSchedulerState::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeRendererSchedulerState::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeRendererSchedulerState::Serialize(::protozero::Message* msg) const {
  // Field 1: rail_mode
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, rail_mode_, msg);
  }

  // Field 2: is_backgrounded
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(2, is_backgrounded_, msg);
  }

  // Field 3: is_hidden
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(3, is_hidden_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
