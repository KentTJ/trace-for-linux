// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_SURFACEFLINGER_TRANSACTIONS_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_SURFACEFLINGER_TRANSACTIONS_CONFIG_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class SurfaceFlingerTransactionsConfig;
enum SurfaceFlingerTransactionsConfig_Mode : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum SurfaceFlingerTransactionsConfig_Mode : int {
  SurfaceFlingerTransactionsConfig_Mode_MODE_UNSPECIFIED = 0,
  SurfaceFlingerTransactionsConfig_Mode_MODE_CONTINUOUS = 1,
  SurfaceFlingerTransactionsConfig_Mode_MODE_ACTIVE = 2,
};

class PERFETTO_EXPORT_COMPONENT SurfaceFlingerTransactionsConfig : public ::protozero::CppMessageObj {
 public:
  using Mode = SurfaceFlingerTransactionsConfig_Mode;
  static constexpr auto MODE_UNSPECIFIED = SurfaceFlingerTransactionsConfig_Mode_MODE_UNSPECIFIED;
  static constexpr auto MODE_CONTINUOUS = SurfaceFlingerTransactionsConfig_Mode_MODE_CONTINUOUS;
  static constexpr auto MODE_ACTIVE = SurfaceFlingerTransactionsConfig_Mode_MODE_ACTIVE;
  static constexpr auto Mode_MIN = SurfaceFlingerTransactionsConfig_Mode_MODE_UNSPECIFIED;
  static constexpr auto Mode_MAX = SurfaceFlingerTransactionsConfig_Mode_MODE_ACTIVE;
  enum FieldNumbers {
    kModeFieldNumber = 1,
  };

  SurfaceFlingerTransactionsConfig();
  ~SurfaceFlingerTransactionsConfig() override;
  SurfaceFlingerTransactionsConfig(SurfaceFlingerTransactionsConfig&&) noexcept;
  SurfaceFlingerTransactionsConfig& operator=(SurfaceFlingerTransactionsConfig&&);
  SurfaceFlingerTransactionsConfig(const SurfaceFlingerTransactionsConfig&);
  SurfaceFlingerTransactionsConfig& operator=(const SurfaceFlingerTransactionsConfig&);
  bool operator==(const SurfaceFlingerTransactionsConfig&) const;
  bool operator!=(const SurfaceFlingerTransactionsConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_mode() const { return _has_field_[1]; }
  SurfaceFlingerTransactionsConfig_Mode mode() const { return mode_; }
  void set_mode(SurfaceFlingerTransactionsConfig_Mode value) { mode_ = value; _has_field_.set(1); }

 private:
  SurfaceFlingerTransactionsConfig_Mode mode_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_SURFACEFLINGER_TRANSACTIONS_CONFIG_PROTO_CPP_H_
