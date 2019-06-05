/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*******************************************************************************
 * AUTOGENERATED - DO NOT EDIT
 *******************************************************************************
 * This file has been generated from the protobuf message
 * perfetto/config/trace_config.proto
 * by
 * ../../tools/proto_to_cpp/proto_to_cpp.cc.
 * If you need to make changes here, change the .proto file and then run
 * ./tools/gen_tracing_cpp_headers_from_protos
 */

#include "perfetto/tracing/core/trace_config.h"

#include "perfetto/config/data_source_config.pb.h"
#include "perfetto/config/trace_config.pb.h"

namespace perfetto {

TraceConfig::TraceConfig() = default;
TraceConfig::~TraceConfig() = default;
TraceConfig::TraceConfig(const TraceConfig&) = default;
TraceConfig& TraceConfig::operator=(const TraceConfig&) = default;
TraceConfig::TraceConfig(TraceConfig&&) noexcept = default;
TraceConfig& TraceConfig::operator=(TraceConfig&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::operator==(const TraceConfig& other) const {
  return (buffers_ == other.buffers_) &&
         (data_sources_ == other.data_sources_) &&
         (builtin_data_sources_ == other.builtin_data_sources_) &&
         (duration_ms_ == other.duration_ms_) &&
         (enable_extra_guardrails_ == other.enable_extra_guardrails_) &&
         (lockdown_mode_ == other.lockdown_mode_) &&
         (producers_ == other.producers_) &&
         (statsd_metadata_ == other.statsd_metadata_) &&
         (write_into_file_ == other.write_into_file_) &&
         (file_write_period_ms_ == other.file_write_period_ms_) &&
         (max_file_size_bytes_ == other.max_file_size_bytes_) &&
         (guardrail_overrides_ == other.guardrail_overrides_) &&
         (deferred_start_ == other.deferred_start_) &&
         (flush_period_ms_ == other.flush_period_ms_) &&
         (flush_timeout_ms_ == other.flush_timeout_ms_) &&
         (data_source_stop_timeout_ms_ == other.data_source_stop_timeout_ms_) &&
         (notify_traceur_ == other.notify_traceur_) &&
         (trigger_config_ == other.trigger_config_) &&
         (activate_triggers_ == other.activate_triggers_) &&
         (incremental_state_config_ == other.incremental_state_config_) &&
         (allow_user_build_tracing_ == other.allow_user_build_tracing_) &&
         (unique_session_name_ == other.unique_session_name_) &&
         (compression_type_ == other.compression_type_);
}
#pragma GCC diagnostic pop

void TraceConfig::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::FromProto(const perfetto::protos::TraceConfig& proto) {
  buffers_.clear();
  for (const auto& field : proto.buffers()) {
    buffers_.emplace_back();
    buffers_.back().FromProto(field);
  }

  data_sources_.clear();
  for (const auto& field : proto.data_sources()) {
    data_sources_.emplace_back();
    data_sources_.back().FromProto(field);
  }

  builtin_data_sources_.FromProto(proto.builtin_data_sources());

  static_assert(sizeof(duration_ms_) == sizeof(proto.duration_ms()),
                "size mismatch");
  duration_ms_ = static_cast<decltype(duration_ms_)>(proto.duration_ms());

  static_assert(sizeof(enable_extra_guardrails_) ==
                    sizeof(proto.enable_extra_guardrails()),
                "size mismatch");
  enable_extra_guardrails_ = static_cast<decltype(enable_extra_guardrails_)>(
      proto.enable_extra_guardrails());

  static_assert(sizeof(lockdown_mode_) == sizeof(proto.lockdown_mode()),
                "size mismatch");
  lockdown_mode_ = static_cast<decltype(lockdown_mode_)>(proto.lockdown_mode());

  producers_.clear();
  for (const auto& field : proto.producers()) {
    producers_.emplace_back();
    producers_.back().FromProto(field);
  }

  statsd_metadata_.FromProto(proto.statsd_metadata());

  static_assert(sizeof(write_into_file_) == sizeof(proto.write_into_file()),
                "size mismatch");
  write_into_file_ =
      static_cast<decltype(write_into_file_)>(proto.write_into_file());

  static_assert(
      sizeof(file_write_period_ms_) == sizeof(proto.file_write_period_ms()),
      "size mismatch");
  file_write_period_ms_ = static_cast<decltype(file_write_period_ms_)>(
      proto.file_write_period_ms());

  static_assert(
      sizeof(max_file_size_bytes_) == sizeof(proto.max_file_size_bytes()),
      "size mismatch");
  max_file_size_bytes_ =
      static_cast<decltype(max_file_size_bytes_)>(proto.max_file_size_bytes());

  guardrail_overrides_.FromProto(proto.guardrail_overrides());

  static_assert(sizeof(deferred_start_) == sizeof(proto.deferred_start()),
                "size mismatch");
  deferred_start_ =
      static_cast<decltype(deferred_start_)>(proto.deferred_start());

  static_assert(sizeof(flush_period_ms_) == sizeof(proto.flush_period_ms()),
                "size mismatch");
  flush_period_ms_ =
      static_cast<decltype(flush_period_ms_)>(proto.flush_period_ms());

  static_assert(sizeof(flush_timeout_ms_) == sizeof(proto.flush_timeout_ms()),
                "size mismatch");
  flush_timeout_ms_ =
      static_cast<decltype(flush_timeout_ms_)>(proto.flush_timeout_ms());

  static_assert(sizeof(data_source_stop_timeout_ms_) ==
                    sizeof(proto.data_source_stop_timeout_ms()),
                "size mismatch");
  data_source_stop_timeout_ms_ =
      static_cast<decltype(data_source_stop_timeout_ms_)>(
          proto.data_source_stop_timeout_ms());

  static_assert(sizeof(notify_traceur_) == sizeof(proto.notify_traceur()),
                "size mismatch");
  notify_traceur_ =
      static_cast<decltype(notify_traceur_)>(proto.notify_traceur());

  trigger_config_.FromProto(proto.trigger_config());

  activate_triggers_.clear();
  for (const auto& field : proto.activate_triggers()) {
    activate_triggers_.emplace_back();
    static_assert(
        sizeof(activate_triggers_.back()) == sizeof(proto.activate_triggers(0)),
        "size mismatch");
    activate_triggers_.back() =
        static_cast<decltype(activate_triggers_)::value_type>(field);
  }

  incremental_state_config_.FromProto(proto.incremental_state_config());

  static_assert(sizeof(allow_user_build_tracing_) ==
                    sizeof(proto.allow_user_build_tracing()),
                "size mismatch");
  allow_user_build_tracing_ = static_cast<decltype(allow_user_build_tracing_)>(
      proto.allow_user_build_tracing());

  static_assert(
      sizeof(unique_session_name_) == sizeof(proto.unique_session_name()),
      "size mismatch");
  unique_session_name_ =
      static_cast<decltype(unique_session_name_)>(proto.unique_session_name());

  static_assert(sizeof(compression_type_) == sizeof(proto.compression_type()),
                "size mismatch");
  compression_type_ =
      static_cast<decltype(compression_type_)>(proto.compression_type());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::ToProto(perfetto::protos::TraceConfig* proto) const {
  proto->Clear();

  for (const auto& it : buffers_) {
    auto* entry = proto->add_buffers();
    it.ToProto(entry);
  }

  for (const auto& it : data_sources_) {
    auto* entry = proto->add_data_sources();
    it.ToProto(entry);
  }

  builtin_data_sources_.ToProto(proto->mutable_builtin_data_sources());

  static_assert(sizeof(duration_ms_) == sizeof(proto->duration_ms()),
                "size mismatch");
  proto->set_duration_ms(
      static_cast<decltype(proto->duration_ms())>(duration_ms_));

  static_assert(sizeof(enable_extra_guardrails_) ==
                    sizeof(proto->enable_extra_guardrails()),
                "size mismatch");
  proto->set_enable_extra_guardrails(
      static_cast<decltype(proto->enable_extra_guardrails())>(
          enable_extra_guardrails_));

  static_assert(sizeof(lockdown_mode_) == sizeof(proto->lockdown_mode()),
                "size mismatch");
  proto->set_lockdown_mode(
      static_cast<decltype(proto->lockdown_mode())>(lockdown_mode_));

  for (const auto& it : producers_) {
    auto* entry = proto->add_producers();
    it.ToProto(entry);
  }

  statsd_metadata_.ToProto(proto->mutable_statsd_metadata());

  static_assert(sizeof(write_into_file_) == sizeof(proto->write_into_file()),
                "size mismatch");
  proto->set_write_into_file(
      static_cast<decltype(proto->write_into_file())>(write_into_file_));

  static_assert(
      sizeof(file_write_period_ms_) == sizeof(proto->file_write_period_ms()),
      "size mismatch");
  proto->set_file_write_period_ms(
      static_cast<decltype(proto->file_write_period_ms())>(
          file_write_period_ms_));

  static_assert(
      sizeof(max_file_size_bytes_) == sizeof(proto->max_file_size_bytes()),
      "size mismatch");
  proto->set_max_file_size_bytes(
      static_cast<decltype(proto->max_file_size_bytes())>(
          max_file_size_bytes_));

  guardrail_overrides_.ToProto(proto->mutable_guardrail_overrides());

  static_assert(sizeof(deferred_start_) == sizeof(proto->deferred_start()),
                "size mismatch");
  proto->set_deferred_start(
      static_cast<decltype(proto->deferred_start())>(deferred_start_));

  static_assert(sizeof(flush_period_ms_) == sizeof(proto->flush_period_ms()),
                "size mismatch");
  proto->set_flush_period_ms(
      static_cast<decltype(proto->flush_period_ms())>(flush_period_ms_));

  static_assert(sizeof(flush_timeout_ms_) == sizeof(proto->flush_timeout_ms()),
                "size mismatch");
  proto->set_flush_timeout_ms(
      static_cast<decltype(proto->flush_timeout_ms())>(flush_timeout_ms_));

  static_assert(sizeof(data_source_stop_timeout_ms_) ==
                    sizeof(proto->data_source_stop_timeout_ms()),
                "size mismatch");
  proto->set_data_source_stop_timeout_ms(
      static_cast<decltype(proto->data_source_stop_timeout_ms())>(
          data_source_stop_timeout_ms_));

  static_assert(sizeof(notify_traceur_) == sizeof(proto->notify_traceur()),
                "size mismatch");
  proto->set_notify_traceur(
      static_cast<decltype(proto->notify_traceur())>(notify_traceur_));

  trigger_config_.ToProto(proto->mutable_trigger_config());

  for (const auto& it : activate_triggers_) {
    proto->add_activate_triggers(
        static_cast<decltype(proto->activate_triggers(0))>(it));
    static_assert(sizeof(it) == sizeof(proto->activate_triggers(0)),
                  "size mismatch");
  }

  incremental_state_config_.ToProto(proto->mutable_incremental_state_config());

  static_assert(sizeof(allow_user_build_tracing_) ==
                    sizeof(proto->allow_user_build_tracing()),
                "size mismatch");
  proto->set_allow_user_build_tracing(
      static_cast<decltype(proto->allow_user_build_tracing())>(
          allow_user_build_tracing_));

  static_assert(
      sizeof(unique_session_name_) == sizeof(proto->unique_session_name()),
      "size mismatch");
  proto->set_unique_session_name(
      static_cast<decltype(proto->unique_session_name())>(
          unique_session_name_));

  static_assert(sizeof(compression_type_) == sizeof(proto->compression_type()),
                "size mismatch");
  proto->set_compression_type(
      static_cast<decltype(proto->compression_type())>(compression_type_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::BufferConfig::BufferConfig() = default;
TraceConfig::BufferConfig::~BufferConfig() = default;
TraceConfig::BufferConfig::BufferConfig(const TraceConfig::BufferConfig&) =
    default;
TraceConfig::BufferConfig& TraceConfig::BufferConfig::operator=(
    const TraceConfig::BufferConfig&) = default;
TraceConfig::BufferConfig::BufferConfig(TraceConfig::BufferConfig&&) noexcept =
    default;
TraceConfig::BufferConfig& TraceConfig::BufferConfig::operator=(
    TraceConfig::BufferConfig&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::BufferConfig::operator==(
    const TraceConfig::BufferConfig& other) const {
  return (size_kb_ == other.size_kb_) && (fill_policy_ == other.fill_policy_);
}
#pragma GCC diagnostic pop

void TraceConfig::BufferConfig::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig_BufferConfig proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::BufferConfig::FromProto(
    const perfetto::protos::TraceConfig_BufferConfig& proto) {
  static_assert(sizeof(size_kb_) == sizeof(proto.size_kb()), "size mismatch");
  size_kb_ = static_cast<decltype(size_kb_)>(proto.size_kb());

  static_assert(sizeof(fill_policy_) == sizeof(proto.fill_policy()),
                "size mismatch");
  fill_policy_ = static_cast<decltype(fill_policy_)>(proto.fill_policy());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::BufferConfig::ToProto(
    perfetto::protos::TraceConfig_BufferConfig* proto) const {
  proto->Clear();

  static_assert(sizeof(size_kb_) == sizeof(proto->size_kb()), "size mismatch");
  proto->set_size_kb(static_cast<decltype(proto->size_kb())>(size_kb_));

  static_assert(sizeof(fill_policy_) == sizeof(proto->fill_policy()),
                "size mismatch");
  proto->set_fill_policy(
      static_cast<decltype(proto->fill_policy())>(fill_policy_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::DataSource::DataSource() = default;
TraceConfig::DataSource::~DataSource() = default;
TraceConfig::DataSource::DataSource(const TraceConfig::DataSource&) = default;
TraceConfig::DataSource& TraceConfig::DataSource::operator=(
    const TraceConfig::DataSource&) = default;
TraceConfig::DataSource::DataSource(TraceConfig::DataSource&&) noexcept =
    default;
TraceConfig::DataSource& TraceConfig::DataSource::operator=(
    TraceConfig::DataSource&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::DataSource::operator==(
    const TraceConfig::DataSource& other) const {
  return (config_ == other.config_) &&
         (producer_name_filter_ == other.producer_name_filter_);
}
#pragma GCC diagnostic pop

void TraceConfig::DataSource::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig_DataSource proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::DataSource::FromProto(
    const perfetto::protos::TraceConfig_DataSource& proto) {
  config_.FromProto(proto.config());

  producer_name_filter_.clear();
  for (const auto& field : proto.producer_name_filter()) {
    producer_name_filter_.emplace_back();
    static_assert(sizeof(producer_name_filter_.back()) ==
                      sizeof(proto.producer_name_filter(0)),
                  "size mismatch");
    producer_name_filter_.back() =
        static_cast<decltype(producer_name_filter_)::value_type>(field);
  }
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::DataSource::ToProto(
    perfetto::protos::TraceConfig_DataSource* proto) const {
  proto->Clear();

  config_.ToProto(proto->mutable_config());

  for (const auto& it : producer_name_filter_) {
    proto->add_producer_name_filter(
        static_cast<decltype(proto->producer_name_filter(0))>(it));
    static_assert(sizeof(it) == sizeof(proto->producer_name_filter(0)),
                  "size mismatch");
  }
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::BuiltinDataSource::BuiltinDataSource() = default;
TraceConfig::BuiltinDataSource::~BuiltinDataSource() = default;
TraceConfig::BuiltinDataSource::BuiltinDataSource(
    const TraceConfig::BuiltinDataSource&) = default;
TraceConfig::BuiltinDataSource& TraceConfig::BuiltinDataSource::operator=(
    const TraceConfig::BuiltinDataSource&) = default;
TraceConfig::BuiltinDataSource::BuiltinDataSource(
    TraceConfig::BuiltinDataSource&&) noexcept = default;
TraceConfig::BuiltinDataSource& TraceConfig::BuiltinDataSource::operator=(
    TraceConfig::BuiltinDataSource&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::BuiltinDataSource::operator==(
    const TraceConfig::BuiltinDataSource& other) const {
  return (disable_clock_snapshotting_ == other.disable_clock_snapshotting_) &&
         (disable_trace_config_ == other.disable_trace_config_) &&
         (disable_system_info_ == other.disable_system_info_);
}
#pragma GCC diagnostic pop

void TraceConfig::BuiltinDataSource::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig_BuiltinDataSource proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::BuiltinDataSource::FromProto(
    const perfetto::protos::TraceConfig_BuiltinDataSource& proto) {
  static_assert(sizeof(disable_clock_snapshotting_) ==
                    sizeof(proto.disable_clock_snapshotting()),
                "size mismatch");
  disable_clock_snapshotting_ =
      static_cast<decltype(disable_clock_snapshotting_)>(
          proto.disable_clock_snapshotting());

  static_assert(
      sizeof(disable_trace_config_) == sizeof(proto.disable_trace_config()),
      "size mismatch");
  disable_trace_config_ = static_cast<decltype(disable_trace_config_)>(
      proto.disable_trace_config());

  static_assert(
      sizeof(disable_system_info_) == sizeof(proto.disable_system_info()),
      "size mismatch");
  disable_system_info_ =
      static_cast<decltype(disable_system_info_)>(proto.disable_system_info());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::BuiltinDataSource::ToProto(
    perfetto::protos::TraceConfig_BuiltinDataSource* proto) const {
  proto->Clear();

  static_assert(sizeof(disable_clock_snapshotting_) ==
                    sizeof(proto->disable_clock_snapshotting()),
                "size mismatch");
  proto->set_disable_clock_snapshotting(
      static_cast<decltype(proto->disable_clock_snapshotting())>(
          disable_clock_snapshotting_));

  static_assert(
      sizeof(disable_trace_config_) == sizeof(proto->disable_trace_config()),
      "size mismatch");
  proto->set_disable_trace_config(
      static_cast<decltype(proto->disable_trace_config())>(
          disable_trace_config_));

  static_assert(
      sizeof(disable_system_info_) == sizeof(proto->disable_system_info()),
      "size mismatch");
  proto->set_disable_system_info(
      static_cast<decltype(proto->disable_system_info())>(
          disable_system_info_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::ProducerConfig::ProducerConfig() = default;
TraceConfig::ProducerConfig::~ProducerConfig() = default;
TraceConfig::ProducerConfig::ProducerConfig(
    const TraceConfig::ProducerConfig&) = default;
TraceConfig::ProducerConfig& TraceConfig::ProducerConfig::operator=(
    const TraceConfig::ProducerConfig&) = default;
TraceConfig::ProducerConfig::ProducerConfig(
    TraceConfig::ProducerConfig&&) noexcept = default;
TraceConfig::ProducerConfig& TraceConfig::ProducerConfig::operator=(
    TraceConfig::ProducerConfig&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::ProducerConfig::operator==(
    const TraceConfig::ProducerConfig& other) const {
  return (producer_name_ == other.producer_name_) &&
         (shm_size_kb_ == other.shm_size_kb_) &&
         (page_size_kb_ == other.page_size_kb_);
}
#pragma GCC diagnostic pop

void TraceConfig::ProducerConfig::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig_ProducerConfig proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::ProducerConfig::FromProto(
    const perfetto::protos::TraceConfig_ProducerConfig& proto) {
  static_assert(sizeof(producer_name_) == sizeof(proto.producer_name()),
                "size mismatch");
  producer_name_ = static_cast<decltype(producer_name_)>(proto.producer_name());

  static_assert(sizeof(shm_size_kb_) == sizeof(proto.shm_size_kb()),
                "size mismatch");
  shm_size_kb_ = static_cast<decltype(shm_size_kb_)>(proto.shm_size_kb());

  static_assert(sizeof(page_size_kb_) == sizeof(proto.page_size_kb()),
                "size mismatch");
  page_size_kb_ = static_cast<decltype(page_size_kb_)>(proto.page_size_kb());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::ProducerConfig::ToProto(
    perfetto::protos::TraceConfig_ProducerConfig* proto) const {
  proto->Clear();

  static_assert(sizeof(producer_name_) == sizeof(proto->producer_name()),
                "size mismatch");
  proto->set_producer_name(
      static_cast<decltype(proto->producer_name())>(producer_name_));

  static_assert(sizeof(shm_size_kb_) == sizeof(proto->shm_size_kb()),
                "size mismatch");
  proto->set_shm_size_kb(
      static_cast<decltype(proto->shm_size_kb())>(shm_size_kb_));

  static_assert(sizeof(page_size_kb_) == sizeof(proto->page_size_kb()),
                "size mismatch");
  proto->set_page_size_kb(
      static_cast<decltype(proto->page_size_kb())>(page_size_kb_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::StatsdMetadata::StatsdMetadata() = default;
TraceConfig::StatsdMetadata::~StatsdMetadata() = default;
TraceConfig::StatsdMetadata::StatsdMetadata(
    const TraceConfig::StatsdMetadata&) = default;
TraceConfig::StatsdMetadata& TraceConfig::StatsdMetadata::operator=(
    const TraceConfig::StatsdMetadata&) = default;
TraceConfig::StatsdMetadata::StatsdMetadata(
    TraceConfig::StatsdMetadata&&) noexcept = default;
TraceConfig::StatsdMetadata& TraceConfig::StatsdMetadata::operator=(
    TraceConfig::StatsdMetadata&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::StatsdMetadata::operator==(
    const TraceConfig::StatsdMetadata& other) const {
  return (triggering_alert_id_ == other.triggering_alert_id_) &&
         (triggering_config_uid_ == other.triggering_config_uid_) &&
         (triggering_config_id_ == other.triggering_config_id_) &&
         (triggering_subscription_id_ == other.triggering_subscription_id_);
}
#pragma GCC diagnostic pop

void TraceConfig::StatsdMetadata::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig_StatsdMetadata proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::StatsdMetadata::FromProto(
    const perfetto::protos::TraceConfig_StatsdMetadata& proto) {
  static_assert(
      sizeof(triggering_alert_id_) == sizeof(proto.triggering_alert_id()),
      "size mismatch");
  triggering_alert_id_ =
      static_cast<decltype(triggering_alert_id_)>(proto.triggering_alert_id());

  static_assert(
      sizeof(triggering_config_uid_) == sizeof(proto.triggering_config_uid()),
      "size mismatch");
  triggering_config_uid_ = static_cast<decltype(triggering_config_uid_)>(
      proto.triggering_config_uid());

  static_assert(
      sizeof(triggering_config_id_) == sizeof(proto.triggering_config_id()),
      "size mismatch");
  triggering_config_id_ = static_cast<decltype(triggering_config_id_)>(
      proto.triggering_config_id());

  static_assert(sizeof(triggering_subscription_id_) ==
                    sizeof(proto.triggering_subscription_id()),
                "size mismatch");
  triggering_subscription_id_ =
      static_cast<decltype(triggering_subscription_id_)>(
          proto.triggering_subscription_id());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::StatsdMetadata::ToProto(
    perfetto::protos::TraceConfig_StatsdMetadata* proto) const {
  proto->Clear();

  static_assert(
      sizeof(triggering_alert_id_) == sizeof(proto->triggering_alert_id()),
      "size mismatch");
  proto->set_triggering_alert_id(
      static_cast<decltype(proto->triggering_alert_id())>(
          triggering_alert_id_));

  static_assert(
      sizeof(triggering_config_uid_) == sizeof(proto->triggering_config_uid()),
      "size mismatch");
  proto->set_triggering_config_uid(
      static_cast<decltype(proto->triggering_config_uid())>(
          triggering_config_uid_));

  static_assert(
      sizeof(triggering_config_id_) == sizeof(proto->triggering_config_id()),
      "size mismatch");
  proto->set_triggering_config_id(
      static_cast<decltype(proto->triggering_config_id())>(
          triggering_config_id_));

  static_assert(sizeof(triggering_subscription_id_) ==
                    sizeof(proto->triggering_subscription_id()),
                "size mismatch");
  proto->set_triggering_subscription_id(
      static_cast<decltype(proto->triggering_subscription_id())>(
          triggering_subscription_id_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::GuardrailOverrides::GuardrailOverrides() = default;
TraceConfig::GuardrailOverrides::~GuardrailOverrides() = default;
TraceConfig::GuardrailOverrides::GuardrailOverrides(
    const TraceConfig::GuardrailOverrides&) = default;
TraceConfig::GuardrailOverrides& TraceConfig::GuardrailOverrides::operator=(
    const TraceConfig::GuardrailOverrides&) = default;
TraceConfig::GuardrailOverrides::GuardrailOverrides(
    TraceConfig::GuardrailOverrides&&) noexcept = default;
TraceConfig::GuardrailOverrides& TraceConfig::GuardrailOverrides::operator=(
    TraceConfig::GuardrailOverrides&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::GuardrailOverrides::operator==(
    const TraceConfig::GuardrailOverrides& other) const {
  return (max_upload_per_day_bytes_ == other.max_upload_per_day_bytes_);
}
#pragma GCC diagnostic pop

void TraceConfig::GuardrailOverrides::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig_GuardrailOverrides proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::GuardrailOverrides::FromProto(
    const perfetto::protos::TraceConfig_GuardrailOverrides& proto) {
  static_assert(sizeof(max_upload_per_day_bytes_) ==
                    sizeof(proto.max_upload_per_day_bytes()),
                "size mismatch");
  max_upload_per_day_bytes_ = static_cast<decltype(max_upload_per_day_bytes_)>(
      proto.max_upload_per_day_bytes());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::GuardrailOverrides::ToProto(
    perfetto::protos::TraceConfig_GuardrailOverrides* proto) const {
  proto->Clear();

  static_assert(sizeof(max_upload_per_day_bytes_) ==
                    sizeof(proto->max_upload_per_day_bytes()),
                "size mismatch");
  proto->set_max_upload_per_day_bytes(
      static_cast<decltype(proto->max_upload_per_day_bytes())>(
          max_upload_per_day_bytes_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::TriggerConfig::TriggerConfig() = default;
TraceConfig::TriggerConfig::~TriggerConfig() = default;
TraceConfig::TriggerConfig::TriggerConfig(const TraceConfig::TriggerConfig&) =
    default;
TraceConfig::TriggerConfig& TraceConfig::TriggerConfig::operator=(
    const TraceConfig::TriggerConfig&) = default;
TraceConfig::TriggerConfig::TriggerConfig(
    TraceConfig::TriggerConfig&&) noexcept = default;
TraceConfig::TriggerConfig& TraceConfig::TriggerConfig::operator=(
    TraceConfig::TriggerConfig&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::TriggerConfig::operator==(
    const TraceConfig::TriggerConfig& other) const {
  return (trigger_mode_ == other.trigger_mode_) &&
         (triggers_ == other.triggers_) &&
         (trigger_timeout_ms_ == other.trigger_timeout_ms_);
}
#pragma GCC diagnostic pop

void TraceConfig::TriggerConfig::ParseRawProto(const std::string& raw) {
  perfetto::protos::TraceConfig_TriggerConfig proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::TriggerConfig::FromProto(
    const perfetto::protos::TraceConfig_TriggerConfig& proto) {
  static_assert(sizeof(trigger_mode_) == sizeof(proto.trigger_mode()),
                "size mismatch");
  trigger_mode_ = static_cast<decltype(trigger_mode_)>(proto.trigger_mode());

  triggers_.clear();
  for (const auto& field : proto.triggers()) {
    triggers_.emplace_back();
    triggers_.back().FromProto(field);
  }

  static_assert(
      sizeof(trigger_timeout_ms_) == sizeof(proto.trigger_timeout_ms()),
      "size mismatch");
  trigger_timeout_ms_ =
      static_cast<decltype(trigger_timeout_ms_)>(proto.trigger_timeout_ms());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::TriggerConfig::ToProto(
    perfetto::protos::TraceConfig_TriggerConfig* proto) const {
  proto->Clear();

  static_assert(sizeof(trigger_mode_) == sizeof(proto->trigger_mode()),
                "size mismatch");
  proto->set_trigger_mode(
      static_cast<decltype(proto->trigger_mode())>(trigger_mode_));

  for (const auto& it : triggers_) {
    auto* entry = proto->add_triggers();
    it.ToProto(entry);
  }

  static_assert(
      sizeof(trigger_timeout_ms_) == sizeof(proto->trigger_timeout_ms()),
      "size mismatch");
  proto->set_trigger_timeout_ms(
      static_cast<decltype(proto->trigger_timeout_ms())>(trigger_timeout_ms_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::TriggerConfig::Trigger::Trigger() = default;
TraceConfig::TriggerConfig::Trigger::~Trigger() = default;
TraceConfig::TriggerConfig::Trigger::Trigger(
    const TraceConfig::TriggerConfig::Trigger&) = default;
TraceConfig::TriggerConfig::Trigger& TraceConfig::TriggerConfig::Trigger::
operator=(const TraceConfig::TriggerConfig::Trigger&) = default;
TraceConfig::TriggerConfig::Trigger::Trigger(
    TraceConfig::TriggerConfig::Trigger&&) noexcept = default;
TraceConfig::TriggerConfig::Trigger& TraceConfig::TriggerConfig::Trigger::
operator=(TraceConfig::TriggerConfig::Trigger&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::TriggerConfig::Trigger::operator==(
    const TraceConfig::TriggerConfig::Trigger& other) const {
  return (name_ == other.name_) &&
         (producer_name_regex_ == other.producer_name_regex_) &&
         (stop_delay_ms_ == other.stop_delay_ms_);
}
#pragma GCC diagnostic pop

void TraceConfig::TriggerConfig::Trigger::ParseRawProto(
    const std::string& raw) {
  perfetto::protos::TraceConfig_TriggerConfig_Trigger proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::TriggerConfig::Trigger::FromProto(
    const perfetto::protos::TraceConfig_TriggerConfig_Trigger& proto) {
  static_assert(sizeof(name_) == sizeof(proto.name()), "size mismatch");
  name_ = static_cast<decltype(name_)>(proto.name());

  static_assert(
      sizeof(producer_name_regex_) == sizeof(proto.producer_name_regex()),
      "size mismatch");
  producer_name_regex_ =
      static_cast<decltype(producer_name_regex_)>(proto.producer_name_regex());

  static_assert(sizeof(stop_delay_ms_) == sizeof(proto.stop_delay_ms()),
                "size mismatch");
  stop_delay_ms_ = static_cast<decltype(stop_delay_ms_)>(proto.stop_delay_ms());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::TriggerConfig::Trigger::ToProto(
    perfetto::protos::TraceConfig_TriggerConfig_Trigger* proto) const {
  proto->Clear();

  static_assert(sizeof(name_) == sizeof(proto->name()), "size mismatch");
  proto->set_name(static_cast<decltype(proto->name())>(name_));

  static_assert(
      sizeof(producer_name_regex_) == sizeof(proto->producer_name_regex()),
      "size mismatch");
  proto->set_producer_name_regex(
      static_cast<decltype(proto->producer_name_regex())>(
          producer_name_regex_));

  static_assert(sizeof(stop_delay_ms_) == sizeof(proto->stop_delay_ms()),
                "size mismatch");
  proto->set_stop_delay_ms(
      static_cast<decltype(proto->stop_delay_ms())>(stop_delay_ms_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

TraceConfig::IncrementalStateConfig::IncrementalStateConfig() = default;
TraceConfig::IncrementalStateConfig::~IncrementalStateConfig() = default;
TraceConfig::IncrementalStateConfig::IncrementalStateConfig(
    const TraceConfig::IncrementalStateConfig&) = default;
TraceConfig::IncrementalStateConfig& TraceConfig::IncrementalStateConfig::
operator=(const TraceConfig::IncrementalStateConfig&) = default;
TraceConfig::IncrementalStateConfig::IncrementalStateConfig(
    TraceConfig::IncrementalStateConfig&&) noexcept = default;
TraceConfig::IncrementalStateConfig& TraceConfig::IncrementalStateConfig::
operator=(TraceConfig::IncrementalStateConfig&&) = default;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
bool TraceConfig::IncrementalStateConfig::operator==(
    const TraceConfig::IncrementalStateConfig& other) const {
  return (clear_period_ms_ == other.clear_period_ms_);
}
#pragma GCC diagnostic pop

void TraceConfig::IncrementalStateConfig::ParseRawProto(
    const std::string& raw) {
  perfetto::protos::TraceConfig_IncrementalStateConfig proto;
  proto.ParseFromString(raw);
  FromProto(proto);
}

void TraceConfig::IncrementalStateConfig::FromProto(
    const perfetto::protos::TraceConfig_IncrementalStateConfig& proto) {
  static_assert(sizeof(clear_period_ms_) == sizeof(proto.clear_period_ms()),
                "size mismatch");
  clear_period_ms_ =
      static_cast<decltype(clear_period_ms_)>(proto.clear_period_ms());
  unknown_fields_ = proto.unknown_fields();
}

void TraceConfig::IncrementalStateConfig::ToProto(
    perfetto::protos::TraceConfig_IncrementalStateConfig* proto) const {
  proto->Clear();

  static_assert(sizeof(clear_period_ms_) == sizeof(proto->clear_period_ms()),
                "size mismatch");
  proto->set_clear_period_ms(
      static_cast<decltype(proto->clear_period_ms())>(clear_period_ms_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

}  // namespace perfetto
