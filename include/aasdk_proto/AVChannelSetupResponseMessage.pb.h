// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelSetupResponseMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AVChannelSetupResponseMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AVChannelSetupResponseMessage_2eproto

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
#include "AVChannelSetupStatusEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_AVChannelSetupResponseMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AVChannelSetupResponseMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVChannelSetupResponseMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class AVChannelSetupResponse;
class AVChannelSetupResponseDefaultTypeInternal;
extern AVChannelSetupResponseDefaultTypeInternal _AVChannelSetupResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::AVChannelSetupResponse* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::AVChannelSetupResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class AVChannelSetupResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.AVChannelSetupResponse) */ {
 public:
  inline AVChannelSetupResponse() : AVChannelSetupResponse(nullptr) {};
  virtual ~AVChannelSetupResponse();

  AVChannelSetupResponse(const AVChannelSetupResponse& from);
  AVChannelSetupResponse(AVChannelSetupResponse&& from) noexcept
    : AVChannelSetupResponse() {
    *this = ::std::move(from);
  }

  inline AVChannelSetupResponse& operator=(const AVChannelSetupResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline AVChannelSetupResponse& operator=(AVChannelSetupResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const AVChannelSetupResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AVChannelSetupResponse* internal_default_instance() {
    return reinterpret_cast<const AVChannelSetupResponse*>(
               &_AVChannelSetupResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AVChannelSetupResponse& a, AVChannelSetupResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(AVChannelSetupResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AVChannelSetupResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AVChannelSetupResponse* New() const final {
    return CreateMaybeMessage<AVChannelSetupResponse>(nullptr);
  }

  AVChannelSetupResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AVChannelSetupResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AVChannelSetupResponse& from);
  void MergeFrom(const AVChannelSetupResponse& from);
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
  void InternalSwap(AVChannelSetupResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.AVChannelSetupResponse";
  }
  protected:
  explicit AVChannelSetupResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AVChannelSetupResponseMessage_2eproto);
    return ::descriptor_table_AVChannelSetupResponseMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kConfigsFieldNumber = 3,
    kMediaStatusFieldNumber = 1,
    kMaxUnackedFieldNumber = 2,
  };
  // repeated uint32 configs = 3;
  int configs_size() const;
  private:
  int _internal_configs_size() const;
  public:
  void clear_configs();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_configs(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_configs() const;
  void _internal_add_configs(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_configs();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 configs(int index) const;
  void set_configs(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_configs(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      configs() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_configs();

  // required .f1x.aasdk.proto.enums.AVChannelSetupStatus.Enum media_status = 1;
  bool has_media_status() const;
  private:
  bool _internal_has_media_status() const;
  public:
  void clear_media_status();
  ::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum media_status() const;
  void set_media_status(::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum value);
  private:
  ::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum _internal_media_status() const;
  void _internal_set_media_status(::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum value);
  public:

  // required uint32 max_unacked = 2;
  bool has_max_unacked() const;
  private:
  bool _internal_has_max_unacked() const;
  public:
  void clear_max_unacked();
  ::PROTOBUF_NAMESPACE_ID::uint32 max_unacked() const;
  void set_max_unacked(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_max_unacked() const;
  void _internal_set_max_unacked(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.AVChannelSetupResponse)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > configs_;
  int media_status_;
  ::PROTOBUF_NAMESPACE_ID::uint32 max_unacked_;
  friend struct ::TableStruct_AVChannelSetupResponseMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AVChannelSetupResponse

// required .f1x.aasdk.proto.enums.AVChannelSetupStatus.Enum media_status = 1;
inline bool AVChannelSetupResponse::_internal_has_media_status() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AVChannelSetupResponse::has_media_status() const {
  return _internal_has_media_status();
}
inline void AVChannelSetupResponse::clear_media_status() {
  media_status_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum AVChannelSetupResponse::_internal_media_status() const {
  return static_cast< ::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum >(media_status_);
}
inline ::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum AVChannelSetupResponse::media_status() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVChannelSetupResponse.media_status)
  return _internal_media_status();
}
inline void AVChannelSetupResponse::_internal_set_media_status(::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum value) {
  assert(::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  media_status_ = value;
}
inline void AVChannelSetupResponse::set_media_status(::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum value) {
  _internal_set_media_status(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVChannelSetupResponse.media_status)
}

// required uint32 max_unacked = 2;
inline bool AVChannelSetupResponse::_internal_has_max_unacked() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AVChannelSetupResponse::has_max_unacked() const {
  return _internal_has_max_unacked();
}
inline void AVChannelSetupResponse::clear_max_unacked() {
  max_unacked_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AVChannelSetupResponse::_internal_max_unacked() const {
  return max_unacked_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AVChannelSetupResponse::max_unacked() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVChannelSetupResponse.max_unacked)
  return _internal_max_unacked();
}
inline void AVChannelSetupResponse::_internal_set_max_unacked(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  max_unacked_ = value;
}
inline void AVChannelSetupResponse::set_max_unacked(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_max_unacked(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVChannelSetupResponse.max_unacked)
}

// repeated uint32 configs = 3;
inline int AVChannelSetupResponse::_internal_configs_size() const {
  return configs_.size();
}
inline int AVChannelSetupResponse::configs_size() const {
  return _internal_configs_size();
}
inline void AVChannelSetupResponse::clear_configs() {
  configs_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AVChannelSetupResponse::_internal_configs(int index) const {
  return configs_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AVChannelSetupResponse::configs(int index) const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVChannelSetupResponse.configs)
  return _internal_configs(index);
}
inline void AVChannelSetupResponse::set_configs(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  configs_.Set(index, value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVChannelSetupResponse.configs)
}
inline void AVChannelSetupResponse::_internal_add_configs(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  configs_.Add(value);
}
inline void AVChannelSetupResponse::add_configs(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_configs(value);
  // @@protoc_insertion_point(field_add:f1x.aasdk.proto.messages.AVChannelSetupResponse.configs)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
AVChannelSetupResponse::_internal_configs() const {
  return configs_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
AVChannelSetupResponse::configs() const {
  // @@protoc_insertion_point(field_list:f1x.aasdk.proto.messages.AVChannelSetupResponse.configs)
  return _internal_configs();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
AVChannelSetupResponse::_internal_mutable_configs() {
  return &configs_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
AVChannelSetupResponse::mutable_configs() {
  // @@protoc_insertion_point(field_mutable_list:f1x.aasdk.proto.messages.AVChannelSetupResponse.configs)
  return _internal_mutable_configs();
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AVChannelSetupResponseMessage_2eproto
