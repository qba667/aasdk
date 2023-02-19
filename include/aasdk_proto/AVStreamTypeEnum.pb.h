// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVStreamTypeEnum.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AVStreamTypeEnum_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AVStreamTypeEnum_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_AVStreamTypeEnum_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AVStreamTypeEnum_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVStreamTypeEnum_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
class AVStreamType;
class AVStreamTypeDefaultTypeInternal;
extern AVStreamTypeDefaultTypeInternal _AVStreamType_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::enums::AVStreamType* Arena::CreateMaybeMessage<::f1x::aasdk::proto::enums::AVStreamType>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {

enum AVStreamType_Enum : int {
  AVStreamType_Enum_NONE = 0,
  AVStreamType_Enum_AUDIO = 1,
  AVStreamType_Enum_VIDEO = 3,
  AVStreamType_Enum_AVStreamType_Enum_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  AVStreamType_Enum_AVStreamType_Enum_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool AVStreamType_Enum_IsValid(int value);
constexpr AVStreamType_Enum AVStreamType_Enum_Enum_MIN = AVStreamType_Enum_NONE;
constexpr AVStreamType_Enum AVStreamType_Enum_Enum_MAX = AVStreamType_Enum_VIDEO;
constexpr int AVStreamType_Enum_Enum_ARRAYSIZE = AVStreamType_Enum_Enum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AVStreamType_Enum_descriptor();
template<typename T>
inline const std::string& AVStreamType_Enum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AVStreamType_Enum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AVStreamType_Enum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    AVStreamType_Enum_descriptor(), enum_t_value);
}
inline bool AVStreamType_Enum_Parse(
    const std::string& name, AVStreamType_Enum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<AVStreamType_Enum>(
    AVStreamType_Enum_descriptor(), name, value);
}
// ===================================================================

class AVStreamType PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.enums.AVStreamType) */ {
 public:
  inline AVStreamType() : AVStreamType(nullptr) {};
  virtual ~AVStreamType();

  AVStreamType(const AVStreamType& from);
  AVStreamType(AVStreamType&& from) noexcept
    : AVStreamType() {
    *this = ::std::move(from);
  }

  inline AVStreamType& operator=(const AVStreamType& from) {
    CopyFrom(from);
    return *this;
  }
  inline AVStreamType& operator=(AVStreamType&& from) noexcept {
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
  static const AVStreamType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AVStreamType* internal_default_instance() {
    return reinterpret_cast<const AVStreamType*>(
               &_AVStreamType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AVStreamType& a, AVStreamType& b) {
    a.Swap(&b);
  }
  inline void Swap(AVStreamType* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AVStreamType* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AVStreamType* New() const final {
    return CreateMaybeMessage<AVStreamType>(nullptr);
  }

  AVStreamType* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AVStreamType>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AVStreamType& from);
  void MergeFrom(const AVStreamType& from);
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
  void InternalSwap(AVStreamType* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.enums.AVStreamType";
  }
  protected:
  explicit AVStreamType(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AVStreamTypeEnum_2eproto);
    return ::descriptor_table_AVStreamTypeEnum_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef AVStreamType_Enum Enum;
  static constexpr Enum NONE =
    AVStreamType_Enum_NONE;
  static constexpr Enum AUDIO =
    AVStreamType_Enum_AUDIO;
  static constexpr Enum VIDEO =
    AVStreamType_Enum_VIDEO;
  static inline bool Enum_IsValid(int value) {
    return AVStreamType_Enum_IsValid(value);
  }
  static constexpr Enum Enum_MIN =
    AVStreamType_Enum_Enum_MIN;
  static constexpr Enum Enum_MAX =
    AVStreamType_Enum_Enum_MAX;
  static constexpr int Enum_ARRAYSIZE =
    AVStreamType_Enum_Enum_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Enum_descriptor() {
    return AVStreamType_Enum_descriptor();
  }
  template<typename T>
  static inline const std::string& Enum_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Enum>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Enum_Name.");
    return AVStreamType_Enum_Name(enum_t_value);
  }
  static inline bool Enum_Parse(const std::string& name,
      Enum* value) {
    return AVStreamType_Enum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.enums.AVStreamType)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_AVStreamTypeEnum_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AVStreamType

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::f1x::aasdk::proto::enums::AVStreamType_Enum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::f1x::aasdk::proto::enums::AVStreamType_Enum>() {
  return ::f1x::aasdk::proto::enums::AVStreamType_Enum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AVStreamTypeEnum_2eproto
