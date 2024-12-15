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
#include "protos/perfetto/trace/statsd/statsd_atom.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

StatsdAtom::StatsdAtom() = default;
StatsdAtom::~StatsdAtom() = default;
StatsdAtom::StatsdAtom(const StatsdAtom&) = default;
StatsdAtom& StatsdAtom::operator=(const StatsdAtom&) = default;
StatsdAtom::StatsdAtom(StatsdAtom&&) noexcept = default;
StatsdAtom& StatsdAtom::operator=(StatsdAtom&&) = default;

bool StatsdAtom::operator==(const StatsdAtom& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(atom_, other.atom_)
   && ::protozero::internal::gen_helpers::EqualsField(timestamp_nanos_, other.timestamp_nanos_);
}

int StatsdAtom::atom_size() const { return static_cast<int>(atom_.size()); }
void StatsdAtom::clear_atom() { atom_.clear(); }
Atom* StatsdAtom::add_atom() { atom_.emplace_back(); return &atom_.back(); }
bool StatsdAtom::ParseFromArray(const void* raw, size_t size) {
  atom_.clear();
  timestamp_nanos_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* atom */:
        atom_.emplace_back();
        atom_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* timestamp_nanos */:
        timestamp_nanos_.emplace_back();
        field.get(&timestamp_nanos_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string StatsdAtom::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> StatsdAtom::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void StatsdAtom::Serialize(::protozero::Message* msg) const {
  // Field 1: atom
  for (auto& it : atom_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: timestamp_nanos
  for (auto& it : timestamp_nanos_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, it, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


Atom::Atom() = default;
Atom::~Atom() = default;
Atom::Atom(const Atom&) = default;
Atom& Atom::operator=(const Atom&) = default;
Atom::Atom(Atom&&) noexcept = default;
Atom& Atom::operator=(Atom&&) = default;

bool Atom::operator==(const Atom& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_);
}

bool Atom::ParseFromArray(const void* raw, size_t size) {
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

std::string Atom::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> Atom::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void Atom::Serialize(::protozero::Message* msg) const {
  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
