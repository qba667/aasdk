// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AudioFocusStateEnum.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AudioFocusStateEnum_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AudioFocusStateEnum_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_AudioFocusStateEnum_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AudioFocusStateEnum_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AudioFocusStateEnum_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
class AudioFocusState;
class AudioFocusStateDefaultTypeInternal;
extern AudioFocusStateDefaultTypeInternal _AudioFocusState_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::enums::AudioFocusState* Arena::CreateMaybeMessage<::f1x::aasdk::proto::enums::AudioFocusState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {

enum AudioFocusState_Enum : int {
  AudioFocusState_Enum_NONE = 0,
  AudioFocusState_Enum_GAIN = 1,
  AudioFocusState_Enum_GAIN_TRANSIENT = 2,
  AudioFocusState_Enum_LOSS = 3,
  AudioFocusState_Enum_LOSS_TRANSIENT_CAN_DUCK = 4,
  AudioFocusState_Enum_LOSS_TRANSIENT = 5,
  AudioFocusState_Enum_GAIN_MEDIA_ONLY = 6,
  AudioFocusState_Enum_GAIN_TRANSIENT_GUIDANCE_ONLY = 7,
  AudioFocusState_Enum_AudioFocusState_Enum_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  AudioFocusState_Enum_AudioFocusState_Enum_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool AudioFocusState_Enum_IsValid(int value);
constexpr AudioFocusState_Enum AudioFocusState_Enum_Enum_MIN = AudioFocusState_Enum_NONE;
constexpr AudioFocusState_Enum AudioFocusState_Enum_Enum_MAX = AudioFocusState_Enum_GAIN_TRANSIENT_GUIDANCE_ONLY;
constexpr int AudioFocusState_Enum_Enum_ARRAYSIZE = AudioFocusState_Enum_Enum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AudioFocusState_Enum_descriptor();
template<typename T>
inline const std::string& AudioFocusState_Enum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AudioFocusState_Enum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AudioFocusState_Enum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    AudioFocusState_Enum_descriptor(), enum_t_value);
}
inline bool AudioFocusState_Enum_Parse(
    const std::string& name, AudioFocusState_Enum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<AudioFocusState_Enum>(
    AudioFocusState_Enum_descriptor(), name, value);
}
// ===================================================================

class AudioFocusState PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.enums.AudioFocusState) */ {
 public:
  inline AudioFocusState() : AudioFocusState(nullptr) {};
  virtual ~AudioFocusState();

  AudioFocusState(const AudioFocusState& from);
  AudioFocusState(AudioFocusState&& from) noexcept
    : AudioFocusState() {
    *this = ::std::move(from);
  }

  inline AudioFocusState& operator=(const AudioFocusState& from) {
    CopyFrom(from);
    return *this;
  }
  inline AudioFocusState& operator=(AudioFocusState&& from) noexcept {
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
  static const AudioFocusState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AudioFocusState* internal_default_instance() {
    return reinterpret_cast<const AudioFocusState*>(
               &_AudioFocusState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AudioFocusState& a, AudioFocusState& b) {
    a.Swap(&b);
  }
  inline void Swap(AudioFocusState* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AudioFocusState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AudioFocusState* New() const final {
    return CreateMaybeMessage<AudioFocusState>(nullptr);
  }

  AudioFocusState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AudioFocusState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AudioFocusState& from);
  void MergeFrom(const AudioFocusState& from);
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
  void InternalSwap(AudioFocusState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.enums.AudioFocusState";
  }
  protected:
  explicit AudioFocusState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AudioFocusStateEnum_2eproto);
    return ::descriptor_table_AudioFocusStateEnum_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef AudioFocusState_Enum Enum;
  static constexpr Enum NONE =
    AudioFocusState_Enum_NONE;
  static constexpr Enum GAIN =
    AudioFocusState_Enum_GAIN;
  static constexpr Enum GAIN_TRANSIENT =
    AudioFocusState_Enum_GAIN_TRANSIENT;
  static constexpr Enum LOSS =
    AudioFocusState_Enum_LOSS;
  static constexpr Enum LOSS_TRANSIENT_CAN_DUCK =
    AudioFocusState_Enum_LOSS_TRANSIENT_CAN_DUCK;
  static constexpr Enum LOSS_TRANSIENT =
    AudioFocusState_Enum_LOSS_TRANSIENT;
  static constexpr Enum GAIN_MEDIA_ONLY =
    AudioFocusState_Enum_GAIN_MEDIA_ONLY;
  static constexpr Enum GAIN_TRANSIENT_GUIDANCE_ONLY =
    AudioFocusState_Enum_GAIN_TRANSIENT_GUIDANCE_ONLY;
  static inline bool Enum_IsValid(int value) {
    return AudioFocusState_Enum_IsValid(value);
  }
  static constexpr Enum Enum_MIN =
    AudioFocusState_Enum_Enum_MIN;
  static constexpr Enum Enum_MAX =
    AudioFocusState_Enum_Enum_MAX;
  static constexpr int Enum_ARRAYSIZE =
    AudioFocusState_Enum_Enum_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Enum_descriptor() {
    return AudioFocusState_Enum_descriptor();
  }
  template<typename T>
  static inline const std::string& Enum_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Enum>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Enum_Name.");
    return AudioFocusState_Enum_Name(enum_t_value);
  }
  static inline bool Enum_Parse(const std::string& name,
      Enum* value) {
    return AudioFocusState_Enum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.enums.AudioFocusState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_AudioFocusStateEnum_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AudioFocusState

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::f1x::aasdk::proto::enums::AudioFocusState_Enum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::f1x::aasdk::proto::enums::AudioFocusState_Enum>() {
  return ::f1x::aasdk::proto::enums::AudioFocusState_Enum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AudioFocusStateEnum_2eproto
