// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_WINSCOPE_EXTENSIONS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_WINSCOPE_EXTENSIONS_PROTO_H_

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

class WinscopeExtensions_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  WinscopeExtensions_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit WinscopeExtensions_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit WinscopeExtensions_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
};

class WinscopeExtensions : public ::protozero::Message {
 public:
  using Decoder = WinscopeExtensions_Decoder;
  static constexpr const char* GetName() { return ".perfetto.protos.WinscopeExtensions"; }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
