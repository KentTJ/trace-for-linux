// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_ANDROID_INPUT_EVENT_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_ANDROID_INPUT_EVENT_CONFIG_PROTO_CPP_H_

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
class AndroidInputEventConfig;
class AndroidInputEventConfig_TraceRule;
enum AndroidInputEventConfig_TraceMode : int;
enum AndroidInputEventConfig_TraceLevel : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum AndroidInputEventConfig_TraceMode : int {
  AndroidInputEventConfig_TraceMode_TRACE_MODE_TRACE_ALL = 0,
  AndroidInputEventConfig_TraceMode_TRACE_MODE_USE_RULES = 1,
};
enum AndroidInputEventConfig_TraceLevel : int {
  AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_NONE = 0,
  AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_REDACTED = 1,
  AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_COMPLETE = 2,
};

class PERFETTO_EXPORT_COMPONENT AndroidInputEventConfig : public ::protozero::CppMessageObj {
 public:
  using TraceRule = AndroidInputEventConfig_TraceRule;
  using TraceMode = AndroidInputEventConfig_TraceMode;
  static constexpr auto TRACE_MODE_TRACE_ALL = AndroidInputEventConfig_TraceMode_TRACE_MODE_TRACE_ALL;
  static constexpr auto TRACE_MODE_USE_RULES = AndroidInputEventConfig_TraceMode_TRACE_MODE_USE_RULES;
  static constexpr auto TraceMode_MIN = AndroidInputEventConfig_TraceMode_TRACE_MODE_TRACE_ALL;
  static constexpr auto TraceMode_MAX = AndroidInputEventConfig_TraceMode_TRACE_MODE_USE_RULES;
  using TraceLevel = AndroidInputEventConfig_TraceLevel;
  static constexpr auto TRACE_LEVEL_NONE = AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_NONE;
  static constexpr auto TRACE_LEVEL_REDACTED = AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_REDACTED;
  static constexpr auto TRACE_LEVEL_COMPLETE = AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_COMPLETE;
  static constexpr auto TraceLevel_MIN = AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_NONE;
  static constexpr auto TraceLevel_MAX = AndroidInputEventConfig_TraceLevel_TRACE_LEVEL_COMPLETE;
  enum FieldNumbers {
    kModeFieldNumber = 1,
    kRulesFieldNumber = 2,
    kTraceDispatcherInputEventsFieldNumber = 3,
    kTraceDispatcherWindowDispatchFieldNumber = 4,
  };

  AndroidInputEventConfig();
  ~AndroidInputEventConfig() override;
  AndroidInputEventConfig(AndroidInputEventConfig&&) noexcept;
  AndroidInputEventConfig& operator=(AndroidInputEventConfig&&);
  AndroidInputEventConfig(const AndroidInputEventConfig&);
  AndroidInputEventConfig& operator=(const AndroidInputEventConfig&);
  bool operator==(const AndroidInputEventConfig&) const;
  bool operator!=(const AndroidInputEventConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_mode() const { return _has_field_[1]; }
  AndroidInputEventConfig_TraceMode mode() const { return mode_; }
  void set_mode(AndroidInputEventConfig_TraceMode value) { mode_ = value; _has_field_.set(1); }

  const std::vector<AndroidInputEventConfig_TraceRule>& rules() const { return rules_; }
  std::vector<AndroidInputEventConfig_TraceRule>* mutable_rules() { return &rules_; }
  int rules_size() const;
  void clear_rules();
  AndroidInputEventConfig_TraceRule* add_rules();

  bool has_trace_dispatcher_input_events() const { return _has_field_[3]; }
  bool trace_dispatcher_input_events() const { return trace_dispatcher_input_events_; }
  void set_trace_dispatcher_input_events(bool value) { trace_dispatcher_input_events_ = value; _has_field_.set(3); }

  bool has_trace_dispatcher_window_dispatch() const { return _has_field_[4]; }
  bool trace_dispatcher_window_dispatch() const { return trace_dispatcher_window_dispatch_; }
  void set_trace_dispatcher_window_dispatch(bool value) { trace_dispatcher_window_dispatch_ = value; _has_field_.set(4); }

 private:
  AndroidInputEventConfig_TraceMode mode_{};
  std::vector<AndroidInputEventConfig_TraceRule> rules_;
  bool trace_dispatcher_input_events_{};
  bool trace_dispatcher_window_dispatch_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT AndroidInputEventConfig_TraceRule : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kTraceLevelFieldNumber = 1,
    kMatchAllPackagesFieldNumber = 2,
    kMatchAnyPackagesFieldNumber = 3,
    kMatchSecureFieldNumber = 4,
    kMatchImeConnectionActiveFieldNumber = 5,
  };

  AndroidInputEventConfig_TraceRule();
  ~AndroidInputEventConfig_TraceRule() override;
  AndroidInputEventConfig_TraceRule(AndroidInputEventConfig_TraceRule&&) noexcept;
  AndroidInputEventConfig_TraceRule& operator=(AndroidInputEventConfig_TraceRule&&);
  AndroidInputEventConfig_TraceRule(const AndroidInputEventConfig_TraceRule&);
  AndroidInputEventConfig_TraceRule& operator=(const AndroidInputEventConfig_TraceRule&);
  bool operator==(const AndroidInputEventConfig_TraceRule&) const;
  bool operator!=(const AndroidInputEventConfig_TraceRule& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_trace_level() const { return _has_field_[1]; }
  AndroidInputEventConfig_TraceLevel trace_level() const { return trace_level_; }
  void set_trace_level(AndroidInputEventConfig_TraceLevel value) { trace_level_ = value; _has_field_.set(1); }

  const std::vector<std::string>& match_all_packages() const { return match_all_packages_; }
  std::vector<std::string>* mutable_match_all_packages() { return &match_all_packages_; }
  int match_all_packages_size() const { return static_cast<int>(match_all_packages_.size()); }
  void clear_match_all_packages() { match_all_packages_.clear(); }
  void add_match_all_packages(std::string value) { match_all_packages_.emplace_back(value); }
  std::string* add_match_all_packages() { match_all_packages_.emplace_back(); return &match_all_packages_.back(); }

  const std::vector<std::string>& match_any_packages() const { return match_any_packages_; }
  std::vector<std::string>* mutable_match_any_packages() { return &match_any_packages_; }
  int match_any_packages_size() const { return static_cast<int>(match_any_packages_.size()); }
  void clear_match_any_packages() { match_any_packages_.clear(); }
  void add_match_any_packages(std::string value) { match_any_packages_.emplace_back(value); }
  std::string* add_match_any_packages() { match_any_packages_.emplace_back(); return &match_any_packages_.back(); }

  bool has_match_secure() const { return _has_field_[4]; }
  bool match_secure() const { return match_secure_; }
  void set_match_secure(bool value) { match_secure_ = value; _has_field_.set(4); }

  bool has_match_ime_connection_active() const { return _has_field_[5]; }
  bool match_ime_connection_active() const { return match_ime_connection_active_; }
  void set_match_ime_connection_active(bool value) { match_ime_connection_active_ = value; _has_field_.set(5); }

 private:
  AndroidInputEventConfig_TraceLevel trace_level_{};
  std::vector<std::string> match_all_packages_;
  std::vector<std::string> match_any_packages_;
  bool match_secure_{};
  bool match_ime_connection_active_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_ANDROID_INPUT_EVENT_CONFIG_PROTO_CPP_H_