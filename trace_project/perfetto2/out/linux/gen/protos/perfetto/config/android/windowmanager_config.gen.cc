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
#include "protos/perfetto/config/android/windowmanager_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

WindowManagerConfig::WindowManagerConfig() = default;
WindowManagerConfig::~WindowManagerConfig() = default;
WindowManagerConfig::WindowManagerConfig(const WindowManagerConfig&) = default;
WindowManagerConfig& WindowManagerConfig::operator=(const WindowManagerConfig&) = default;
WindowManagerConfig::WindowManagerConfig(WindowManagerConfig&&) noexcept = default;
WindowManagerConfig& WindowManagerConfig::operator=(WindowManagerConfig&&) = default;

bool WindowManagerConfig::operator==(const WindowManagerConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(log_frequency_, other.log_frequency_)
   && ::protozero::internal::gen_helpers::EqualsField(log_level_, other.log_level_);
}

bool WindowManagerConfig::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* log_frequency */:
        field.get(&log_frequency_);
        break;
      case 2 /* log_level */:
        field.get(&log_level_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string WindowManagerConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> WindowManagerConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void WindowManagerConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: log_frequency
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, log_frequency_, msg);
  }

  // Field 2: log_level
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, log_level_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif