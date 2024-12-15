// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_SRC_PERFETTO_CMD_PERFETTO_CMD_STATE_PROTO_CPP_H_
#define PERFETTO_SRC_PERFETTO_CMD_PERFETTO_CMD_STATE_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace gen {
class PerfettoCmdState;
class PerfettoCmdState_PerSessionState;
}  // namespace perfetto
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace gen {

class PERFETTO_EXPORT_COMPONENT PerfettoCmdState : public ::protozero::CppMessageObj {
 public:
  using PerSessionState = PerfettoCmdState_PerSessionState;
  enum FieldNumbers {
    kFirstTraceTimestampFieldNumber = 1,
    kLastTraceTimestampFieldNumber = 2,
    kTotalBytesUploadedFieldNumber = 3,
    kSessionStateFieldNumber = 4,
  };

  PerfettoCmdState();
  ~PerfettoCmdState() override;
  PerfettoCmdState(PerfettoCmdState&&) noexcept;
  PerfettoCmdState& operator=(PerfettoCmdState&&);
  PerfettoCmdState(const PerfettoCmdState&);
  PerfettoCmdState& operator=(const PerfettoCmdState&);
  bool operator==(const PerfettoCmdState&) const;
  bool operator!=(const PerfettoCmdState& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_first_trace_timestamp() const { return _has_field_[1]; }
  uint64_t first_trace_timestamp() const { return first_trace_timestamp_; }
  void set_first_trace_timestamp(uint64_t value) { first_trace_timestamp_ = value; _has_field_.set(1); }

  bool has_last_trace_timestamp() const { return _has_field_[2]; }
  uint64_t last_trace_timestamp() const { return last_trace_timestamp_; }
  void set_last_trace_timestamp(uint64_t value) { last_trace_timestamp_ = value; _has_field_.set(2); }

  bool has_total_bytes_uploaded() const { return _has_field_[3]; }
  uint64_t total_bytes_uploaded() const { return total_bytes_uploaded_; }
  void set_total_bytes_uploaded(uint64_t value) { total_bytes_uploaded_ = value; _has_field_.set(3); }

  const std::vector<PerfettoCmdState_PerSessionState>& session_state() const { return session_state_; }
  std::vector<PerfettoCmdState_PerSessionState>* mutable_session_state() { return &session_state_; }
  int session_state_size() const;
  void clear_session_state();
  PerfettoCmdState_PerSessionState* add_session_state();

 private:
  uint64_t first_trace_timestamp_{};
  uint64_t last_trace_timestamp_{};
  uint64_t total_bytes_uploaded_{};
  std::vector<PerfettoCmdState_PerSessionState> session_state_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT PerfettoCmdState_PerSessionState : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kSessionNameFieldNumber = 1,
    kTotalBytesUploadedFieldNumber = 3,
    kLastTraceTimestampFieldNumber = 2,
  };

  PerfettoCmdState_PerSessionState();
  ~PerfettoCmdState_PerSessionState() override;
  PerfettoCmdState_PerSessionState(PerfettoCmdState_PerSessionState&&) noexcept;
  PerfettoCmdState_PerSessionState& operator=(PerfettoCmdState_PerSessionState&&);
  PerfettoCmdState_PerSessionState(const PerfettoCmdState_PerSessionState&);
  PerfettoCmdState_PerSessionState& operator=(const PerfettoCmdState_PerSessionState&);
  bool operator==(const PerfettoCmdState_PerSessionState&) const;
  bool operator!=(const PerfettoCmdState_PerSessionState& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_session_name() const { return _has_field_[1]; }
  const std::string& session_name() const { return session_name_; }
  void set_session_name(const std::string& value) { session_name_ = value; _has_field_.set(1); }

  bool has_total_bytes_uploaded() const { return _has_field_[3]; }
  uint64_t total_bytes_uploaded() const { return total_bytes_uploaded_; }
  void set_total_bytes_uploaded(uint64_t value) { total_bytes_uploaded_ = value; _has_field_.set(3); }

  bool has_last_trace_timestamp() const { return _has_field_[2]; }
  uint64_t last_trace_timestamp() const { return last_trace_timestamp_; }
  void set_last_trace_timestamp(uint64_t value) { last_trace_timestamp_ = value; _has_field_.set(2); }

 private:
  std::string session_name_{};
  uint64_t total_bytes_uploaded_{};
  uint64_t last_trace_timestamp_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};

}  // namespace perfetto
}  // namespace gen

#endif  // PERFETTO_SRC_PERFETTO_CMD_PERFETTO_CMD_STATE_PROTO_CPP_H_