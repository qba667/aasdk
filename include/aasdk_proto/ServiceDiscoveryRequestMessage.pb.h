// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServiceDiscoveryRequestMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ServiceDiscoveryRequestMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ServiceDiscoveryRequestMessage_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ServiceDiscoveryRequestMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ServiceDiscoveryRequestMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServiceDiscoveryRequestMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class ServiceDiscoveryRequest;
class ServiceDiscoveryRequestDefaultTypeInternal;
extern ServiceDiscoveryRequestDefaultTypeInternal _ServiceDiscoveryRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::ServiceDiscoveryRequest* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::ServiceDiscoveryRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class ServiceDiscoveryRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.ServiceDiscoveryRequest) */ {
 public:
  inline ServiceDiscoveryRequest() : ServiceDiscoveryRequest(nullptr) {};
  virtual ~ServiceDiscoveryRequest();

  ServiceDiscoveryRequest(const ServiceDiscoveryRequest& from);
  ServiceDiscoveryRequest(ServiceDiscoveryRequest&& from) noexcept
    : ServiceDiscoveryRequest() {
    *this = ::std::move(from);
  }

  inline ServiceDiscoveryRequest& operator=(const ServiceDiscoveryRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ServiceDiscoveryRequest& operator=(ServiceDiscoveryRequest&& from) noexcept {
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
  static const ServiceDiscoveryRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ServiceDiscoveryRequest* internal_default_instance() {
    return reinterpret_cast<const ServiceDiscoveryRequest*>(
               &_ServiceDiscoveryRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ServiceDiscoveryRequest& a, ServiceDiscoveryRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ServiceDiscoveryRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ServiceDiscoveryRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ServiceDiscoveryRequest* New() const final {
    return CreateMaybeMessage<ServiceDiscoveryRequest>(nullptr);
  }

  ServiceDiscoveryRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ServiceDiscoveryRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ServiceDiscoveryRequest& from);
  void MergeFrom(const ServiceDiscoveryRequest& from);
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
  void InternalSwap(ServiceDiscoveryRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.ServiceDiscoveryRequest";
  }
  protected:
  explicit ServiceDiscoveryRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ServiceDiscoveryRequestMessage_2eproto);
    return ::descriptor_table_ServiceDiscoveryRequestMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDeviceNameFieldNumber = 4,
    kDeviceBrandFieldNumber = 5,
  };
  // string device_name = 4;
  void clear_device_name();
  const std::string& device_name() const;
  void set_device_name(const std::string& value);
  void set_device_name(std::string&& value);
  void set_device_name(const char* value);
  void set_device_name(const char* value, size_t size);
  std::string* mutable_device_name();
  std::string* release_device_name();
  void set_allocated_device_name(std::string* device_name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_device_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_device_name(
      std::string* device_name);
  private:
  const std::string& _internal_device_name() const;
  void _internal_set_device_name(const std::string& value);
  std::string* _internal_mutable_device_name();
  public:

  // string device_brand = 5;
  void clear_device_brand();
  const std::string& device_brand() const;
  void set_device_brand(const std::string& value);
  void set_device_brand(std::string&& value);
  void set_device_brand(const char* value);
  void set_device_brand(const char* value, size_t size);
  std::string* mutable_device_brand();
  std::string* release_device_brand();
  void set_allocated_device_brand(std::string* device_brand);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_device_brand();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_device_brand(
      std::string* device_brand);
  private:
  const std::string& _internal_device_brand() const;
  void _internal_set_device_brand(const std::string& value);
  std::string* _internal_mutable_device_brand();
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.ServiceDiscoveryRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_brand_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ServiceDiscoveryRequestMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ServiceDiscoveryRequest

// string device_name = 4;
inline void ServiceDiscoveryRequest::clear_device_name() {
  device_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ServiceDiscoveryRequest::device_name() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
  return _internal_device_name();
}
inline void ServiceDiscoveryRequest::set_device_name(const std::string& value) {
  _internal_set_device_name(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
}
inline std::string* ServiceDiscoveryRequest::mutable_device_name() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
  return _internal_mutable_device_name();
}
inline const std::string& ServiceDiscoveryRequest::_internal_device_name() const {
  return device_name_.Get();
}
inline void ServiceDiscoveryRequest::_internal_set_device_name(const std::string& value) {
  
  device_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ServiceDiscoveryRequest::set_device_name(std::string&& value) {
  
  device_name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
}
inline void ServiceDiscoveryRequest::set_device_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  device_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
}
inline void ServiceDiscoveryRequest::set_device_name(const char* value,
    size_t size) {
  
  device_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
}
inline std::string* ServiceDiscoveryRequest::_internal_mutable_device_name() {
  
  return device_name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ServiceDiscoveryRequest::release_device_name() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
  return device_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ServiceDiscoveryRequest::set_allocated_device_name(std::string* device_name) {
  if (device_name != nullptr) {
    
  } else {
    
  }
  device_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
}
inline std::string* ServiceDiscoveryRequest::unsafe_arena_release_device_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return device_name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void ServiceDiscoveryRequest::unsafe_arena_set_allocated_device_name(
    std::string* device_name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (device_name != nullptr) {
    
  } else {
    
  }
  device_name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      device_name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_name)
}

// string device_brand = 5;
inline void ServiceDiscoveryRequest::clear_device_brand() {
  device_brand_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ServiceDiscoveryRequest::device_brand() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
  return _internal_device_brand();
}
inline void ServiceDiscoveryRequest::set_device_brand(const std::string& value) {
  _internal_set_device_brand(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
}
inline std::string* ServiceDiscoveryRequest::mutable_device_brand() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
  return _internal_mutable_device_brand();
}
inline const std::string& ServiceDiscoveryRequest::_internal_device_brand() const {
  return device_brand_.Get();
}
inline void ServiceDiscoveryRequest::_internal_set_device_brand(const std::string& value) {
  
  device_brand_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ServiceDiscoveryRequest::set_device_brand(std::string&& value) {
  
  device_brand_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
}
inline void ServiceDiscoveryRequest::set_device_brand(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  device_brand_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
}
inline void ServiceDiscoveryRequest::set_device_brand(const char* value,
    size_t size) {
  
  device_brand_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
}
inline std::string* ServiceDiscoveryRequest::_internal_mutable_device_brand() {
  
  return device_brand_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ServiceDiscoveryRequest::release_device_brand() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
  return device_brand_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ServiceDiscoveryRequest::set_allocated_device_brand(std::string* device_brand) {
  if (device_brand != nullptr) {
    
  } else {
    
  }
  device_brand_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device_brand,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
}
inline std::string* ServiceDiscoveryRequest::unsafe_arena_release_device_brand() {
  // @@protoc_insertion_point(field_unsafe_arena_release:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return device_brand_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void ServiceDiscoveryRequest::unsafe_arena_set_allocated_device_brand(
    std::string* device_brand) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (device_brand != nullptr) {
    
  } else {
    
  }
  device_brand_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      device_brand, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.messages.ServiceDiscoveryRequest.device_brand)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ServiceDiscoveryRequestMessage_2eproto
