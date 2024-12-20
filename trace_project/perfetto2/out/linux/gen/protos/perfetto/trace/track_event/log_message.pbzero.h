// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_LOG_MESSAGE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_LOG_MESSAGE_PROTO_H_

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
namespace perfetto_pbzero_enum_LogMessage {
enum Priority : int32_t;
}  // namespace perfetto_pbzero_enum_LogMessage
using LogMessage_Priority = perfetto_pbzero_enum_LogMessage::Priority;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

namespace perfetto_pbzero_enum_LogMessage {
enum Priority : int32_t {
  PRIO_UNSPECIFIED = 0,
  PRIO_UNUSED = 1,
  PRIO_VERBOSE = 2,
  PRIO_DEBUG = 3,
  PRIO_INFO = 4,
  PRIO_WARN = 5,
  PRIO_ERROR = 6,
  PRIO_FATAL = 7,
};
} // namespace perfetto_pbzero_enum_LogMessage
using LogMessage_Priority = perfetto_pbzero_enum_LogMessage::Priority;


constexpr LogMessage_Priority LogMessage_Priority_MIN = LogMessage_Priority::PRIO_UNSPECIFIED;
constexpr LogMessage_Priority LogMessage_Priority_MAX = LogMessage_Priority::PRIO_FATAL;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* LogMessage_Priority_Name(::perfetto::protos::pbzero::LogMessage_Priority value) {
  switch (value) {
  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_UNSPECIFIED:
    return "PRIO_UNSPECIFIED";

  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_UNUSED:
    return "PRIO_UNUSED";

  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_VERBOSE:
    return "PRIO_VERBOSE";

  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_DEBUG:
    return "PRIO_DEBUG";

  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_INFO:
    return "PRIO_INFO";

  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_WARN:
    return "PRIO_WARN";

  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_ERROR:
    return "PRIO_ERROR";

  case ::perfetto::protos::pbzero::LogMessage_Priority::PRIO_FATAL:
    return "PRIO_FATAL";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class LogMessageBody_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  LogMessageBody_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit LogMessageBody_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit LogMessageBody_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_iid() const { return at<1>().valid(); }
  uint64_t iid() const { return at<1>().as_uint64(); }
  bool has_body() const { return at<2>().valid(); }
  ::protozero::ConstChars body() const { return at<2>().as_string(); }
};

class LogMessageBody : public ::protozero::Message {
 public:
  using Decoder = LogMessageBody_Decoder;
  enum : int32_t {
    kIidFieldNumber = 1,
    kBodyFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.LogMessageBody"; }


  using FieldMetadata_Iid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      LogMessageBody>;

  static constexpr FieldMetadata_Iid kIid{};
  void set_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Iid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Body =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      LogMessageBody>;

  static constexpr FieldMetadata_Body kBody{};
  void set_body(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Body::kFieldId, data, size);
  }
  void set_body(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Body::kFieldId, chars.data, chars.size);
  }
  void set_body(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Body::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class LogMessage_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  LogMessage_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit LogMessage_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit LogMessage_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_source_location_iid() const { return at<1>().valid(); }
  uint64_t source_location_iid() const { return at<1>().as_uint64(); }
  bool has_body_iid() const { return at<2>().valid(); }
  uint64_t body_iid() const { return at<2>().as_uint64(); }
  bool has_prio() const { return at<3>().valid(); }
  int32_t prio() const { return at<3>().as_int32(); }
};

class LogMessage : public ::protozero::Message {
 public:
  using Decoder = LogMessage_Decoder;
  enum : int32_t {
    kSourceLocationIidFieldNumber = 1,
    kBodyIidFieldNumber = 2,
    kPrioFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.LogMessage"; }


  using Priority = ::perfetto::protos::pbzero::LogMessage_Priority;
  static inline const char* Priority_Name(Priority value) {
    return ::perfetto::protos::pbzero::LogMessage_Priority_Name(value);
  }
  static inline const Priority PRIO_UNSPECIFIED = Priority::PRIO_UNSPECIFIED;
  static inline const Priority PRIO_UNUSED = Priority::PRIO_UNUSED;
  static inline const Priority PRIO_VERBOSE = Priority::PRIO_VERBOSE;
  static inline const Priority PRIO_DEBUG = Priority::PRIO_DEBUG;
  static inline const Priority PRIO_INFO = Priority::PRIO_INFO;
  static inline const Priority PRIO_WARN = Priority::PRIO_WARN;
  static inline const Priority PRIO_ERROR = Priority::PRIO_ERROR;
  static inline const Priority PRIO_FATAL = Priority::PRIO_FATAL;

  using FieldMetadata_SourceLocationIid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      LogMessage>;

  static constexpr FieldMetadata_SourceLocationIid kSourceLocationIid{};
  void set_source_location_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SourceLocationIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_BodyIid =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      LogMessage>;

  static constexpr FieldMetadata_BodyIid kBodyIid{};
  void set_body_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_BodyIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Prio =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      LogMessage_Priority,
      LogMessage>;

  static constexpr FieldMetadata_Prio kPrio{};
  void set_prio(LogMessage_Priority value) {
    static constexpr uint32_t field_id = FieldMetadata_Prio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
