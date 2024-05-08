// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationTurnEventMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_NavigationTurnEventMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_NavigationTurnEventMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ManeuverTypeEnum.pb.h"
#include "ManeuverDirectionEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_NavigationTurnEventMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_NavigationTurnEventMessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NavigationTurnEventMessage_2eproto;
namespace aasdk {
namespace proto {
namespace messages {
class NavigationTurnEvent;
struct NavigationTurnEventDefaultTypeInternal;
extern NavigationTurnEventDefaultTypeInternal _NavigationTurnEvent_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
PROTOBUF_NAMESPACE_OPEN
template<> ::aasdk::proto::messages::NavigationTurnEvent* Arena::CreateMaybeMessage<::aasdk::proto::messages::NavigationTurnEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class NavigationTurnEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aasdk.proto.messages.NavigationTurnEvent) */ {
 public:
  inline NavigationTurnEvent() : NavigationTurnEvent(nullptr) {}
  ~NavigationTurnEvent() override;
  explicit constexpr NavigationTurnEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NavigationTurnEvent(const NavigationTurnEvent& from);
  NavigationTurnEvent(NavigationTurnEvent&& from) noexcept
    : NavigationTurnEvent() {
    *this = ::std::move(from);
  }

  inline NavigationTurnEvent& operator=(const NavigationTurnEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline NavigationTurnEvent& operator=(NavigationTurnEvent&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
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
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NavigationTurnEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const NavigationTurnEvent* internal_default_instance() {
    return reinterpret_cast<const NavigationTurnEvent*>(
               &_NavigationTurnEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NavigationTurnEvent& a, NavigationTurnEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(NavigationTurnEvent* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NavigationTurnEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NavigationTurnEvent* New() const final {
    return new NavigationTurnEvent();
  }

  NavigationTurnEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NavigationTurnEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NavigationTurnEvent& from);
  void MergeFrom(const NavigationTurnEvent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NavigationTurnEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aasdk.proto.messages.NavigationTurnEvent";
  }
  protected:
  explicit NavigationTurnEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStreetNameFieldNumber = 1,
    kTurnImageFieldNumber = 4,
    kManeuverDirectionFieldNumber = 2,
    kManeuverTypeFieldNumber = 3,
    kRoundaboutExitNumberFieldNumber = 5,
    kRoundaboutExitAngleFieldNumber = 6,
  };
  // required string street_name = 1;
  bool has_street_name() const;
  private:
  bool _internal_has_street_name() const;
  public:
  void clear_street_name();
  const std::string& street_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_street_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_street_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_street_name();
  void set_allocated_street_name(std::string* street_name);
  private:
  const std::string& _internal_street_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_street_name(const std::string& value);
  std::string* _internal_mutable_street_name();
  public:

  // required bytes turnImage = 4;
  bool has_turnimage() const;
  private:
  bool _internal_has_turnimage() const;
  public:
  void clear_turnimage();
  const std::string& turnimage() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_turnimage(ArgT0&& arg0, ArgT... args);
  std::string* mutable_turnimage();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_turnimage();
  void set_allocated_turnimage(std::string* turnimage);
  private:
  const std::string& _internal_turnimage() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_turnimage(const std::string& value);
  std::string* _internal_mutable_turnimage();
  public:

  // required .aasdk.proto.enums.ManeuverDirection.Enum maneuverDirection = 2;
  bool has_maneuverdirection() const;
  private:
  bool _internal_has_maneuverdirection() const;
  public:
  void clear_maneuverdirection();
  ::aasdk::proto::enums::ManeuverDirection_Enum maneuverdirection() const;
  void set_maneuverdirection(::aasdk::proto::enums::ManeuverDirection_Enum value);
  private:
  ::aasdk::proto::enums::ManeuverDirection_Enum _internal_maneuverdirection() const;
  void _internal_set_maneuverdirection(::aasdk::proto::enums::ManeuverDirection_Enum value);
  public:

  // required .aasdk.proto.enums.ManeuverType.Enum maneuverType = 3;
  bool has_maneuvertype() const;
  private:
  bool _internal_has_maneuvertype() const;
  public:
  void clear_maneuvertype();
  ::aasdk::proto::enums::ManeuverType_Enum maneuvertype() const;
  void set_maneuvertype(::aasdk::proto::enums::ManeuverType_Enum value);
  private:
  ::aasdk::proto::enums::ManeuverType_Enum _internal_maneuvertype() const;
  void _internal_set_maneuvertype(::aasdk::proto::enums::ManeuverType_Enum value);
  public:

  // required uint32 roundaboutExitNumber = 5;
  bool has_roundaboutexitnumber() const;
  private:
  bool _internal_has_roundaboutexitnumber() const;
  public:
  void clear_roundaboutexitnumber();
  ::PROTOBUF_NAMESPACE_ID::uint32 roundaboutexitnumber() const;
  void set_roundaboutexitnumber(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_roundaboutexitnumber() const;
  void _internal_set_roundaboutexitnumber(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 roundaboutExitAngle = 6;
  bool has_roundaboutexitangle() const;
  private:
  bool _internal_has_roundaboutexitangle() const;
  public:
  void clear_roundaboutexitangle();
  ::PROTOBUF_NAMESPACE_ID::uint32 roundaboutexitangle() const;
  void set_roundaboutexitangle(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_roundaboutexitangle() const;
  void _internal_set_roundaboutexitangle(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:aasdk.proto.messages.NavigationTurnEvent)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr street_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr turnimage_;
  int maneuverdirection_;
  int maneuvertype_;
  ::PROTOBUF_NAMESPACE_ID::uint32 roundaboutexitnumber_;
  ::PROTOBUF_NAMESPACE_ID::uint32 roundaboutexitangle_;
  friend struct ::TableStruct_NavigationTurnEventMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavigationTurnEvent

// required string street_name = 1;
inline bool NavigationTurnEvent::_internal_has_street_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NavigationTurnEvent::has_street_name() const {
  return _internal_has_street_name();
}
inline void NavigationTurnEvent::clear_street_name() {
  street_name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& NavigationTurnEvent::street_name() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.NavigationTurnEvent.street_name)
  return _internal_street_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NavigationTurnEvent::set_street_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 street_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.NavigationTurnEvent.street_name)
}
inline std::string* NavigationTurnEvent::mutable_street_name() {
  // @@protoc_insertion_point(field_mutable:aasdk.proto.messages.NavigationTurnEvent.street_name)
  return _internal_mutable_street_name();
}
inline const std::string& NavigationTurnEvent::_internal_street_name() const {
  return street_name_.Get();
}
inline void NavigationTurnEvent::_internal_set_street_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  street_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* NavigationTurnEvent::_internal_mutable_street_name() {
  _has_bits_[0] |= 0x00000001u;
  return street_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* NavigationTurnEvent::release_street_name() {
  // @@protoc_insertion_point(field_release:aasdk.proto.messages.NavigationTurnEvent.street_name)
  if (!_internal_has_street_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return street_name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void NavigationTurnEvent::set_allocated_street_name(std::string* street_name) {
  if (street_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  street_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), street_name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:aasdk.proto.messages.NavigationTurnEvent.street_name)
}

// required .aasdk.proto.enums.ManeuverDirection.Enum maneuverDirection = 2;
inline bool NavigationTurnEvent::_internal_has_maneuverdirection() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool NavigationTurnEvent::has_maneuverdirection() const {
  return _internal_has_maneuverdirection();
}
inline void NavigationTurnEvent::clear_maneuverdirection() {
  maneuverdirection_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::aasdk::proto::enums::ManeuverDirection_Enum NavigationTurnEvent::_internal_maneuverdirection() const {
  return static_cast< ::aasdk::proto::enums::ManeuverDirection_Enum >(maneuverdirection_);
}
inline ::aasdk::proto::enums::ManeuverDirection_Enum NavigationTurnEvent::maneuverdirection() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.NavigationTurnEvent.maneuverDirection)
  return _internal_maneuverdirection();
}
inline void NavigationTurnEvent::_internal_set_maneuverdirection(::aasdk::proto::enums::ManeuverDirection_Enum value) {
  assert(::aasdk::proto::enums::ManeuverDirection_Enum_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  maneuverdirection_ = value;
}
inline void NavigationTurnEvent::set_maneuverdirection(::aasdk::proto::enums::ManeuverDirection_Enum value) {
  _internal_set_maneuverdirection(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.NavigationTurnEvent.maneuverDirection)
}

// required .aasdk.proto.enums.ManeuverType.Enum maneuverType = 3;
inline bool NavigationTurnEvent::_internal_has_maneuvertype() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool NavigationTurnEvent::has_maneuvertype() const {
  return _internal_has_maneuvertype();
}
inline void NavigationTurnEvent::clear_maneuvertype() {
  maneuvertype_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::aasdk::proto::enums::ManeuverType_Enum NavigationTurnEvent::_internal_maneuvertype() const {
  return static_cast< ::aasdk::proto::enums::ManeuverType_Enum >(maneuvertype_);
}
inline ::aasdk::proto::enums::ManeuverType_Enum NavigationTurnEvent::maneuvertype() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.NavigationTurnEvent.maneuverType)
  return _internal_maneuvertype();
}
inline void NavigationTurnEvent::_internal_set_maneuvertype(::aasdk::proto::enums::ManeuverType_Enum value) {
  assert(::aasdk::proto::enums::ManeuverType_Enum_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  maneuvertype_ = value;
}
inline void NavigationTurnEvent::set_maneuvertype(::aasdk::proto::enums::ManeuverType_Enum value) {
  _internal_set_maneuvertype(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.NavigationTurnEvent.maneuverType)
}

// required bytes turnImage = 4;
inline bool NavigationTurnEvent::_internal_has_turnimage() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool NavigationTurnEvent::has_turnimage() const {
  return _internal_has_turnimage();
}
inline void NavigationTurnEvent::clear_turnimage() {
  turnimage_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& NavigationTurnEvent::turnimage() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.NavigationTurnEvent.turnImage)
  return _internal_turnimage();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NavigationTurnEvent::set_turnimage(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 turnimage_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.NavigationTurnEvent.turnImage)
}
inline std::string* NavigationTurnEvent::mutable_turnimage() {
  // @@protoc_insertion_point(field_mutable:aasdk.proto.messages.NavigationTurnEvent.turnImage)
  return _internal_mutable_turnimage();
}
inline const std::string& NavigationTurnEvent::_internal_turnimage() const {
  return turnimage_.Get();
}
inline void NavigationTurnEvent::_internal_set_turnimage(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  turnimage_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* NavigationTurnEvent::_internal_mutable_turnimage() {
  _has_bits_[0] |= 0x00000002u;
  return turnimage_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* NavigationTurnEvent::release_turnimage() {
  // @@protoc_insertion_point(field_release:aasdk.proto.messages.NavigationTurnEvent.turnImage)
  if (!_internal_has_turnimage()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return turnimage_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void NavigationTurnEvent::set_allocated_turnimage(std::string* turnimage) {
  if (turnimage != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  turnimage_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), turnimage,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:aasdk.proto.messages.NavigationTurnEvent.turnImage)
}

// required uint32 roundaboutExitNumber = 5;
inline bool NavigationTurnEvent::_internal_has_roundaboutexitnumber() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool NavigationTurnEvent::has_roundaboutexitnumber() const {
  return _internal_has_roundaboutexitnumber();
}
inline void NavigationTurnEvent::clear_roundaboutexitnumber() {
  roundaboutexitnumber_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NavigationTurnEvent::_internal_roundaboutexitnumber() const {
  return roundaboutexitnumber_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NavigationTurnEvent::roundaboutexitnumber() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.NavigationTurnEvent.roundaboutExitNumber)
  return _internal_roundaboutexitnumber();
}
inline void NavigationTurnEvent::_internal_set_roundaboutexitnumber(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  roundaboutexitnumber_ = value;
}
inline void NavigationTurnEvent::set_roundaboutexitnumber(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_roundaboutexitnumber(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.NavigationTurnEvent.roundaboutExitNumber)
}

// required uint32 roundaboutExitAngle = 6;
inline bool NavigationTurnEvent::_internal_has_roundaboutexitangle() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool NavigationTurnEvent::has_roundaboutexitangle() const {
  return _internal_has_roundaboutexitangle();
}
inline void NavigationTurnEvent::clear_roundaboutexitangle() {
  roundaboutexitangle_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NavigationTurnEvent::_internal_roundaboutexitangle() const {
  return roundaboutexitangle_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NavigationTurnEvent::roundaboutexitangle() const {
  // @@protoc_insertion_point(field_get:aasdk.proto.messages.NavigationTurnEvent.roundaboutExitAngle)
  return _internal_roundaboutexitangle();
}
inline void NavigationTurnEvent::_internal_set_roundaboutexitangle(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  roundaboutexitangle_ = value;
}
inline void NavigationTurnEvent::set_roundaboutexitangle(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_roundaboutexitangle(value);
  // @@protoc_insertion_point(field_set:aasdk.proto.messages.NavigationTurnEvent.roundaboutExitAngle)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_NavigationTurnEventMessage_2eproto