// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WifiInfoResponseMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_WifiInfoResponseMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_WifiInfoResponseMessage_2eproto

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
#include "WifiInfoResponseStatus.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_WifiInfoResponseMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_WifiInfoResponseMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_WifiInfoResponseMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class WifiInfoResponse;
class WifiInfoResponseDefaultTypeInternal;
extern WifiInfoResponseDefaultTypeInternal _WifiInfoResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::WifiInfoResponse* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::WifiInfoResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class WifiInfoResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.WifiInfoResponse) */ {
 public:
  inline WifiInfoResponse() : WifiInfoResponse(nullptr) {};
  virtual ~WifiInfoResponse();

  WifiInfoResponse(const WifiInfoResponse& from);
  WifiInfoResponse(WifiInfoResponse&& from) noexcept
    : WifiInfoResponse() {
    *this = ::std::move(from);
  }

  inline WifiInfoResponse& operator=(const WifiInfoResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline WifiInfoResponse& operator=(WifiInfoResponse&& from) noexcept {
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
  static const WifiInfoResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WifiInfoResponse* internal_default_instance() {
    return reinterpret_cast<const WifiInfoResponse*>(
               &_WifiInfoResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WifiInfoResponse& a, WifiInfoResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(WifiInfoResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WifiInfoResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WifiInfoResponse* New() const final {
    return CreateMaybeMessage<WifiInfoResponse>(nullptr);
  }

  WifiInfoResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WifiInfoResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WifiInfoResponse& from);
  void MergeFrom(const WifiInfoResponse& from);
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
  void InternalSwap(WifiInfoResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.WifiInfoResponse";
  }
  protected:
  explicit WifiInfoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_WifiInfoResponseMessage_2eproto);
    return ::descriptor_table_WifiInfoResponseMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIpAddressFieldNumber = 1,
    kPortFieldNumber = 2,
    kStatusFieldNumber = 3,
  };
  // string ip_address = 1;
  void clear_ip_address();
  const std::string& ip_address() const;
  void set_ip_address(const std::string& value);
  void set_ip_address(std::string&& value);
  void set_ip_address(const char* value);
  void set_ip_address(const char* value, size_t size);
  std::string* mutable_ip_address();
  std::string* release_ip_address();
  void set_allocated_ip_address(std::string* ip_address);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_ip_address();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_ip_address(
      std::string* ip_address);
  private:
  const std::string& _internal_ip_address() const;
  void _internal_set_ip_address(const std::string& value);
  std::string* _internal_mutable_ip_address();
  public:

  // uint32 port = 2;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::uint32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // .f1x.aasdk.proto.messages.WifiInfoResponseStatus.Enum Status = 3;
  void clear_status();
  ::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum status() const;
  void set_status(::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum value);
  private:
  ::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum _internal_status() const;
  void _internal_set_status(::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.WifiInfoResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ip_address_;
  ::PROTOBUF_NAMESPACE_ID::uint32 port_;
  int status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_WifiInfoResponseMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WifiInfoResponse

// string ip_address = 1;
inline void WifiInfoResponse::clear_ip_address() {
  ip_address_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& WifiInfoResponse::ip_address() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
  return _internal_ip_address();
}
inline void WifiInfoResponse::set_ip_address(const std::string& value) {
  _internal_set_ip_address(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
}
inline std::string* WifiInfoResponse::mutable_ip_address() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
  return _internal_mutable_ip_address();
}
inline const std::string& WifiInfoResponse::_internal_ip_address() const {
  return ip_address_.Get();
}
inline void WifiInfoResponse::_internal_set_ip_address(const std::string& value) {
  
  ip_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void WifiInfoResponse::set_ip_address(std::string&& value) {
  
  ip_address_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
}
inline void WifiInfoResponse::set_ip_address(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  ip_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
}
inline void WifiInfoResponse::set_ip_address(const char* value,
    size_t size) {
  
  ip_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
}
inline std::string* WifiInfoResponse::_internal_mutable_ip_address() {
  
  return ip_address_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* WifiInfoResponse::release_ip_address() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
  return ip_address_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void WifiInfoResponse::set_allocated_ip_address(std::string* ip_address) {
  if (ip_address != nullptr) {
    
  } else {
    
  }
  ip_address_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ip_address,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
}
inline std::string* WifiInfoResponse::unsafe_arena_release_ip_address() {
  // @@protoc_insertion_point(field_unsafe_arena_release:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return ip_address_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void WifiInfoResponse::unsafe_arena_set_allocated_ip_address(
    std::string* ip_address) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (ip_address != nullptr) {
    
  } else {
    
  }
  ip_address_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ip_address, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.messages.WifiInfoResponse.ip_address)
}

// uint32 port = 2;
inline void WifiInfoResponse::clear_port() {
  port_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WifiInfoResponse::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WifiInfoResponse::port() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiInfoResponse.port)
  return _internal_port();
}
inline void WifiInfoResponse::_internal_set_port(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  port_ = value;
}
inline void WifiInfoResponse::set_port(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiInfoResponse.port)
}

// .f1x.aasdk.proto.messages.WifiInfoResponseStatus.Enum Status = 3;
inline void WifiInfoResponse::clear_status() {
  status_ = 0;
}
inline ::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum WifiInfoResponse::_internal_status() const {
  return static_cast< ::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum >(status_);
}
inline ::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum WifiInfoResponse::status() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiInfoResponse.Status)
  return _internal_status();
}
inline void WifiInfoResponse::_internal_set_status(::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum value) {
  
  status_ = value;
}
inline void WifiInfoResponse::set_status(::f1x::aasdk::proto::messages::WifiInfoResponseStatus_Enum value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiInfoResponse.Status)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_WifiInfoResponseMessage_2eproto
