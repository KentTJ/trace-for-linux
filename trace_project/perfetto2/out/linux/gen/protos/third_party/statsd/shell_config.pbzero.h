// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_THIRD_PARTY_STATSD_SHELL_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_THIRD_PARTY_STATSD_SHELL_CONFIG_PROTO_H_

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
class StatsdPulledAtomSubscription;
class StatsdSimpleAtomMatcher;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class StatsdSimpleAtomMatcher_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  StatsdSimpleAtomMatcher_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit StatsdSimpleAtomMatcher_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit StatsdSimpleAtomMatcher_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_atom_id() const { return at<1>().valid(); }
  int32_t atom_id() const { return at<1>().as_int32(); }
};

class StatsdSimpleAtomMatcher : public ::protozero::Message {
 public:
  using Decoder = StatsdSimpleAtomMatcher_Decoder;
  enum : int32_t {
    kAtomIdFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.StatsdSimpleAtomMatcher"; }


  using FieldMetadata_AtomId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      StatsdSimpleAtomMatcher>;

  static constexpr FieldMetadata_AtomId kAtomId{};
  void set_atom_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_AtomId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class StatsdPulledAtomSubscription_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  StatsdPulledAtomSubscription_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit StatsdPulledAtomSubscription_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit StatsdPulledAtomSubscription_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_matcher() const { return at<1>().valid(); }
  ::protozero::ConstBytes matcher() const { return at<1>().as_bytes(); }
  bool has_freq_millis() const { return at<2>().valid(); }
  int32_t freq_millis() const { return at<2>().as_int32(); }
  bool has_packages() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> packages() const { return GetRepeated<::protozero::ConstChars>(3); }
};

class StatsdPulledAtomSubscription : public ::protozero::Message {
 public:
  using Decoder = StatsdPulledAtomSubscription_Decoder;
  enum : int32_t {
    kMatcherFieldNumber = 1,
    kFreqMillisFieldNumber = 2,
    kPackagesFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.StatsdPulledAtomSubscription"; }


  using FieldMetadata_Matcher =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      StatsdSimpleAtomMatcher,
      StatsdPulledAtomSubscription>;

  static constexpr FieldMetadata_Matcher kMatcher{};
  template <typename T = StatsdSimpleAtomMatcher> T* set_matcher() {
    return BeginNestedMessage<T>(1);
  }


  using FieldMetadata_FreqMillis =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      StatsdPulledAtomSubscription>;

  static constexpr FieldMetadata_FreqMillis kFreqMillis{};
  void set_freq_millis(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_FreqMillis::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Packages =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      StatsdPulledAtomSubscription>;

  static constexpr FieldMetadata_Packages kPackages{};
  void add_packages(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Packages::kFieldId, data, size);
  }
  void add_packages(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Packages::kFieldId, chars.data, chars.size);
  }
  void add_packages(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Packages::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class StatsdShellSubscription_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  StatsdShellSubscription_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit StatsdShellSubscription_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit StatsdShellSubscription_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pushed() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> pushed() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_pulled() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> pulled() const { return GetRepeated<::protozero::ConstBytes>(2); }
};

class StatsdShellSubscription : public ::protozero::Message {
 public:
  using Decoder = StatsdShellSubscription_Decoder;
  enum : int32_t {
    kPushedFieldNumber = 1,
    kPulledFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.StatsdShellSubscription"; }


  using FieldMetadata_Pushed =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      StatsdSimpleAtomMatcher,
      StatsdShellSubscription>;

  static constexpr FieldMetadata_Pushed kPushed{};
  template <typename T = StatsdSimpleAtomMatcher> T* add_pushed() {
    return BeginNestedMessage<T>(1);
  }


  using FieldMetadata_Pulled =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      StatsdPulledAtomSubscription,
      StatsdShellSubscription>;

  static constexpr FieldMetadata_Pulled kPulled{};
  template <typename T = StatsdPulledAtomSubscription> T* add_pulled() {
    return BeginNestedMessage<T>(2);
  }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
