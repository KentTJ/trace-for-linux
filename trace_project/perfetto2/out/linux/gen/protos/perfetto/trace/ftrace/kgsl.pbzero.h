// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_KGSL_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_KGSL_PROTO_H_

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

class KgslAdrenoCmdbatchRetiredFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/17, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  KgslAdrenoCmdbatchRetiredFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit KgslAdrenoCmdbatchRetiredFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit KgslAdrenoCmdbatchRetiredFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  uint32_t id() const { return at<1>().as_uint32(); }
  bool has_timestamp() const { return at<2>().valid(); }
  uint32_t timestamp() const { return at<2>().as_uint32(); }
  bool has_inflight() const { return at<3>().valid(); }
  int64_t inflight() const { return at<3>().as_int64(); }
  bool has_recovery() const { return at<4>().valid(); }
  uint32_t recovery() const { return at<4>().as_uint32(); }
  bool has_flags() const { return at<5>().valid(); }
  uint32_t flags() const { return at<5>().as_uint32(); }
  bool has_start() const { return at<6>().valid(); }
  uint64_t start() const { return at<6>().as_uint64(); }
  bool has_retire() const { return at<7>().valid(); }
  uint64_t retire() const { return at<7>().as_uint64(); }
  bool has_prio() const { return at<8>().valid(); }
  int32_t prio() const { return at<8>().as_int32(); }
  bool has_rb_id() const { return at<9>().valid(); }
  int32_t rb_id() const { return at<9>().as_int32(); }
  bool has_rptr() const { return at<10>().valid(); }
  uint32_t rptr() const { return at<10>().as_uint32(); }
  bool has_wptr() const { return at<11>().valid(); }
  uint32_t wptr() const { return at<11>().as_uint32(); }
  bool has_q_inflight() const { return at<12>().valid(); }
  int32_t q_inflight() const { return at<12>().as_int32(); }
  bool has_fault_recovery() const { return at<13>().valid(); }
  uint64_t fault_recovery() const { return at<13>().as_uint64(); }
  bool has_dispatch_queue() const { return at<14>().valid(); }
  uint32_t dispatch_queue() const { return at<14>().as_uint32(); }
  bool has_submitted_to_rb() const { return at<15>().valid(); }
  uint64_t submitted_to_rb() const { return at<15>().as_uint64(); }
  bool has_retired_on_gmu() const { return at<16>().valid(); }
  uint64_t retired_on_gmu() const { return at<16>().as_uint64(); }
  bool has_active() const { return at<17>().valid(); }
  uint64_t active() const { return at<17>().as_uint64(); }
};

class KgslAdrenoCmdbatchRetiredFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = KgslAdrenoCmdbatchRetiredFtraceEvent_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kTimestampFieldNumber = 2,
    kInflightFieldNumber = 3,
    kRecoveryFieldNumber = 4,
    kFlagsFieldNumber = 5,
    kStartFieldNumber = 6,
    kRetireFieldNumber = 7,
    kPrioFieldNumber = 8,
    kRbIdFieldNumber = 9,
    kRptrFieldNumber = 10,
    kWptrFieldNumber = 11,
    kQInflightFieldNumber = 12,
    kFaultRecoveryFieldNumber = 13,
    kDispatchQueueFieldNumber = 14,
    kSubmittedToRbFieldNumber = 15,
    kRetiredOnGmuFieldNumber = 16,
    kActiveFieldNumber = 17,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.KgslAdrenoCmdbatchRetiredFtraceEvent"; }


  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Id kId{};
  void set_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timestamp =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Timestamp kTimestamp{};
  void set_timestamp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Timestamp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Inflight =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Inflight kInflight{};
  void set_inflight(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Inflight::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Recovery =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Recovery kRecovery{};
  void set_recovery(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Recovery::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Flags =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Flags kFlags{};
  void set_flags(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Flags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Start =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Start kStart{};
  void set_start(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Start::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Retire =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Retire kRetire{};
  void set_retire(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Retire::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Prio =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Prio kPrio{};
  void set_prio(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Prio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_RbId =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_RbId kRbId{};
  void set_rb_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_RbId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Rptr =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Rptr kRptr{};
  void set_rptr(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Rptr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Wptr =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Wptr kWptr{};
  void set_wptr(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Wptr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_QInflight =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_QInflight kQInflight{};
  void set_q_inflight(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_QInflight::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_FaultRecovery =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_FaultRecovery kFaultRecovery{};
  void set_fault_recovery(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_FaultRecovery::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DispatchQueue =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_DispatchQueue kDispatchQueue{};
  void set_dispatch_queue(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DispatchQueue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SubmittedToRb =
    ::protozero::proto_utils::FieldMetadata<
      15,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_SubmittedToRb kSubmittedToRb{};
  void set_submitted_to_rb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SubmittedToRb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_RetiredOnGmu =
    ::protozero::proto_utils::FieldMetadata<
      16,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_RetiredOnGmu kRetiredOnGmu{};
  void set_retired_on_gmu(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_RetiredOnGmu::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Active =
    ::protozero::proto_utils::FieldMetadata<
      17,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchRetiredFtraceEvent>;

  static constexpr FieldMetadata_Active kActive{};
  void set_active(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Active::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class KgslAdrenoCmdbatchSyncFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  KgslAdrenoCmdbatchSyncFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit KgslAdrenoCmdbatchSyncFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit KgslAdrenoCmdbatchSyncFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  uint32_t id() const { return at<1>().as_uint32(); }
  bool has_timestamp() const { return at<2>().valid(); }
  uint32_t timestamp() const { return at<2>().as_uint32(); }
  bool has_ticks() const { return at<3>().valid(); }
  uint64_t ticks() const { return at<3>().as_uint64(); }
  bool has_prio() const { return at<4>().valid(); }
  int32_t prio() const { return at<4>().as_int32(); }
};

class KgslAdrenoCmdbatchSyncFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = KgslAdrenoCmdbatchSyncFtraceEvent_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kTimestampFieldNumber = 2,
    kTicksFieldNumber = 3,
    kPrioFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.KgslAdrenoCmdbatchSyncFtraceEvent"; }


  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchSyncFtraceEvent>;

  static constexpr FieldMetadata_Id kId{};
  void set_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timestamp =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchSyncFtraceEvent>;

  static constexpr FieldMetadata_Timestamp kTimestamp{};
  void set_timestamp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Timestamp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Ticks =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchSyncFtraceEvent>;

  static constexpr FieldMetadata_Ticks kTicks{};
  void set_ticks(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Ticks::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Prio =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchSyncFtraceEvent>;

  static constexpr FieldMetadata_Prio kPrio{};
  void set_prio(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Prio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class KgslAdrenoCmdbatchSubmittedFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/13, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  KgslAdrenoCmdbatchSubmittedFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit KgslAdrenoCmdbatchSubmittedFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit KgslAdrenoCmdbatchSubmittedFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  uint32_t id() const { return at<1>().as_uint32(); }
  bool has_timestamp() const { return at<2>().valid(); }
  uint32_t timestamp() const { return at<2>().as_uint32(); }
  bool has_inflight() const { return at<3>().valid(); }
  int64_t inflight() const { return at<3>().as_int64(); }
  bool has_flags() const { return at<4>().valid(); }
  uint32_t flags() const { return at<4>().as_uint32(); }
  bool has_ticks() const { return at<5>().valid(); }
  uint64_t ticks() const { return at<5>().as_uint64(); }
  bool has_secs() const { return at<6>().valid(); }
  uint64_t secs() const { return at<6>().as_uint64(); }
  bool has_usecs() const { return at<7>().valid(); }
  uint64_t usecs() const { return at<7>().as_uint64(); }
  bool has_prio() const { return at<8>().valid(); }
  int32_t prio() const { return at<8>().as_int32(); }
  bool has_rb_id() const { return at<9>().valid(); }
  int32_t rb_id() const { return at<9>().as_int32(); }
  bool has_rptr() const { return at<10>().valid(); }
  uint32_t rptr() const { return at<10>().as_uint32(); }
  bool has_wptr() const { return at<11>().valid(); }
  uint32_t wptr() const { return at<11>().as_uint32(); }
  bool has_q_inflight() const { return at<12>().valid(); }
  int32_t q_inflight() const { return at<12>().as_int32(); }
  bool has_dispatch_queue() const { return at<13>().valid(); }
  int32_t dispatch_queue() const { return at<13>().as_int32(); }
};

class KgslAdrenoCmdbatchSubmittedFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = KgslAdrenoCmdbatchSubmittedFtraceEvent_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kTimestampFieldNumber = 2,
    kInflightFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kTicksFieldNumber = 5,
    kSecsFieldNumber = 6,
    kUsecsFieldNumber = 7,
    kPrioFieldNumber = 8,
    kRbIdFieldNumber = 9,
    kRptrFieldNumber = 10,
    kWptrFieldNumber = 11,
    kQInflightFieldNumber = 12,
    kDispatchQueueFieldNumber = 13,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.KgslAdrenoCmdbatchSubmittedFtraceEvent"; }


  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Id kId{};
  void set_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timestamp =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Timestamp kTimestamp{};
  void set_timestamp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Timestamp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Inflight =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Inflight kInflight{};
  void set_inflight(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Inflight::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Flags =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Flags kFlags{};
  void set_flags(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Flags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Ticks =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Ticks kTicks{};
  void set_ticks(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Ticks::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Secs =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Secs kSecs{};
  void set_secs(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Secs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Usecs =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Usecs kUsecs{};
  void set_usecs(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Usecs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Prio =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Prio kPrio{};
  void set_prio(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Prio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_RbId =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_RbId kRbId{};
  void set_rb_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_RbId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Rptr =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Rptr kRptr{};
  void set_rptr(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Rptr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Wptr =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_Wptr kWptr{};
  void set_wptr(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Wptr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_QInflight =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_QInflight kQInflight{};
  void set_q_inflight(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_QInflight::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DispatchQueue =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      KgslAdrenoCmdbatchSubmittedFtraceEvent>;

  static constexpr FieldMetadata_DispatchQueue kDispatchQueue{};
  void set_dispatch_queue(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DispatchQueue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class KgslAdrenoCmdbatchQueuedFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  KgslAdrenoCmdbatchQueuedFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit KgslAdrenoCmdbatchQueuedFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit KgslAdrenoCmdbatchQueuedFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  uint32_t id() const { return at<1>().as_uint32(); }
  bool has_timestamp() const { return at<2>().valid(); }
  uint32_t timestamp() const { return at<2>().as_uint32(); }
  bool has_queued() const { return at<3>().valid(); }
  uint32_t queued() const { return at<3>().as_uint32(); }
  bool has_flags() const { return at<4>().valid(); }
  uint32_t flags() const { return at<4>().as_uint32(); }
  bool has_prio() const { return at<5>().valid(); }
  uint32_t prio() const { return at<5>().as_uint32(); }
};

class KgslAdrenoCmdbatchQueuedFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = KgslAdrenoCmdbatchQueuedFtraceEvent_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kTimestampFieldNumber = 2,
    kQueuedFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kPrioFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.KgslAdrenoCmdbatchQueuedFtraceEvent"; }


  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchQueuedFtraceEvent>;

  static constexpr FieldMetadata_Id kId{};
  void set_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Timestamp =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchQueuedFtraceEvent>;

  static constexpr FieldMetadata_Timestamp kTimestamp{};
  void set_timestamp(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Timestamp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Queued =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchQueuedFtraceEvent>;

  static constexpr FieldMetadata_Queued kQueued{};
  void set_queued(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Queued::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Flags =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchQueuedFtraceEvent>;

  static constexpr FieldMetadata_Flags kFlags{};
  void set_flags(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Flags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Prio =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslAdrenoCmdbatchQueuedFtraceEvent>;

  static constexpr FieldMetadata_Prio kPrio{};
  void set_prio(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Prio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

class KgslGpuFrequencyFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  KgslGpuFrequencyFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit KgslGpuFrequencyFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit KgslGpuFrequencyFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_gpu_freq() const { return at<1>().valid(); }
  uint32_t gpu_freq() const { return at<1>().as_uint32(); }
  bool has_gpu_id() const { return at<2>().valid(); }
  uint32_t gpu_id() const { return at<2>().as_uint32(); }
};

class KgslGpuFrequencyFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = KgslGpuFrequencyFtraceEvent_Decoder;
  enum : int32_t {
    kGpuFreqFieldNumber = 1,
    kGpuIdFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.KgslGpuFrequencyFtraceEvent"; }


  using FieldMetadata_GpuFreq =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslGpuFrequencyFtraceEvent>;

  static constexpr FieldMetadata_GpuFreq kGpuFreq{};
  void set_gpu_freq(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_GpuFreq::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_GpuId =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      KgslGpuFrequencyFtraceEvent>;

  static constexpr FieldMetadata_GpuId kGpuId{};
  void set_gpu_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_GpuId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
