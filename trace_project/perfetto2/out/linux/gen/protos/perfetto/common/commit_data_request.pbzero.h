// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_COMMIT_DATA_REQUEST_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_COMMIT_DATA_REQUEST_PROTO_H_

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
class CommitDataRequest_ChunkToPatch;
class CommitDataRequest_ChunkToPatch_Patch;
class CommitDataRequest_ChunksToMove;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class CommitDataRequest_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  CommitDataRequest_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_chunks_to_move() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> chunks_to_move() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_chunks_to_patch() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> chunks_to_patch() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_flush_request_id() const { return at<3>().valid(); }
  uint64_t flush_request_id() const { return at<3>().as_uint64(); }
};

class CommitDataRequest : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_Decoder;
  enum : int32_t {
    kChunksToMoveFieldNumber = 1,
    kChunksToPatchFieldNumber = 2,
    kFlushRequestIdFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.CommitDataRequest"; }

  using ChunksToMove = ::perfetto::protos::pbzero::CommitDataRequest_ChunksToMove;
  using ChunkToPatch = ::perfetto::protos::pbzero::CommitDataRequest_ChunkToPatch;

  using FieldMetadata_ChunksToMove =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      CommitDataRequest_ChunksToMove,
      CommitDataRequest>;

  static constexpr FieldMetadata_ChunksToMove kChunksToMove{};
  template <typename T = CommitDataRequest_ChunksToMove> T* add_chunks_to_move() {
    return BeginNestedMessage<T>(1);
  }


  using FieldMetadata_ChunksToPatch =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      CommitDataRequest_ChunkToPatch,
      CommitDataRequest>;

  static constexpr FieldMetadata_ChunksToPatch kChunksToPatch{};
  template <typename T = CommitDataRequest_ChunkToPatch> T* add_chunks_to_patch() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_FlushRequestId =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      CommitDataRequest>;

  static constexpr FieldMetadata_FlushRequestId kFlushRequestId{};
  void set_flush_request_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_FlushRequestId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class CommitDataRequest_ChunkToPatch_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  CommitDataRequest_ChunkToPatch_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_ChunkToPatch_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_ChunkToPatch_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_target_buffer() const { return at<1>().valid(); }
  uint32_t target_buffer() const { return at<1>().as_uint32(); }
  bool has_writer_id() const { return at<2>().valid(); }
  uint32_t writer_id() const { return at<2>().as_uint32(); }
  bool has_chunk_id() const { return at<3>().valid(); }
  uint32_t chunk_id() const { return at<3>().as_uint32(); }
  bool has_patches() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> patches() const { return GetRepeated<::protozero::ConstBytes>(4); }
  bool has_has_more_patches() const { return at<5>().valid(); }
  bool has_more_patches() const { return at<5>().as_bool(); }
};

class CommitDataRequest_ChunkToPatch : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_ChunkToPatch_Decoder;
  enum : int32_t {
    kTargetBufferFieldNumber = 1,
    kWriterIdFieldNumber = 2,
    kChunkIdFieldNumber = 3,
    kPatchesFieldNumber = 4,
    kHasMorePatchesFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.CommitDataRequest.ChunkToPatch"; }

  using Patch = ::perfetto::protos::pbzero::CommitDataRequest_ChunkToPatch_Patch;

  using FieldMetadata_TargetBuffer =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      CommitDataRequest_ChunkToPatch>;

  static constexpr FieldMetadata_TargetBuffer kTargetBuffer{};
  void set_target_buffer(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TargetBuffer::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_WriterId =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      CommitDataRequest_ChunkToPatch>;

  static constexpr FieldMetadata_WriterId kWriterId{};
  void set_writer_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_WriterId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ChunkId =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      CommitDataRequest_ChunkToPatch>;

  static constexpr FieldMetadata_ChunkId kChunkId{};
  void set_chunk_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ChunkId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Patches =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      CommitDataRequest_ChunkToPatch_Patch,
      CommitDataRequest_ChunkToPatch>;

  static constexpr FieldMetadata_Patches kPatches{};
  template <typename T = CommitDataRequest_ChunkToPatch_Patch> T* add_patches() {
    return BeginNestedMessage<T>(4);
  }


  using FieldMetadata_HasMorePatches =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      CommitDataRequest_ChunkToPatch>;

  static constexpr FieldMetadata_HasMorePatches kHasMorePatches{};
  void set_has_more_patches(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasMorePatches::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }
};

class CommitDataRequest_ChunkToPatch_Patch_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CommitDataRequest_ChunkToPatch_Patch_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_ChunkToPatch_Patch_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_ChunkToPatch_Patch_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_offset() const { return at<1>().valid(); }
  uint32_t offset() const { return at<1>().as_uint32(); }
  bool has_data() const { return at<2>().valid(); }
  ::protozero::ConstBytes data() const { return at<2>().as_bytes(); }
};

