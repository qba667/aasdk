// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WifiSecurityResponseMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_WifiSecurityResponseMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_WifiSecurityResponseMessage_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_WifiSecurityResponseMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_WifiSecurityResponseMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_WifiSecurityResponseMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class WifiSecurityResponse;
class WifiSecurityResponseDefaultTypeInternal;
extern WifiSecurityResponseDefaultTypeInternal _WifiSecurityResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::WifiSecurityResponse* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::WifiSecurityResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

enum WifiSecurityResponse_SecurityMode : int {
  WifiSecurityResponse_SecurityMode_WPA2_PERSONAL = 0,
  WifiSecurityResponse_SecurityMode_WifiSecurityResponse_SecurityMode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  WifiSecurityResponse_SecurityMode_WifiSecurityResponse_SecurityMode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool WifiSecurityResponse_SecurityMode_IsValid(int value);
constexpr WifiSecurityResponse_SecurityMode WifiSecurityResponse_SecurityMode_SecurityMode_MIN = WifiSecurityResponse_SecurityMode_WPA2_PERSONAL;
constexpr WifiSecurityResponse_SecurityMode WifiSecurityResponse_SecurityMode_SecurityMode_MAX = WifiSecurityResponse_SecurityMode_WPA2_PERSONAL;
constexpr int WifiSecurityResponse_SecurityMode_SecurityMode_ARRAYSIZE = WifiSecurityResponse_SecurityMode_SecurityMode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* WifiSecurityResponse_SecurityMode_descriptor();
template<typename T>
inline const std::string& WifiSecurityResponse_SecurityMode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, WifiSecurityResponse_SecurityMode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function WifiSecurityResponse_SecurityMode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    WifiSecurityResponse_SecurityMode_descriptor(), enum_t_value);
}
inline bool WifiSecurityResponse_SecurityMode_Parse(
    const std::string& name, WifiSecurityResponse_SecurityMode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<WifiSecurityResponse_SecurityMode>(
    WifiSecurityResponse_SecurityMode_descriptor(), name, value);
}
enum WifiSecurityResponse_AccessPointType : int {
  WifiSecurityResponse_AccessPointType_STATIC = 0,
  WifiSecurityResponse_AccessPointType_WifiSecurityResponse_AccessPointType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  WifiSecurityResponse_AccessPointType_WifiSecurityResponse_AccessPointType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool WifiSecurityResponse_AccessPointType_IsValid(int value);
constexpr WifiSecurityResponse_AccessPointType WifiSecurityResponse_AccessPointType_AccessPointType_MIN = WifiSecurityResponse_AccessPointType_STATIC;
constexpr WifiSecurityResponse_AccessPointType WifiSecurityResponse_AccessPointType_AccessPointType_MAX = WifiSecurityResponse_AccessPointType_STATIC;
constexpr int WifiSecurityResponse_AccessPointType_AccessPointType_ARRAYSIZE = WifiSecurityResponse_AccessPointType_AccessPointType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* WifiSecurityResponse_AccessPointType_descriptor();
template<typename T>
inline const std::string& WifiSecurityResponse_AccessPointType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, WifiSecurityResponse_AccessPointType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function WifiSecurityResponse_AccessPointType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    WifiSecurityResponse_AccessPointType_descriptor(), enum_t_value);
}
inline bool WifiSecurityResponse_AccessPointType_Parse(
    const std::string& name, WifiSecurityResponse_AccessPointType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<WifiSecurityResponse_AccessPointType>(
    WifiSecurityResponse_AccessPointType_descriptor(), name, value);
}
// ===================================================================

class WifiSecurityResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.WifiSecurityResponse) */ {
 public:
  inline WifiSecurityResponse() : WifiSecurityResponse(nullptr) {};
  virtual ~WifiSecurityResponse();

  WifiSecurityResponse(const WifiSecurityResponse& from);
  WifiSecurityResponse(WifiSecurityResponse&& from) noexcept
    : WifiSecurityResponse() {
    *this = ::std::move(from);
  }

