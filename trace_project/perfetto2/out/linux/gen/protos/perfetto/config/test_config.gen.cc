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
#include "protos/perfetto/config/test_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

TestConfig::TestConfig() = default;
TestConfig::~TestConfig() = default;
TestConfig::TestConfig(const TestConfig&) = default;
TestConfig& TestConfig::operator=(const TestConfig&) = default;
TestConfig::TestConfig(TestConfig&&) noexcept = default;
TestConfig& TestConfig::operator=(TestConfig&&) = default;

bool TestConfig::operator==(const TestConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(message_count_, other.message_count_)
   && ::protozero::internal::gen_helpers::EqualsField(max_messages_per_second_, other.max_messages_per_second_)
   && ::protozero::internal::gen_helpers::EqualsField(seed_, other.seed_)
   && ::protozero::internal::gen_helpers::EqualsField(message_size_, other.message_size_)
   && ::protozero::internal::gen_helpers::EqualsField(send_batch_on_register_, other.send_batch_on_register_)
   && ::protozero::internal::gen_helpers::EqualsField(dummy_fields_, other.dummy_fields_);
}

bool TestConfig::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* message_count */:
        field.get(&message_count_);
        break;
      case 2 /* max_messages_per_second */:
        field.get(&max_messages_per_second_);
        break;
      case 3 /* seed */:
        field.get(&seed_);
        break;
      case 4 /* message_size */:
        field.get(&message_size_);
        break;
      case 5 /* send_batch_on_register */:
        field.get(&send_batch_on_register_);
        break;
      case 6 /* dummy_fields */:
        (*dummy_fields_).ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TestConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TestConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TestConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: message_count
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, message_count_, msg);
  }

  // Field 2: max_messages_per_second
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, max_messages_per_second_, msg);
  }

  // Field 3: seed
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, seed_, msg);
  }

  // Field 4: message_size
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, message_size_, msg);
  }

  // Field 5: send_batch_on_register
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(5, send_batch_on_register_, msg);
  }

  // Field 6: dummy_fields
  if (_has_field_[6]) {
    (*dummy_fields_).Serialize(msg->BeginNestedMessage<::protozero::Message>(6));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


TestConfig_DummyFields::TestConfig_DummyFields() = default;
TestConfig_DummyFields::~TestConfig_DummyFields() = default;
TestConfig_DummyFields::TestConfig_DummyFields(const TestConfig_DummyFields&) = default;
TestConfig_DummyFields& TestConfig_DummyFields::operator=(const TestConfig_DummyFields&) = default;
TestConfig_DummyFields::TestConfig_DummyFields(TestConfig_DummyFields&&) noexcept = default;
TestConfig_DummyFields& TestConfig_DummyFields::operator=(TestConfig_DummyFields&&) = default;

bool TestConfig_DummyFields::operator==(const TestConfig_DummyFields& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(field_uint32_, other.field_uint32_)
   && ::protozero::internal::gen_helpers::EqualsField(field_int32_, other.field_int32_)
   && ::protozero::internal::gen_helpers::EqualsField(field_uint64_, other.field_uint64_)
   && ::protozero::internal::gen_helpers::EqualsField(field_int64_, other.field_int64_)
   && ::protozero::internal::gen_helpers::EqualsField(field_fixed64_, other.field_fixed64_)
   && ::protozero::internal::gen_helpers::EqualsField(field_sfixed64_, other.field_sfixed64_)
   && ::protozero::internal::gen_helpers::EqualsField(field_fixed32_, other.field_fixed32_)
   && ::protozero::internal::gen_helpers::EqualsField(field_sfixed32_, other.field_sfixed32_)
   && ::protozero::internal::gen_helpers::EqualsField(field_double_, other.field_double_)
   && ::protozero::internal::gen_helpers::EqualsField(field_float_, other.field_float_)
   && ::protozero::internal::gen_helpers::EqualsField(field_sint64_, other.field_sint64_)
   && ::protozero::internal::gen_helpers::EqualsField(field_sint32_, other.field_sint32_)
   && ::protozero::internal::gen_helpers::EqualsField(field_string_, other.field_string_)
   && ::protozero::internal::gen_helpers::EqualsField(field_bytes_, other.field_bytes_);
}

bool TestConfig_DummyFields::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* field_uint32 */:
        field.get(&field_uint32_);
        break;
      case 2 /* field_int32 */:
        field.get(&field_int32_);
        break;
      case 3 /* field_uint64 */:
        field.get(&field_uint64_);
        break;
      case 4 /* field_int64 */:
        field.get(&field_int64_);
        break;
      case 5 /* field_fixed64 */:
        field.get(&field_fixed64_);
        break;
      case 6 /* field_sfixed64 */:
        field.get(&field_sfixed64_);
        break;
      case 7 /* field_fixed32 */:
        field.get(&field_fixed32_);
        break;
      case 8 /* field_sfixed32 */:
        field.get(&field_sfixed32_);
        break;
      case 9 /* field_double */:
        field.get(&field_double_);
        break;
      case 10 /* field_float */:
        field.get(&field_float_);
        break;
      case 11 /* field_sint64 */:
        field.get_signed(&field_sint64_);
        break;
      case 12 /* field_sint32 */:
        field.get_signed(&field_sint32_);
        break;
      case 13 /* field_string */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &field_string_);
        break;
      case 14 /* field_bytes */:
        field.get(&field_bytes_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TestConfig_DummyFields::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TestConfig_DummyFields::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TestConfig_DummyFields::Serialize(::protozero::Message* msg) const {
  // Field 1: field_uint32
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, field_uint32_, msg);
  }

  // Field 2: field_int32
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, field_int32_, msg);
  }

  // Field 3: field_uint64
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, field_uint64_, msg);
  }

  // Field 4: field_int64
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, field_int64_, msg);
  }

  // Field 5: field_fixed64
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeFixed(5, field_fixed64_, msg);
  }

  // Field 6: field_sfixed64
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeFixed(6, field_sfixed64_, msg);
  }

  // Field 7: field_fixed32
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeFixed(7, field_fixed32_, msg);
  }

  // Field 8: field_sfixed32
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeFixed(8, field_sfixed32_, msg);
  }

  // Field 9: field_double
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeFixed(9, field_double_, msg);
  }

  // Field 10: field_float
  if (_has_field_[10]) {
    ::protozero::internal::gen_helpers::SerializeFixed(10, field_float_, msg);
  }

  // Field 11: field_sint64
  if (_has_field_[11]) {
    ::protozero::internal::gen_helpers::SerializeSignedVarInt(11, field_sint64_, msg);
  }

  // Field 12: field_sint32
  if (_has_field_[12]) {
    ::protozero::internal::gen_helpers::SerializeSignedVarInt(12, field_sint32_, msg);
  }

  // Field 13: field_string
  if (_has_field_[13]) {
    ::protozero::internal::gen_helpers::SerializeString(13, field_string_, msg);
  }

  // Field 14: field_bytes
  if (_has_field_[14]) {
    ::protozero::internal::gen_helpers::SerializeString(14, field_bytes_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