class CommitDataRequest_ChunkToPatch_Patch : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_ChunkToPatch_Patch_Decoder;
  enum : int32_t {
    kOffsetFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.CommitDataRequest.ChunkToPatch.Patch"; }


  using FieldMetadata_Offset =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      CommitDataRequest_ChunkToPatch_Patch>;

  static constexpr FieldMetadata_Offset kOffset{};
  void set_offset(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Offset::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Data =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBytes,
      std::string,
      CommitDataRequest_ChunkToPatch_Patch>;

  static constexpr FieldMetadata_Data kData{};
  void set_data(const uint8_t* data, size_t size) {
    AppendBytes(FieldMetadata_Data::kFieldId, data, size);
  }
  void set_data(::protozero::ConstBytes bytes) {
    AppendBytes(FieldMetadata_Data::kFieldId, bytes.data, bytes.size);
  }
  void set_data(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Data::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBytes>
        ::Append(*this, field_id, value);
  }
};

class CommitDataRequest_ChunksToMove_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CommitDataRequest_ChunksToMove_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_ChunksToMove_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_ChunksToMove_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_page() const { return at<1>().valid(); }
  uint32_t page() const { return at<1>().as_uint32(); }
  bool has_chunk() const { return at<2>().valid(); }
  uint32_t chunk() const { return at<2>().as_uint32(); }
  bool has_target_buffer() const { return at<3>().valid(); }
  uint32_t target_buffer() const { return at<3>().as_uint32(); }
  bool has_data() const { return at<4>().valid(); }
  ::protozero::ConstBytes data() const { return at<4>().as_bytes(); }
};

class CommitDataRequest_ChunksToMove : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_ChunksToMove_Decoder;
  enum : int32_t {
    kPageFieldNumber = 1,
    kChunkFieldNumber = 2,
    kTargetBufferFieldNumber = 3,
    kDataFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.CommitDataRequest.ChunksToMove"; }


  using FieldMetadata_Page =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      CommitDataRequest_ChunksToMove>;

  static constexpr FieldMetadata_Page kPage{};
  void set_page(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Page::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Chunk =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      CommitDataRequest_ChunksToMove>;

  static constexpr FieldMetadata_Chunk kChunk{};
  void set_chunk(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Chunk::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TargetBuffer =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      CommitDataRequest_ChunksToMove>;

  static constexpr FieldMetadata_TargetBuffer kTargetBuffer{};
  void set_target_buffer(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TargetBuffer::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Data =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBytes,
      std::string,
      CommitDataRequest_ChunksToMove>;

  static constexpr FieldMetadata_Data kData{};
  void set_data(const uint8_t* data, size_t size) {
    AppendBytes(FieldMetadata_Data::kFieldId, data, size);
  }
  void set_data(::protozero::ConstBytes bytes) {
    AppendBytes(FieldMetadata_Data::kFieldId, bytes.data, bytes.size);
  }
  void set_data(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Data::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBytes>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
