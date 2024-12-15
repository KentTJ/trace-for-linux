// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_THERMAL_EXYNOS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_THERMAL_EXYNOS_PROTO_H_

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

class ThermalExynosAcpmHighOverheadFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ThermalExynosAcpmHighOverheadFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ThermalExynosAcpmHighOverheadFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ThermalExynosAcpmHighOverheadFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_tz_id() const { return at<1>().valid(); }
  int32_t tz_id() const { return at<1>().as_int32(); }
  bool has_current_temp() const { return at<2>().valid(); }
  uint32_t current_temp() const { return at<2>().as_uint32(); }
  bool has_ctrl_temp() const { return at<3>().valid(); }
  uint32_t ctrl_temp() const { return at<3>().as_uint32(); }
  bool has_cdev_state() const { return at<4>().valid(); }
  uint32_t cdev_state() const { return at<4>().as_uint32(); }
  bool has_pid_et_p() const { return at<5>().valid(); }
  int32_t pid_et_p() const { return at<5>().as_int32(); }
  bool has_k_p() const { return at<6>().valid(); }
  int32_t k_p() const { return at<6>().as_int32(); }
  bool has_k_i() const { return at<7>().valid(); }
  int32_t k_i() const { return at<7>().as_int32(); }
};

class ThermalExynosAcpmHighOverheadFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = ThermalExynosAcpmHighOverheadFtraceEvent_Decoder;
  enum : int32_t {
    kTzIdFieldNumber = 1,
    kCurrentTempFieldNumber = 2,
    kCtrlTempFieldNumber = 3,
    kCdevStateFieldNumber = 4,
    kPidEtPFieldNumber = 5,
    kKPFieldNumber = 6,
    kKIFieldNumber = 7,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ThermalExynosAcpmHighOverheadFtraceEvent"; }


  using FieldMetadata_TzId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmHighOverheadFtraceEvent>;

  static constexpr FieldMetadata_TzId kTzId{};
  void set_tz_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TzId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurrentTemp =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ThermalExynosAcpmHighOverheadFtraceEvent>;

  static constexpr FieldMetadata_CurrentTemp kCurrentTemp{};
  void set_current_temp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CurrentTemp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CtrlTemp =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ThermalExynosAcpmHighOverheadFtraceEvent>;

  static constexpr FieldMetadata_CtrlTemp kCtrlTemp{};
  void set_ctrl_temp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CtrlTemp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CdevState =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ThermalExynosAcpmHighOverheadFtraceEvent>;

  static constexpr FieldMetadata_CdevState kCdevState{};
  void set_cdev_state(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CdevState::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PidEtP =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmHighOverheadFtraceEvent>;

  static constexpr FieldMetadata_PidEtP kPidEtP{};
  void set_pid_et_p(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PidEtP::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_KP =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmHighOverheadFtraceEvent>;

  static constexpr FieldMetadata_KP kKP{};
  void set_k_p(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_KP::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_KI =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmHighOverheadFtraceEvent>;

  static constexpr FieldMetadata_KI kKI{};
  void set_k_i(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_KI::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class ThermalExynosAcpmBulkFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/11, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ThermalExynosAcpmBulkFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ThermalExynosAcpmBulkFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ThermalExynosAcpmBulkFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_tz_id() const { return at<1>().valid(); }
  uint32_t tz_id() const { return at<1>().as_uint32(); }
  bool has_current_temp() const { return at<2>().valid(); }
  uint32_t current_temp() const { return at<2>().as_uint32(); }
  bool has_ctrl_temp() const { return at<3>().valid(); }
  uint32_t ctrl_temp() const { return at<3>().as_uint32(); }
  bool has_cdev_state() const { return at<4>().valid(); }
  uint32_t cdev_state() const { return at<4>().as_uint32(); }
  bool has_pid_et_p() const { return at<5>().valid(); }
  int32_t pid_et_p() const { return at<5>().as_int32(); }
  bool has_pid_power_range() const { return at<6>().valid(); }
  int32_t pid_power_range() const { return at<6>().as_int32(); }
  bool has_pid_p() const { return at<7>().valid(); }
  int32_t pid_p() const { return at<7>().as_int32(); }
  bool has_pid_i() const { return at<8>().valid(); }
  int32_t pid_i() const { return at<8>().as_int32(); }
  bool has_k_p() const { return at<9>().valid(); }
  int32_t k_p() const { return at<9>().as_int32(); }
  bool has_k_i() const { return at<10>().valid(); }
  int32_t k_i() const { return at<10>().as_int32(); }
  bool has_timestamp() const { return at<11>().valid(); }
  uint64_t timestamp() const { return at<11>().as_uint64(); }
};

class ThermalExynosAcpmBulkFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = ThermalExynosAcpmBulkFtraceEvent_Decoder;
  enum : int32_t {
    kTzIdFieldNumber = 1,
    kCurrentTempFieldNumber = 2,
    kCtrlTempFieldNumber = 3,
    kCdevStateFieldNumber = 4,
    kPidEtPFieldNumber = 5,
    kPidPowerRangeFieldNumber = 6,
    kPidPFieldNumber = 7,
    kPidIFieldNumber = 8,
    kKPFieldNumber = 9,
    kKIFieldNumber = 10,
    kTimestampFieldNumber = 11,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ThermalExynosAcpmBulkFtraceEvent"; }


  using FieldMetadata_TzId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_TzId kTzId{};
  void set_tz_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TzId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurrentTemp =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_CurrentTemp kCurrentTemp{};
  void set_current_temp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CurrentTemp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CtrlTemp =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_CtrlTemp kCtrlTemp{};
  void set_ctrl_temp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CtrlTemp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CdevState =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_CdevState kCdevState{};
  void set_cdev_state(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CdevState::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PidEtP =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_PidEtP kPidEtP{};
  void set_pid_et_p(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PidEtP::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PidPowerRange =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_PidPowerRange kPidPowerRange{};
  void set_pid_power_range(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PidPowerRange::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PidP =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_PidP kPidP{};
  void set_pid_p(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PidP::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PidI =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_PidI kPidI{};
  void set_pid_i(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PidI::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_KP =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_KP kKP{};
  void set_k_p(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_KP::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_KI =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_KI kKI{};
  void set_k_i(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_KI::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timestamp =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      ThermalExynosAcpmBulkFtraceEvent>;

  static constexpr FieldMetadata_Timestamp kTimestamp{};
  void set_timestamp(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Timestamp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