  inline WifiSecurityResponse& operator=(const WifiSecurityResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline WifiSecurityResponse& operator=(WifiSecurityResponse&& from) noexcept {
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
  static const WifiSecurityResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WifiSecurityResponse* internal_default_instance() {
    return reinterpret_cast<const WifiSecurityResponse*>(
               &_WifiSecurityResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WifiSecurityResponse& a, WifiSecurityResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(WifiSecurityResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WifiSecurityResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WifiSecurityResponse* New() const final {
    return CreateMaybeMessage<WifiSecurityResponse>(nullptr);
  }

  WifiSecurityResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WifiSecurityResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WifiSecurityResponse& from);
  void MergeFrom(const WifiSecurityResponse& from);
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
  void InternalSwap(WifiSecurityResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.WifiSecurityResponse";
  }
  protected:
  explicit WifiSecurityResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_WifiSecurityResponseMessage_2eproto);
    return ::descriptor_table_WifiSecurityResponseMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef WifiSecurityResponse_SecurityMode SecurityMode;
  static constexpr SecurityMode WPA2_PERSONAL =
    WifiSecurityResponse_SecurityMode_WPA2_PERSONAL;
  static inline bool SecurityMode_IsValid(int value) {
    return WifiSecurityResponse_SecurityMode_IsValid(value);
  }
  static constexpr SecurityMode SecurityMode_MIN =
    WifiSecurityResponse_SecurityMode_SecurityMode_MIN;
  static constexpr SecurityMode SecurityMode_MAX =
    WifiSecurityResponse_SecurityMode_SecurityMode_MAX;
  static constexpr int SecurityMode_ARRAYSIZE =
    WifiSecurityResponse_SecurityMode_SecurityMode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  SecurityMode_descriptor() {
    return WifiSecurityResponse_SecurityMode_descriptor();
  }
  template<typename T>
  static inline const std::string& SecurityMode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, SecurityMode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function SecurityMode_Name.");
    return WifiSecurityResponse_SecurityMode_Name(enum_t_value);
  }
  static inline bool SecurityMode_Parse(const std::string& name,
      SecurityMode* value) {
    return WifiSecurityResponse_SecurityMode_Parse(name, value);
  }

  typedef WifiSecurityResponse_AccessPointType AccessPointType;
  static constexpr AccessPointType STATIC =
    WifiSecurityResponse_AccessPointType_STATIC;
  static inline bool AccessPointType_IsValid(int value) {
    return WifiSecurityResponse_AccessPointType_IsValid(value);
  }
  static constexpr AccessPointType AccessPointType_MIN =
    WifiSecurityResponse_AccessPointType_AccessPointType_MIN;
  static constexpr AccessPointType AccessPointType_MAX =
    WifiSecurityResponse_AccessPointType_AccessPointType_MAX;
  static constexpr int AccessPointType_ARRAYSIZE =
    WifiSecurityResponse_AccessPointType_AccessPointType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  AccessPointType_descriptor() {
    return WifiSecurityResponse_AccessPointType_descriptor();
  }
  template<typename T>
  static inline const std::string& AccessPointType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, AccessPointType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function AccessPointType_Name.");
    return WifiSecurityResponse_AccessPointType_Name(enum_t_value);
  }
  static inline bool AccessPointType_Parse(const std::string& name,
      AccessPointType* value) {
    return WifiSecurityResponse_AccessPointType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kSsidFieldNumber = 1,
    kBssidFieldNumber = 2,
    kKeyFieldNumber = 3,
    kSecurityModeFieldNumber = 4,
    kAccessPointTypeFieldNumber = 5,
  };
  // string ssid = 1;
  void clear_ssid();
  const std::string& ssid() const;
  void set_ssid(const std::string& value);
  void set_ssid(std::string&& value);
  void set_ssid(const char* value);
  void set_ssid(const char* value, size_t size);
  std::string* mutable_ssid();
  std::string* release_ssid();
  void set_allocated_ssid(std::string* ssid);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_ssid();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_ssid(
      std::string* ssid);
  private:
  const std::string& _internal_ssid() const;
  void _internal_set_ssid(const std::string& value);
  std::string* _internal_mutable_ssid();
  public:

  // string bssid = 2;
  void clear_bssid();
  const std::string& bssid() const;
  void set_bssid(const std::string& value);
  void set_bssid(std::string&& value);
  void set_bssid(const char* value);
  void set_bssid(const char* value, size_t size);
  std::string* mutable_bssid();
  std::string* release_bssid();
  void set_allocated_bssid(std::string* bssid);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_bssid();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_bssid(
      std::string* bssid);
  private:
  const std::string& _internal_bssid() const;
  void _internal_set_bssid(const std::string& value);
  std::string* _internal_mutable_bssid();
  public:

  // string key = 3;
  void clear_key();
  const std::string& key() const;
  void set_key(const std::string& value);
  void set_key(std::string&& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  std::string* mutable_key();
  std::string* release_key();
  void set_allocated_key(std::string* key);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_key();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_key(
      std::string* key);
  private:
  const std::string& _internal_key() const;
  void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // .f1x.aasdk.proto.messages.WifiSecurityResponse.SecurityMode security_mode = 4;
  void clear_security_mode();
  ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode security_mode() const;
  void set_security_mode(::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode value);
  private:
  ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode _internal_security_mode() const;
  void _internal_set_security_mode(::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode value);
  public:

  // .f1x.aasdk.proto.messages.WifiSecurityResponse.AccessPointType access_point_type = 5;
  void clear_access_point_type();
  ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType access_point_type() const;
  void set_access_point_type(::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType value);
  private:
  ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType _internal_access_point_type() const;
  void _internal_set_access_point_type(::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.WifiSecurityResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ssid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr bssid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  int security_mode_;
  int access_point_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_WifiSecurityResponseMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WifiSecurityResponse

// string ssid = 1;
inline void WifiSecurityResponse::clear_ssid() {
  ssid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& WifiSecurityResponse::ssid() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
  return _internal_ssid();
}
inline void WifiSecurityResponse::set_ssid(const std::string& value) {
  _internal_set_ssid(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
}
inline std::string* WifiSecurityResponse::mutable_ssid() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
  return _internal_mutable_ssid();
}
inline const std::string& WifiSecurityResponse::_internal_ssid() const {
  return ssid_.Get();
}
inline void WifiSecurityResponse::_internal_set_ssid(const std::string& value) {
  
  ssid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void WifiSecurityResponse::set_ssid(std::string&& value) {
  
  ssid_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
}
inline void WifiSecurityResponse::set_ssid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  ssid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
}
inline void WifiSecurityResponse::set_ssid(const char* value,
    size_t size) {
  
  ssid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
}
inline std::string* WifiSecurityResponse::_internal_mutable_ssid() {
  
  return ssid_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* WifiSecurityResponse::release_ssid() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
  return ssid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void WifiSecurityResponse::set_allocated_ssid(std::string* ssid) {
  if (ssid != nullptr) {
    
  } else {
    
  }
  ssid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ssid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
}
inline std::string* WifiSecurityResponse::unsafe_arena_release_ssid() {
  // @@protoc_insertion_point(field_unsafe_arena_release:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return ssid_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void WifiSecurityResponse::unsafe_arena_set_allocated_ssid(
    std::string* ssid) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (ssid != nullptr) {
    
  } else {
    
  }
  ssid_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ssid, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.messages.WifiSecurityResponse.ssid)
}

// string bssid = 2;
inline void WifiSecurityResponse::clear_bssid() {
  bssid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& WifiSecurityResponse::bssid() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
  return _internal_bssid();
}
inline void WifiSecurityResponse::set_bssid(const std::string& value) {
  _internal_set_bssid(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
}
inline std::string* WifiSecurityResponse::mutable_bssid() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
  return _internal_mutable_bssid();
}
inline const std::string& WifiSecurityResponse::_internal_bssid() const {
  return bssid_.Get();
}
inline void WifiSecurityResponse::_internal_set_bssid(const std::string& value) {
  
  bssid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void WifiSecurityResponse::set_bssid(std::string&& value) {
  
  bssid_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
}
inline void WifiSecurityResponse::set_bssid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  bssid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
}
inline void WifiSecurityResponse::set_bssid(const char* value,
    size_t size) {
  
  bssid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
}
inline std::string* WifiSecurityResponse::_internal_mutable_bssid() {
  
  return bssid_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* WifiSecurityResponse::release_bssid() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
  return bssid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void WifiSecurityResponse::set_allocated_bssid(std::string* bssid) {
  if (bssid != nullptr) {
    
  } else {
    
  }
  bssid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), bssid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
}
inline std::string* WifiSecurityResponse::unsafe_arena_release_bssid() {
  // @@protoc_insertion_point(field_unsafe_arena_release:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return bssid_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void WifiSecurityResponse::unsafe_arena_set_allocated_bssid(
    std::string* bssid) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (bssid != nullptr) {
    
  } else {
    
  }
  bssid_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      bssid, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.messages.WifiSecurityResponse.bssid)
}

// string key = 3;
inline void WifiSecurityResponse::clear_key() {
  key_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& WifiSecurityResponse::key() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
  return _internal_key();
}
inline void WifiSecurityResponse::set_key(const std::string& value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
}
inline std::string* WifiSecurityResponse::mutable_key() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
  return _internal_mutable_key();
}
inline const std::string& WifiSecurityResponse::_internal_key() const {
  return key_.Get();
}
inline void WifiSecurityResponse::_internal_set_key(const std::string& value) {
  
  key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void WifiSecurityResponse::set_key(std::string&& value) {
  
  key_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
}
inline void WifiSecurityResponse::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
}
inline void WifiSecurityResponse::set_key(const char* value,
    size_t size) {
  
  key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
}
inline std::string* WifiSecurityResponse::_internal_mutable_key() {
  
  return key_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* WifiSecurityResponse::release_key() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
  return key_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void WifiSecurityResponse::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
}
inline std::string* WifiSecurityResponse::unsafe_arena_release_key() {
  // @@protoc_insertion_point(field_unsafe_arena_release:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return key_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void WifiSecurityResponse::unsafe_arena_set_allocated_key(
    std::string* key) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (key != nullptr) {
    
  } else {
    
  }
  key_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      key, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.messages.WifiSecurityResponse.key)
}

