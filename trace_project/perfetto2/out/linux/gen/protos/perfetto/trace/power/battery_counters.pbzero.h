// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_POWER_BATTERY_COUNTERS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_POWER_BATTERY_COUNTERS_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"


namespace perfetto {
namespace protos {
namespace pbzero {

class BatteryCounters_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BatteryCounters_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BatteryCounters_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BatteryCounters_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_charge_counter_uah() const { return at<1>().valid(); }
  int64_t charge_counter_uah() const { return at<1>().as_int64(); }
  bool has_capacity_percent() const { return at<2>().valid(); }
  float capacity_percent() const { return at<2>().as_float(); }
  bool has_current_ua() const { return at<3>().valid(); }
  int64_t current_ua() const { return at<3>().as_int64(); }
  bool has_current_avg_ua() const { return at<4>().valid(); }
  int64_t current_avg_ua() const { return at<4>().as_int64(); }
  bool has_name() const { return at<5>().valid(); }
  ::protozero::ConstChars name() const { return at<5>().as_string(); }
  bool has_energy_counter_uwh() const { return at<6>().valid(); }
  int64_t energy_counter_uwh() const { return at<6>().as_int64(); }
  bool has_voltage_uv() const { return at<7>().valid(); }
  int64_t voltage_uv() const { return at<7>().as_int64(); }
};

class BatteryCounters : public ::protozero::Message {
 public:
  using Decoder = BatteryCounters_Decoder;
  enum : int32_t {
    kChargeCounterUahFieldNumber = 1,
    kCapacityPercentFieldNumber = 2,
    kCurrentUaFieldNumber = 3,
    kCurrentAvgUaFieldNumber = 4,
    kNameFieldNumber = 5,
    kEnergyCounterUwhFieldNumber = 6,
    kVoltageUvFieldNumber = 7,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BatteryCounters"; }


  using FieldMetadata_ChargeCounterUah =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      BatteryCounters>;

  static constexpr FieldMetadata_ChargeCounterUah kChargeCounterUah{};
  void set_charge_counter_uah(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ChargeCounterUah::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CapacityPercent =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFloat,
      float,
      BatteryCounters>;

  static constexpr FieldMetadata_CapacityPercent kCapacityPercent{};
  void set_capacity_percent(float value) {
    static constexpr uint32_t field_id = FieldMetadata_CapacityPercent::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFloat>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurrentUa =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      BatteryCounters>;

  static constexpr FieldMetadata_CurrentUa kCurrentUa{};
  void set_current_ua(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CurrentUa::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurrentAvgUa =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      BatteryCounters>;

  static constexpr FieldMetadata_CurrentAvgUa kCurrentAvgUa{};
  void set_current_avg_ua(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CurrentAvgUa::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      BatteryCounters>;

  static constexpr FieldMetadata_Name kName{};
  void set_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Name::kFieldId, data, size);
  }
  void set_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Name::kFieldId, chars.data, chars.size);
  }
  void set_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Name::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_EnergyCounterUwh =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      BatteryCounters>;

  static constexpr FieldMetadata_EnergyCounterUwh kEnergyCounterUwh{};
  void set_energy_counter_uwh(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_EnergyCounterUwh::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_VoltageUv =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      BatteryCounters>;

  static constexpr FieldMetadata_VoltageUv kVoltageUv{};
  void set_voltage_uv(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_VoltageUv::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
