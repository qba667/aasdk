// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoFocusRequestMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_VideoFocusRequestMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_VideoFocusRequestMessage_2eproto

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
#include "VideoFocusModeEnum.pb.h"
#include "VideoFocusReasonEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_VideoFocusRequestMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_VideoFocusRequestMessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_VideoFocusRequestMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class VideoFocusRequest;
class VideoFocusRequestDefaultTypeInternal;
extern VideoFocusRequestDefaultTypeInternal _VideoFocusRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::VideoFocusRequest* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::VideoFocusRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class VideoFocusRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.VideoFocusRequest) */ {
 public:
  inline VideoFocusRequest() : VideoFocusRequest(nullptr) {};
  virtual ~VideoFocusRequest();

  VideoFocusRequest(const VideoFocusRequest& from);
  VideoFocusRequest(VideoFocusRequest&& from) noexcept
    : VideoFocusRequest() {
    *this = ::std::move(from);
  }

  inline VideoFocusRequest& operator=(const VideoFocusRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline VideoFocusRequest& operator=(VideoFocusRequest&& from) noexcept {
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
  static const VideoFocusRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VideoFocusRequest* internal_default_instance() {
    return reinterpret_cast<const VideoFocusRequest*>(
               &_VideoFocusRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VideoFocusRequest& a, VideoFocusRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(VideoFocusRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VideoFocusRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VideoFocusRequest* New() const final {
    return CreateMaybeMessage<VideoFocusRequest>(nullptr);
  }

  VideoFocusRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VideoFocusRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VideoFocusRequest& from);
  void MergeFrom(const VideoFocusRequest& from);
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
  void InternalSwap(VideoFocusRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.VideoFocusRequest";
  }
  protected:
  explicit VideoFocusRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_VideoFocusRequestMessage_2eproto);
    return ::descriptor_table_VideoFocusRequestMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDispIndexFieldNumber = 1,
    kFocusModeFieldNumber = 2,
    kFocusReasonFieldNumber = 3,
  };
  // int32 disp_index = 1;
  void clear_disp_index();
  ::PROTOBUF_NAMESPACE_ID::int32 disp_index() const;
  void set_disp_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_disp_index() const;
  void _internal_set_disp_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // .f1x.aasdk.proto.enums.VideoFocusMode.Enum focus_mode = 2;
  void clear_focus_mode();
  ::f1x::aasdk::proto::enums::VideoFocusMode_Enum focus_mode() const;
  void set_focus_mode(::f1x::aasdk::proto::enums::VideoFocusMode_Enum value);
  private:
  ::f1x::aasdk::proto::enums::VideoFocusMode_Enum _internal_focus_mode() const;
  void _internal_set_focus_mode(::f1x::aasdk::proto::enums::VideoFocusMode_Enum value);
  public:

  // .f1x.aasdk.proto.enums.VideoFocusReason.Enum focus_reason = 3;
  void clear_focus_reason();
  ::f1x::aasdk::proto::enums::VideoFocusReason_Enum focus_reason() const;
  void set_focus_reason(::f1x::aasdk::proto::enums::VideoFocusReason_Enum value);
  private:
  ::f1x::aasdk::proto::enums::VideoFocusReason_Enum _internal_focus_reason() const;
  void _internal_set_focus_reason(::f1x::aasdk::proto::enums::VideoFocusReason_Enum value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.VideoFocusRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 disp_index_;
  int focus_mode_;
  int focus_reason_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_VideoFocusRequestMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VideoFocusRequest

// int32 disp_index = 1;
inline void VideoFocusRequest::clear_disp_index() {
  disp_index_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VideoFocusRequest::_internal_disp_index() const {
  return disp_index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VideoFocusRequest::disp_index() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.VideoFocusRequest.disp_index)
  return _internal_disp_index();
}
inline void VideoFocusRequest::_internal_set_disp_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  disp_index_ = value;
}
inline void VideoFocusRequest::set_disp_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_disp_index(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.VideoFocusRequest.disp_index)
}

// .f1x.aasdk.proto.enums.VideoFocusMode.Enum focus_mode = 2;
inline void VideoFocusRequest::clear_focus_mode() {
  focus_mode_ = 0;
}
inline ::f1x::aasdk::proto::enums::VideoFocusMode_Enum VideoFocusRequest::_internal_focus_mode() const {
  return static_cast< ::f1x::aasdk::proto::enums::VideoFocusMode_Enum >(focus_mode_);
}
inline ::f1x::aasdk::proto::enums::VideoFocusMode_Enum VideoFocusRequest::focus_mode() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.VideoFocusRequest.focus_mode)
  return _internal_focus_mode();
}
inline void VideoFocusRequest::_internal_set_focus_mode(::f1x::aasdk::proto::enums::VideoFocusMode_Enum value) {
  
  focus_mode_ = value;
}
inline void VideoFocusRequest::set_focus_mode(::f1x::aasdk::proto::enums::VideoFocusMode_Enum value) {
  _internal_set_focus_mode(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.VideoFocusRequest.focus_mode)
}

// .f1x.aasdk.proto.enums.VideoFocusReason.Enum focus_reason = 3;
inline void VideoFocusRequest::clear_focus_reason() {
  focus_reason_ = 0;
}
inline ::f1x::aasdk::proto::enums::VideoFocusReason_Enum VideoFocusRequest::_internal_focus_reason() const {
  return static_cast< ::f1x::aasdk::proto::enums::VideoFocusReason_Enum >(focus_reason_);
}
inline ::f1x::aasdk::proto::enums::VideoFocusReason_Enum VideoFocusRequest::focus_reason() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.VideoFocusRequest.focus_reason)
  return _internal_focus_reason();
}
inline void VideoFocusRequest::_internal_set_focus_reason(::f1x::aasdk::proto::enums::VideoFocusReason_Enum value) {
  
  focus_reason_ = value;
}
inline void VideoFocusRequest::set_focus_reason(::f1x::aasdk::proto::enums::VideoFocusReason_Enum value) {
  _internal_set_focus_reason(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.VideoFocusRequest.focus_reason)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_VideoFocusRequestMessage_2eproto
