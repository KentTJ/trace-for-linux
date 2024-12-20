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
#include "protos/perfetto/ipc/relay_port.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

SyncClockResponse::SyncClockResponse() = default;
SyncClockResponse::~SyncClockResponse() = default;
SyncClockResponse::SyncClockResponse(const SyncClockResponse&) = default;
SyncClockResponse& SyncClockResponse::operator=(const SyncClockResponse&) = default;
SyncClockResponse::SyncClockResponse(SyncClockResponse&&) noexcept = default;
SyncClockResponse& SyncClockResponse::operator=(SyncClockResponse&&) = default;

bool SyncClockResponse::operator==(const SyncClockResponse& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_);
}

bool SyncClockResponse::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SyncClockResponse::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SyncClockResponse::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SyncClockResponse::Serialize(::protozero::Message* msg) const {
  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


SyncClockRequest::SyncClockRequest() = default;
SyncClockRequest::~SyncClockRequest() = default;
SyncClockRequest::SyncClockRequest(const SyncClockRequest&) = default;
SyncClockRequest& SyncClockRequest::operator=(const SyncClockRequest&) = default;
SyncClockRequest::SyncClockRequest(SyncClockRequest&&) noexcept = default;
SyncClockRequest& SyncClockRequest::operator=(SyncClockRequest&&) = default;

bool SyncClockRequest::operator==(const SyncClockRequest& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(phase_, other.phase_)
   && ::protozero::internal::gen_helpers::EqualsField(clocks_, other.clocks_);
}

int SyncClockRequest::clocks_size() const { return static_cast<int>(clocks_.size()); }
void SyncClockRequest::clear_clocks() { clocks_.clear(); }
SyncClockRequest_Clock* SyncClockRequest::add_clocks() { clocks_.emplace_back(); return &clocks_.back(); }
bool SyncClockRequest::ParseFromArray(const void* raw, size_t size) {
  clocks_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* phase */:
        field.get(&phase_);
        break;
      case 2 /* clocks */:
        clocks_.emplace_back();
        clocks_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SyncClockRequest::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SyncClockRequest::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SyncClockRequest::Serialize(::protozero::Message* msg) const {
  // Field 1: phase
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, phase_, msg);
  }

  // Field 2: clocks
  for (auto& it : clocks_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


SyncClockRequest_Clock::SyncClockRequest_Clock() = default;
SyncClockRequest_Clock::~SyncClockRequest_Clock() = default;
SyncClockRequest_Clock::SyncClockRequest_Clock(const SyncClockRequest_Clock&) = default;
SyncClockRequest_Clock& SyncClockRequest_Clock::operator=(const SyncClockRequest_Clock&) = default;
SyncClockRequest_Clock::SyncClockRequest_Clock(SyncClockRequest_Clock&&) noexcept = default;
SyncClockRequest_Clock& SyncClockRequest_Clock::operator=(SyncClockRequest_Clock&&) = default;

bool SyncClockRequest_Clock::operator==(const SyncClockRequest_Clock& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(clock_id_, other.clock_id_)
   && ::protozero::internal::gen_helpers::EqualsField(timestamp_, other.timestamp_);
}

bool SyncClockRequest_Clock::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* clock_id */:
        field.get(&clock_id_);
        break;
      case 2 /* timestamp */:
        field.get(&timestamp_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SyncClockRequest_Clock::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SyncClockRequest_Clock::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SyncClockRequest_Clock::Serialize(::protozero::Message* msg) const {
  // Field 1: clock_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, clock_id_, msg);
  }

  // Field 2: timestamp
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, timestamp_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