// .f1x.aasdk.proto.messages.WifiSecurityResponse.SecurityMode security_mode = 4;
inline void WifiSecurityResponse::clear_security_mode() {
  security_mode_ = 0;
}
inline ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode WifiSecurityResponse::_internal_security_mode() const {
  return static_cast< ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode >(security_mode_);
}
inline ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode WifiSecurityResponse::security_mode() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiSecurityResponse.security_mode)
  return _internal_security_mode();
}
inline void WifiSecurityResponse::_internal_set_security_mode(::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode value) {
  
  security_mode_ = value;
}
inline void WifiSecurityResponse::set_security_mode(::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode value) {
  _internal_set_security_mode(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiSecurityResponse.security_mode)
}

// .f1x.aasdk.proto.messages.WifiSecurityResponse.AccessPointType access_point_type = 5;
inline void WifiSecurityResponse::clear_access_point_type() {
  access_point_type_ = 0;
}
inline ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType WifiSecurityResponse::_internal_access_point_type() const {
  return static_cast< ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType >(access_point_type_);
}
inline ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType WifiSecurityResponse::access_point_type() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.WifiSecurityResponse.access_point_type)
  return _internal_access_point_type();
}
inline void WifiSecurityResponse::_internal_set_access_point_type(::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType value) {
  
  access_point_type_ = value;
}
inline void WifiSecurityResponse::set_access_point_type(::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType value) {
  _internal_set_access_point_type(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.WifiSecurityResponse.access_point_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode>() {
  return ::f1x::aasdk::proto::messages::WifiSecurityResponse_SecurityMode_descriptor();
}
template <> struct is_proto_enum< ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType>() {
  return ::f1x::aasdk::proto::messages::WifiSecurityResponse_AccessPointType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_WifiSecurityResponseMessage_2eproto
