// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InputChannelData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_InputChannelData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_InputChannelData_2eproto

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
#include "TouchConfigData.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_InputChannelData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_InputChannelData_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_InputChannelData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class InputChannel;
class InputChannelDefaultTypeInternal;
extern InputChannelDefaultTypeInternal _InputChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::data::InputChannel* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::InputChannel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class InputChannel PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.InputChannel) */ {
 public:
  inline InputChannel() : InputChannel(nullptr) {};
  virtual ~InputChannel();

  InputChannel(const InputChannel& from);
  InputChannel(InputChannel&& from) noexcept
    : InputChannel() {
    *this = ::std::move(from);
  }

  inline InputChannel& operator=(const InputChannel& from) {
    CopyFrom(from);
    return *this;
  }
  inline InputChannel& operator=(InputChannel&& from) noexcept {
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
  static const InputChannel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InputChannel* internal_default_instance() {
    return reinterpret_cast<const InputChannel*>(
               &_InputChannel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InputChannel& a, InputChannel& b) {
    a.Swap(&b);
  }
  inline void Swap(InputChannel* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(InputChannel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InputChannel* New() const final {
    return CreateMaybeMessage<InputChannel>(nullptr);
  }

  InputChannel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InputChannel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InputChannel& from);
  void MergeFrom(const InputChannel& from);
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
  void InternalSwap(InputChannel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.data.InputChannel";
  }
  protected:
  explicit InputChannel(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_InputChannelData_2eproto);
    return ::descriptor_table_InputChannelData_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSupportedKeycodesFieldNumber = 1,
    kTouchScreenConfigFieldNumber = 2,
    kTouchPadConfigFieldNumber = 3,
  };
  // repeated uint32 supported_keycodes = 1;
  int supported_keycodes_size() const;
  private:
  int _internal_supported_keycodes_size() const;
  public:
  void clear_supported_keycodes();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_supported_keycodes(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_supported_keycodes() const;
  void _internal_add_supported_keycodes(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_supported_keycodes();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 supported_keycodes(int index) const;
  void set_supported_keycodes(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_supported_keycodes(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      supported_keycodes() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_supported_keycodes();

  // .f1x.aasdk.proto.data.TouchConfig touch_screen_config = 2;
  bool has_touch_screen_config() const;
  private:
  bool _internal_has_touch_screen_config() const;
  public:
  void clear_touch_screen_config();
  const ::f1x::aasdk::proto::data::TouchConfig& touch_screen_config() const;
  ::f1x::aasdk::proto::data::TouchConfig* release_touch_screen_config();
  ::f1x::aasdk::proto::data::TouchConfig* mutable_touch_screen_config();
  void set_allocated_touch_screen_config(::f1x::aasdk::proto::data::TouchConfig* touch_screen_config);
  private:
  const ::f1x::aasdk::proto::data::TouchConfig& _internal_touch_screen_config() const;
  ::f1x::aasdk::proto::data::TouchConfig* _internal_mutable_touch_screen_config();
  public:
  void unsafe_arena_set_allocated_touch_screen_config(
      ::f1x::aasdk::proto::data::TouchConfig* touch_screen_config);
  ::f1x::aasdk::proto::data::TouchConfig* unsafe_arena_release_touch_screen_config();

  // .f1x.aasdk.proto.data.TouchConfig touch_pad_config = 3;
  bool has_touch_pad_config() const;
  private:
  bool _internal_has_touch_pad_config() const;
  public:
  void clear_touch_pad_config();
  const ::f1x::aasdk::proto::data::TouchConfig& touch_pad_config() const;
  ::f1x::aasdk::proto::data::TouchConfig* release_touch_pad_config();
  ::f1x::aasdk::proto::data::TouchConfig* mutable_touch_pad_config();
  void set_allocated_touch_pad_config(::f1x::aasdk::proto::data::TouchConfig* touch_pad_config);
  private:
  const ::f1x::aasdk::proto::data::TouchConfig& _internal_touch_pad_config() const;
  ::f1x::aasdk::proto::data::TouchConfig* _internal_mutable_touch_pad_config();
  public:
  void unsafe_arena_set_allocated_touch_pad_config(
      ::f1x::aasdk::proto::data::TouchConfig* touch_pad_config);
  ::f1x::aasdk::proto::data::TouchConfig* unsafe_arena_release_touch_pad_config();

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.InputChannel)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > supported_keycodes_;
  mutable std::atomic<int> _supported_keycodes_cached_byte_size_;
  ::f1x::aasdk::proto::data::TouchConfig* touch_screen_config_;
  ::f1x::aasdk::proto::data::TouchConfig* touch_pad_config_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_InputChannelData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InputChannel

// repeated uint32 supported_keycodes = 1;
inline int InputChannel::_internal_supported_keycodes_size() const {
  return supported_keycodes_.size();
}
inline int InputChannel::supported_keycodes_size() const {
  return _internal_supported_keycodes_size();
}
inline void InputChannel::clear_supported_keycodes() {
  supported_keycodes_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 InputChannel::_internal_supported_keycodes(int index) const {
  return supported_keycodes_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 InputChannel::supported_keycodes(int index) const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.InputChannel.supported_keycodes)
  return _internal_supported_keycodes(index);
}
inline void InputChannel::set_supported_keycodes(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  supported_keycodes_.Set(index, value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.InputChannel.supported_keycodes)
}
inline void InputChannel::_internal_add_supported_keycodes(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  supported_keycodes_.Add(value);
}
inline void InputChannel::add_supported_keycodes(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_supported_keycodes(value);
  // @@protoc_insertion_point(field_add:f1x.aasdk.proto.data.InputChannel.supported_keycodes)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
InputChannel::_internal_supported_keycodes() const {
  return supported_keycodes_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
InputChannel::supported_keycodes() const {
  // @@protoc_insertion_point(field_list:f1x.aasdk.proto.data.InputChannel.supported_keycodes)
  return _internal_supported_keycodes();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
InputChannel::_internal_mutable_supported_keycodes() {
  return &supported_keycodes_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
InputChannel::mutable_supported_keycodes() {
  // @@protoc_insertion_point(field_mutable_list:f1x.aasdk.proto.data.InputChannel.supported_keycodes)
  return _internal_mutable_supported_keycodes();
}

// .f1x.aasdk.proto.data.TouchConfig touch_screen_config = 2;
inline bool InputChannel::_internal_has_touch_screen_config() const {
  return this != internal_default_instance() && touch_screen_config_ != nullptr;
}
inline bool InputChannel::has_touch_screen_config() const {
  return _internal_has_touch_screen_config();
}
inline const ::f1x::aasdk::proto::data::TouchConfig& InputChannel::_internal_touch_screen_config() const {
  const ::f1x::aasdk::proto::data::TouchConfig* p = touch_screen_config_;
  return p != nullptr ? *p : *reinterpret_cast<const ::f1x::aasdk::proto::data::TouchConfig*>(
      &::f1x::aasdk::proto::data::_TouchConfig_default_instance_);
}
inline const ::f1x::aasdk::proto::data::TouchConfig& InputChannel::touch_screen_config() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.InputChannel.touch_screen_config)
  return _internal_touch_screen_config();
}
inline void InputChannel::unsafe_arena_set_allocated_touch_screen_config(
    ::f1x::aasdk::proto::data::TouchConfig* touch_screen_config) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(touch_screen_config_);
  }
  touch_screen_config_ = touch_screen_config;
  if (touch_screen_config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.data.InputChannel.touch_screen_config)
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::release_touch_screen_config() {
  auto temp = unsafe_arena_release_touch_screen_config();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::unsafe_arena_release_touch_screen_config() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.data.InputChannel.touch_screen_config)
  
  ::f1x::aasdk::proto::data::TouchConfig* temp = touch_screen_config_;
  touch_screen_config_ = nullptr;
  return temp;
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::_internal_mutable_touch_screen_config() {
  
  if (touch_screen_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::f1x::aasdk::proto::data::TouchConfig>(GetArena());
    touch_screen_config_ = p;
  }
  return touch_screen_config_;
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::mutable_touch_screen_config() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.data.InputChannel.touch_screen_config)
  return _internal_mutable_touch_screen_config();
}
inline void InputChannel::set_allocated_touch_screen_config(::f1x::aasdk::proto::data::TouchConfig* touch_screen_config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(touch_screen_config_);
  }
  if (touch_screen_config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(touch_screen_config)->GetArena();
    if (message_arena != submessage_arena) {
      touch_screen_config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, touch_screen_config, submessage_arena);
    }
    
  } else {
    
  }
  touch_screen_config_ = touch_screen_config;
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.data.InputChannel.touch_screen_config)
}

// .f1x.aasdk.proto.data.TouchConfig touch_pad_config = 3;
inline bool InputChannel::_internal_has_touch_pad_config() const {
  return this != internal_default_instance() && touch_pad_config_ != nullptr;
}
inline bool InputChannel::has_touch_pad_config() const {
  return _internal_has_touch_pad_config();
}
inline const ::f1x::aasdk::proto::data::TouchConfig& InputChannel::_internal_touch_pad_config() const {
  const ::f1x::aasdk::proto::data::TouchConfig* p = touch_pad_config_;
  return p != nullptr ? *p : *reinterpret_cast<const ::f1x::aasdk::proto::data::TouchConfig*>(
      &::f1x::aasdk::proto::data::_TouchConfig_default_instance_);
}
inline const ::f1x::aasdk::proto::data::TouchConfig& InputChannel::touch_pad_config() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.InputChannel.touch_pad_config)
  return _internal_touch_pad_config();
}
inline void InputChannel::unsafe_arena_set_allocated_touch_pad_config(
    ::f1x::aasdk::proto::data::TouchConfig* touch_pad_config) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(touch_pad_config_);
  }
  touch_pad_config_ = touch_pad_config;
  if (touch_pad_config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:f1x.aasdk.proto.data.InputChannel.touch_pad_config)
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::release_touch_pad_config() {
  auto temp = unsafe_arena_release_touch_pad_config();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::unsafe_arena_release_touch_pad_config() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.data.InputChannel.touch_pad_config)
  
  ::f1x::aasdk::proto::data::TouchConfig* temp = touch_pad_config_;
  touch_pad_config_ = nullptr;
  return temp;
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::_internal_mutable_touch_pad_config() {
  
  if (touch_pad_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::f1x::aasdk::proto::data::TouchConfig>(GetArena());
    touch_pad_config_ = p;
  }
  return touch_pad_config_;
}
inline ::f1x::aasdk::proto::data::TouchConfig* InputChannel::mutable_touch_pad_config() {
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.data.InputChannel.touch_pad_config)
  return _internal_mutable_touch_pad_config();
}
inline void InputChannel::set_allocated_touch_pad_config(::f1x::aasdk::proto::data::TouchConfig* touch_pad_config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(touch_pad_config_);
  }
  if (touch_pad_config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(touch_pad_config)->GetArena();
    if (message_arena != submessage_arena) {
      touch_pad_config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, touch_pad_config, submessage_arena);
    }
    
  } else {
    
  }
  touch_pad_config_ = touch_pad_config;
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.data.InputChannel.touch_pad_config)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_InputChannelData_2eproto
