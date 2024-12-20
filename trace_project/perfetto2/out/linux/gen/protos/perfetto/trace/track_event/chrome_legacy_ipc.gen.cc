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
#include "protos/perfetto/trace/track_event/chrome_legacy_ipc.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeLegacyIpc::ChromeLegacyIpc() = default;
ChromeLegacyIpc::~ChromeLegacyIpc() = default;
ChromeLegacyIpc::ChromeLegacyIpc(const ChromeLegacyIpc&) = default;
ChromeLegacyIpc& ChromeLegacyIpc::operator=(const ChromeLegacyIpc&) = default;
ChromeLegacyIpc::ChromeLegacyIpc(ChromeLegacyIpc&&) noexcept = default;
ChromeLegacyIpc& ChromeLegacyIpc::operator=(ChromeLegacyIpc&&) = default;

bool ChromeLegacyIpc::operator==(const ChromeLegacyIpc& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(message_class_, other.message_class_)
   && ::protozero::internal::gen_helpers::EqualsField(message_line_, other.message_line_);
}

bool ChromeLegacyIpc::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* message_class */:
        field.get(&message_class_);
        break;
      case 2 /* message_line */:
        field.get(&message_line_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeLegacyIpc::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeLegacyIpc::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeLegacyIpc::Serialize(::protozero::Message* msg) const {
  // Field 1: message_class
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, message_class_, msg);
  }

  // Field 2: message_line
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, message_line_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
