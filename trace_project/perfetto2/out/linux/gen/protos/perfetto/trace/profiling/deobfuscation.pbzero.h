// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_PROFILING_DEOBFUSCATION_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_PROFILING_DEOBFUSCATION_PROTO_H_

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
class ObfuscatedClass;
class ObfuscatedMember;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class DeobfuscationMapping_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  DeobfuscationMapping_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DeobfuscationMapping_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DeobfuscationMapping_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_package_name() const { return at<1>().valid(); }
  ::protozero::ConstChars package_name() const { return at<1>().as_string(); }
  bool has_version_code() const { return at<2>().valid(); }
  int64_t version_code() const { return at<2>().as_int64(); }
  bool has_obfuscated_classes() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> obfuscated_classes() const { return GetRepeated<::protozero::ConstBytes>(3); }
};

class DeobfuscationMapping : public ::protozero::Message {
 public:
  using Decoder = DeobfuscationMapping_Decoder;
  enum : int32_t {
    kPackageNameFieldNumber = 1,
    kVersionCodeFieldNumber = 2,
    kObfuscatedClassesFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DeobfuscationMapping"; }


  using FieldMetadata_PackageName =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DeobfuscationMapping>;

  static constexpr FieldMetadata_PackageName kPackageName{};
  void set_package_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_PackageName::kFieldId, data, size);
  }
  void set_package_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_PackageName::kFieldId, chars.data, chars.size);
  }
  void set_package_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_PackageName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_VersionCode =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      DeobfuscationMapping>;

  static constexpr FieldMetadata_VersionCode kVersionCode{};
  void set_version_code(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_VersionCode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ObfuscatedClasses =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      ObfuscatedClass,
      DeobfuscationMapping>;

  static constexpr FieldMetadata_ObfuscatedClasses kObfuscatedClasses{};
  template <typename T = ObfuscatedClass> T* add_obfuscated_classes() {
    return BeginNestedMessage<T>(3);
  }

};

class ObfuscatedClass_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ObfuscatedClass_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ObfuscatedClass_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ObfuscatedClass_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_obfuscated_name() const { return at<1>().valid(); }
  ::protozero::ConstChars obfuscated_name() const { return at<1>().as_string(); }
  bool has_deobfuscated_name() const { return at<2>().valid(); }
  ::protozero::ConstChars deobfuscated_name() const { return at<2>().as_string(); }
  bool has_obfuscated_members() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> obfuscated_members() const { return GetRepeated<::protozero::ConstBytes>(3); }
  bool has_obfuscated_methods() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> obfuscated_methods() const { return GetRepeated<::protozero::ConstBytes>(4); }
};

class ObfuscatedClass : public ::protozero::Message {
 public:
  using Decoder = ObfuscatedClass_Decoder;
  enum : int32_t {
    kObfuscatedNameFieldNumber = 1,
    kDeobfuscatedNameFieldNumber = 2,
    kObfuscatedMembersFieldNumber = 3,
    kObfuscatedMethodsFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ObfuscatedClass"; }


  using FieldMetadata_ObfuscatedName =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ObfuscatedClass>;

  static constexpr FieldMetadata_ObfuscatedName kObfuscatedName{};
  void set_obfuscated_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ObfuscatedName::kFieldId, data, size);
  }
  void set_obfuscated_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ObfuscatedName::kFieldId, chars.data, chars.size);
  }
  void set_obfuscated_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ObfuscatedName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DeobfuscatedName =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ObfuscatedClass>;

  static constexpr FieldMetadata_DeobfuscatedName kDeobfuscatedName{};
  void set_deobfuscated_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_DeobfuscatedName::kFieldId, data, size);
  }
  void set_deobfuscated_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_DeobfuscatedName::kFieldId, chars.data, chars.size);
  }
  void set_deobfuscated_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_DeobfuscatedName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ObfuscatedMembers =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      ObfuscatedMember,
      ObfuscatedClass>;

  static constexpr FieldMetadata_ObfuscatedMembers kObfuscatedMembers{};
  template <typename T = ObfuscatedMember> T* add_obfuscated_members() {
    return BeginNestedMessage<T>(3);
  }


  using FieldMetadata_ObfuscatedMethods =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      ObfuscatedMember,
      ObfuscatedClass>;

  static constexpr FieldMetadata_ObfuscatedMethods kObfuscatedMethods{};
  template <typename T = ObfuscatedMember> T* add_obfuscated_methods() {
    return BeginNestedMessage<T>(4);
  }

};

class ObfuscatedMember_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ObfuscatedMember_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ObfuscatedMember_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ObfuscatedMember_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_obfuscated_name() const { return at<1>().valid(); }
  ::protozero::ConstChars obfuscated_name() const { return at<1>().as_string(); }
  bool has_deobfuscated_name() const { return at<2>().valid(); }
  ::protozero::ConstChars deobfuscated_name() const { return at<2>().as_string(); }
};

class ObfuscatedMember : public ::protozero::Message {
 public:
  using Decoder = ObfuscatedMember_Decoder;
  enum : int32_t {
    kObfuscatedNameFieldNumber = 1,
    kDeobfuscatedNameFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ObfuscatedMember"; }


  using FieldMetadata_ObfuscatedName =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ObfuscatedMember>;

  static constexpr FieldMetadata_ObfuscatedName kObfuscatedName{};
  void set_obfuscated_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ObfuscatedName::kFieldId, data, size);
  }
  void set_obfuscated_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ObfuscatedName::kFieldId, chars.data, chars.size);
  }
  void set_obfuscated_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ObfuscatedName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DeobfuscatedName =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ObfuscatedMember>;

  static constexpr FieldMetadata_DeobfuscatedName kDeobfuscatedName{};
  void set_deobfuscated_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_DeobfuscatedName::kFieldId, data, size);
  }
  void set_deobfuscated_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_DeobfuscatedName::kFieldId, chars.data, chars.size);
  }
  void set_deobfuscated_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_DeobfuscatedName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.