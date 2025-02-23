// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorStartRequestMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SensorStartRequestMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SensorStartRequestMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "SensorTypeEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SensorStartRequestMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SensorStartRequestMessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SensorStartRequestMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class SensorStartRequestMessage;
class SensorStartRequestMessageDefaultTypeInternal;
extern SensorStartRequestMessageDefaultTypeInternal _SensorStartRequestMessage_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::SensorStartRequestMessage* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::SensorStartRequestMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class SensorStartRequestMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.SensorStartRequestMessage) */ {
 public:
  inline SensorStartRequestMessage() : SensorStartRequestMessage(nullptr) {};
  virtual ~SensorStartRequestMessage();

  SensorStartRequestMessage(const SensorStartRequestMessage& from);
  SensorStartRequestMessage(SensorStartRequestMessage&& from) noexcept
    : SensorStartRequestMessage() {
    *this = ::std::move(from);
  }

  inline SensorStartRequestMessage& operator=(const SensorStartRequestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline SensorStartRequestMessage& operator=(SensorStartRequestMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SensorStartRequestMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SensorStartRequestMessage* internal_default_instance() {
    return reinterpret_cast<const SensorStartRequestMessage*>(
               &_SensorStartRequestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SensorStartRequestMessage& a, SensorStartRequestMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(SensorStartRequestMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SensorStartRequestMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SensorStartRequestMessage* New() const final {
    return CreateMaybeMessage<SensorStartRequestMessage>(nullptr);
  }

  SensorStartRequestMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SensorStartRequestMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SensorStartRequestMessage& from);
  void MergeFrom(const SensorStartRequestMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SensorStartRequestMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.SensorStartRequestMessage";
  }
  protected:
  explicit SensorStartRequestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_SensorStartRequestMessage_2eproto);
    return ::descriptor_table_SensorStartRequestMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRefreshIntervalFieldNumber = 2,
    kSensorTypeFieldNumber = 1,
  };
  // int64 refresh_interval = 2;
  void clear_refresh_interval();
  ::PROTOBUF_NAMESPACE_ID::int64 refresh_interval() const;
  void set_refresh_interval(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_refresh_interval() const;
  void _internal_set_refresh_interval(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // .f1x.aasdk.proto.enums.SensorType.Enum sensor_type = 1;
  void clear_sensor_type();
  ::f1x::aasdk::proto::enums::SensorType_Enum sensor_type() const;
  void set_sensor_type(::f1x::aasdk::proto::enums::SensorType_Enum value);
  private:
  ::f1x::aasdk::proto::enums::SensorType_Enum _internal_sensor_type() const;
  void _internal_set_sensor_type(::f1x::aasdk::proto::enums::SensorType_Enum value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.SensorStartRequestMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 refresh_interval_;
  int sensor_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_SensorStartRequestMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SensorStartRequestMessage

// .f1x.aasdk.proto.enums.SensorType.Enum sensor_type = 1;
inline void SensorStartRequestMessage::clear_sensor_type() {
  sensor_type_ = 0;
}
inline ::f1x::aasdk::proto::enums::SensorType_Enum SensorStartRequestMessage::_internal_sensor_type() const {
  return static_cast< ::f1x::aasdk::proto::enums::SensorType_Enum >(sensor_type_);
}
inline ::f1x::aasdk::proto::enums::SensorType_Enum SensorStartRequestMessage::sensor_type() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.SensorStartRequestMessage.sensor_type)
  return _internal_sensor_type();
}
inline void SensorStartRequestMessage::_internal_set_sensor_type(::f1x::aasdk::proto::enums::SensorType_Enum value) {
  
  sensor_type_ = value;
}
inline void SensorStartRequestMessage::set_sensor_type(::f1x::aasdk::proto::enums::SensorType_Enum value) {
  _internal_set_sensor_type(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.SensorStartRequestMessage.sensor_type)
}

// int64 refresh_interval = 2;
inline void SensorStartRequestMessage::clear_refresh_interval() {
  refresh_interval_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SensorStartRequestMessage::_internal_refresh_interval() const {
  return refresh_interval_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SensorStartRequestMessage::refresh_interval() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.SensorStartRequestMessage.refresh_interval)
  return _internal_refresh_interval();
}
inline void SensorStartRequestMessage::_internal_set_refresh_interval(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  refresh_interval_ = value;
}
inline void SensorStartRequestMessage::set_refresh_interval(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_refresh_interval(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.SensorStartRequestMessage.refresh_interval)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SensorStartRequestMessage_2eproto
