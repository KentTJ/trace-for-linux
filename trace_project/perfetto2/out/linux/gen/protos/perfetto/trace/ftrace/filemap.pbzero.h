// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FILEMAP_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FILEMAP_PROTO_H_

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

class MmFilemapDeleteFromPageCacheFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  MmFilemapDeleteFromPageCacheFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MmFilemapDeleteFromPageCacheFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MmFilemapDeleteFromPageCacheFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pfn() const { return at<1>().valid(); }
  uint64_t pfn() const { return at<1>().as_uint64(); }
  bool has_i_ino() const { return at<2>().valid(); }
  uint64_t i_ino() const { return at<2>().as_uint64(); }
  bool has_index() const { return at<3>().valid(); }
  uint64_t index() const { return at<3>().as_uint64(); }
  bool has_s_dev() const { return at<4>().valid(); }
  uint64_t s_dev() const { return at<4>().as_uint64(); }
  bool has_page() const { return at<5>().valid(); }
  uint64_t page() const { return at<5>().as_uint64(); }
};

class MmFilemapDeleteFromPageCacheFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = MmFilemapDeleteFromPageCacheFtraceEvent_Decoder;
  enum : int32_t {
    kPfnFieldNumber = 1,
    kIInoFieldNumber = 2,
    kIndexFieldNumber = 3,
    kSDevFieldNumber = 4,
    kPageFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent"; }


  using FieldMetadata_Pfn =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapDeleteFromPageCacheFtraceEvent>;

  static constexpr FieldMetadata_Pfn kPfn{};
  void set_pfn(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pfn::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IIno =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapDeleteFromPageCacheFtraceEvent>;

  static constexpr FieldMetadata_IIno kIIno{};
  void set_i_ino(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_IIno::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Index =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapDeleteFromPageCacheFtraceEvent>;

  static constexpr FieldMetadata_Index kIndex{};
  void set_index(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Index::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SDev =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapDeleteFromPageCacheFtraceEvent>;

  static constexpr FieldMetadata_SDev kSDev{};
  void set_s_dev(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SDev::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Page =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapDeleteFromPageCacheFtraceEvent>;

  static constexpr FieldMetadata_Page kPage{};
  void set_page(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Page::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class MmFilemapAddToPageCacheFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  MmFilemapAddToPageCacheFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MmFilemapAddToPageCacheFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MmFilemapAddToPageCacheFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pfn() const { return at<1>().valid(); }
  uint64_t pfn() const { return at<1>().as_uint64(); }
  bool has_i_ino() const { return at<2>().valid(); }
  uint64_t i_ino() const { return at<2>().as_uint64(); }
  bool has_index() const { return at<3>().valid(); }
  uint64_t index() const { return at<3>().as_uint64(); }
  bool has_s_dev() const { return at<4>().valid(); }
  uint64_t s_dev() const { return at<4>().as_uint64(); }
  bool has_page() const { return at<5>().valid(); }
  uint64_t page() const { return at<5>().as_uint64(); }
};

class MmFilemapAddToPageCacheFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = MmFilemapAddToPageCacheFtraceEvent_Decoder;
  enum : int32_t {
    kPfnFieldNumber = 1,
    kIInoFieldNumber = 2,
    kIndexFieldNumber = 3,
    kSDevFieldNumber = 4,
    kPageFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.MmFilemapAddToPageCacheFtraceEvent"; }


  using FieldMetadata_Pfn =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapAddToPageCacheFtraceEvent>;

  static constexpr FieldMetadata_Pfn kPfn{};
  void set_pfn(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pfn::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IIno =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapAddToPageCacheFtraceEvent>;

  static constexpr FieldMetadata_IIno kIIno{};
  void set_i_ino(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_IIno::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Index =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapAddToPageCacheFtraceEvent>;

  static constexpr FieldMetadata_Index kIndex{};
  void set_index(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Index::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SDev =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapAddToPageCacheFtraceEvent>;

  static constexpr FieldMetadata_SDev kSDev{};
  void set_s_dev(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SDev::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Page =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      MmFilemapAddToPageCacheFtraceEvent>;

  static constexpr FieldMetadata_Page kPage{};
  void set_page(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Page::kFieldId;
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
