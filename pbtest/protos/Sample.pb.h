// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Sample.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Sample_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Sample_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Sample_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Sample_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Sample_2eproto;
namespace pb {
class Sample;
class SampleDefaultTypeInternal;
extern SampleDefaultTypeInternal _Sample_default_instance_;
class Sample_MapDataEntry_DoNotUse;
class Sample_MapDataEntry_DoNotUseDefaultTypeInternal;
extern Sample_MapDataEntry_DoNotUseDefaultTypeInternal _Sample_MapDataEntry_DoNotUse_default_instance_;
class pb_color;
class pb_colorDefaultTypeInternal;
extern pb_colorDefaultTypeInternal _pb_color_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::Sample* Arena::CreateMaybeMessage<::pb::Sample>(Arena*);
template<> ::pb::Sample_MapDataEntry_DoNotUse* Arena::CreateMaybeMessage<::pb::Sample_MapDataEntry_DoNotUse>(Arena*);
template<> ::pb::pb_color* Arena::CreateMaybeMessage<::pb::pb_color>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class pb_color :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.pb_color) */ {
 public:
  pb_color();
  virtual ~pb_color();

  pb_color(const pb_color& from);
  pb_color(pb_color&& from) noexcept
    : pb_color() {
    *this = ::std::move(from);
  }

  inline pb_color& operator=(const pb_color& from) {
    CopyFrom(from);
    return *this;
  }
  inline pb_color& operator=(pb_color&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const pb_color& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const pb_color* internal_default_instance() {
    return reinterpret_cast<const pb_color*>(
               &_pb_color_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(pb_color* other);
  friend void swap(pb_color& a, pb_color& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline pb_color* New() const final {
    return CreateMaybeMessage<pb_color>(nullptr);
  }

  pb_color* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<pb_color>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const pb_color& from);
  void MergeFrom(const pb_color& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(pb_color* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.pb_color";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Sample_2eproto);
    return ::descriptor_table_Sample_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float r = 1;
  void clear_r();
  static const int kRFieldNumber = 1;
  float r() const;
  void set_r(float value);

  // float g = 2;
  void clear_g();
  static const int kGFieldNumber = 2;
  float g() const;
  void set_g(float value);

  // float b = 3;
  void clear_b();
  static const int kBFieldNumber = 3;
  float b() const;
  void set_b(float value);

  // float a = 4;
  void clear_a();
  static const int kAFieldNumber = 4;
  float a() const;
  void set_a(float value);

  // @@protoc_insertion_point(class_scope:pb.pb_color)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float r_;
  float g_;
  float b_;
  float a_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Sample_2eproto;
};
// -------------------------------------------------------------------

class Sample_MapDataEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Sample_MapDataEntry_DoNotUse, 
    std::string, ::PROTOBUF_NAMESPACE_ID::int32,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Sample_MapDataEntry_DoNotUse, 
    std::string, ::PROTOBUF_NAMESPACE_ID::int32,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32,
    0 > SuperType;
  Sample_MapDataEntry_DoNotUse();
  Sample_MapDataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const Sample_MapDataEntry_DoNotUse& other);
  static const Sample_MapDataEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Sample_MapDataEntry_DoNotUse*>(&_Sample_MapDataEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), s->size(), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "pb.Sample.MapDataEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Sample_2eproto);
    return ::descriptor_table_Sample_2eproto.file_level_metadata[1];
  }

  public:
};

// -------------------------------------------------------------------

class Sample :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.Sample) */ {
 public:
  Sample();
  virtual ~Sample();

  Sample(const Sample& from);
  Sample(Sample&& from) noexcept
    : Sample() {
    *this = ::std::move(from);
  }

  inline Sample& operator=(const Sample& from) {
    CopyFrom(from);
    return *this;
  }
  inline Sample& operator=(Sample&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const Sample& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Sample* internal_default_instance() {
    return reinterpret_cast<const Sample*>(
               &_Sample_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Sample* other);
  friend void swap(Sample& a, Sample& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Sample* New() const final {
    return CreateMaybeMessage<Sample>(nullptr);
  }

  Sample* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Sample>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Sample& from);
  void MergeFrom(const Sample& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Sample* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.Sample";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Sample_2eproto);
    return ::descriptor_table_Sample_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // repeated int32 addr_list = 3;
  int addr_list_size() const;
  void clear_addr_list();
  static const int kAddrListFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::int32 addr_list(int index) const;
  void set_addr_list(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_addr_list(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      addr_list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_addr_list();

  // repeated .pb.pb_color colors = 5;
  int colors_size() const;
  void clear_colors();
  static const int kColorsFieldNumber = 5;
  ::pb::pb_color* mutable_colors(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::pb_color >*
      mutable_colors();
  const ::pb::pb_color& colors(int index) const;
  ::pb::pb_color* add_colors();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::pb_color >&
      colors() const;

  // map<string, int32> map_data = 6;
  int map_data_size() const;
  void clear_map_data();
  static const int kMapDataFieldNumber = 6;
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >&
      map_data() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_map_data();

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // .pb.pb_color color = 4;
  bool has_color() const;
  void clear_color();
  static const int kColorFieldNumber = 4;
  const ::pb::pb_color& color() const;
  ::pb::pb_color* release_color();
  ::pb::pb_color* mutable_color();
  void set_allocated_color(::pb::pb_color* color);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:pb.Sample)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > addr_list_;
  mutable std::atomic<int> _addr_list_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::pb_color > colors_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      Sample_MapDataEntry_DoNotUse,
      std::string, ::PROTOBUF_NAMESPACE_ID::int32,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32,
      0 > map_data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::pb::pb_color* color_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Sample_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// pb_color

// float r = 1;
inline void pb_color::clear_r() {
  r_ = 0;
}
inline float pb_color::r() const {
  // @@protoc_insertion_point(field_get:pb.pb_color.r)
  return r_;
}
inline void pb_color::set_r(float value) {
  
  r_ = value;
  // @@protoc_insertion_point(field_set:pb.pb_color.r)
}

// float g = 2;
inline void pb_color::clear_g() {
  g_ = 0;
}
inline float pb_color::g() const {
  // @@protoc_insertion_point(field_get:pb.pb_color.g)
  return g_;
}
inline void pb_color::set_g(float value) {
  
  g_ = value;
  // @@protoc_insertion_point(field_set:pb.pb_color.g)
}

// float b = 3;
inline void pb_color::clear_b() {
  b_ = 0;
}
inline float pb_color::b() const {
  // @@protoc_insertion_point(field_get:pb.pb_color.b)
  return b_;
}
inline void pb_color::set_b(float value) {
  
  b_ = value;
  // @@protoc_insertion_point(field_set:pb.pb_color.b)
}

// float a = 4;
inline void pb_color::clear_a() {
  a_ = 0;
}
inline float pb_color::a() const {
  // @@protoc_insertion_point(field_get:pb.pb_color.a)
  return a_;
}
inline void pb_color::set_a(float value) {
  
  a_ = value;
  // @@protoc_insertion_point(field_set:pb.pb_color.a)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// Sample

// int32 id = 1;
inline void Sample::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Sample::id() const {
  // @@protoc_insertion_point(field_get:pb.Sample.id)
  return id_;
}
inline void Sample::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:pb.Sample.id)
}

// string name = 2;
inline void Sample::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Sample::name() const {
  // @@protoc_insertion_point(field_get:pb.Sample.name)
  return name_.GetNoArena();
}
inline void Sample::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.Sample.name)
}
inline void Sample::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.Sample.name)
}
inline void Sample::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.Sample.name)
}
inline void Sample::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.Sample.name)
}
inline std::string* Sample::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:pb.Sample.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Sample::release_name() {
  // @@protoc_insertion_point(field_release:pb.Sample.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Sample::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:pb.Sample.name)
}

// repeated int32 addr_list = 3;
inline int Sample::addr_list_size() const {
  return addr_list_.size();
}
inline void Sample::clear_addr_list() {
  addr_list_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Sample::addr_list(int index) const {
  // @@protoc_insertion_point(field_get:pb.Sample.addr_list)
  return addr_list_.Get(index);
}
inline void Sample::set_addr_list(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  addr_list_.Set(index, value);
  // @@protoc_insertion_point(field_set:pb.Sample.addr_list)
}
inline void Sample::add_addr_list(::PROTOBUF_NAMESPACE_ID::int32 value) {
  addr_list_.Add(value);
  // @@protoc_insertion_point(field_add:pb.Sample.addr_list)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Sample::addr_list() const {
  // @@protoc_insertion_point(field_list:pb.Sample.addr_list)
  return addr_list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Sample::mutable_addr_list() {
  // @@protoc_insertion_point(field_mutable_list:pb.Sample.addr_list)
  return &addr_list_;
}

// .pb.pb_color color = 4;
inline bool Sample::has_color() const {
  return this != internal_default_instance() && color_ != nullptr;
}
inline void Sample::clear_color() {
  if (GetArenaNoVirtual() == nullptr && color_ != nullptr) {
    delete color_;
  }
  color_ = nullptr;
}
inline const ::pb::pb_color& Sample::color() const {
  const ::pb::pb_color* p = color_;
  // @@protoc_insertion_point(field_get:pb.Sample.color)
  return p != nullptr ? *p : *reinterpret_cast<const ::pb::pb_color*>(
      &::pb::_pb_color_default_instance_);
}
inline ::pb::pb_color* Sample::release_color() {
  // @@protoc_insertion_point(field_release:pb.Sample.color)
  
  ::pb::pb_color* temp = color_;
  color_ = nullptr;
  return temp;
}
inline ::pb::pb_color* Sample::mutable_color() {
  
  if (color_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::pb_color>(GetArenaNoVirtual());
    color_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pb.Sample.color)
  return color_;
}
inline void Sample::set_allocated_color(::pb::pb_color* color) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete color_;
  }
  if (color) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      color = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, color, submessage_arena);
    }
    
  } else {
    
  }
  color_ = color;
  // @@protoc_insertion_point(field_set_allocated:pb.Sample.color)
}

// repeated .pb.pb_color colors = 5;
inline int Sample::colors_size() const {
  return colors_.size();
}
inline void Sample::clear_colors() {
  colors_.Clear();
}
inline ::pb::pb_color* Sample::mutable_colors(int index) {
  // @@protoc_insertion_point(field_mutable:pb.Sample.colors)
  return colors_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::pb_color >*
Sample::mutable_colors() {
  // @@protoc_insertion_point(field_mutable_list:pb.Sample.colors)
  return &colors_;
}
inline const ::pb::pb_color& Sample::colors(int index) const {
  // @@protoc_insertion_point(field_get:pb.Sample.colors)
  return colors_.Get(index);
}
inline ::pb::pb_color* Sample::add_colors() {
  // @@protoc_insertion_point(field_add:pb.Sample.colors)
  return colors_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::pb_color >&
Sample::colors() const {
  // @@protoc_insertion_point(field_list:pb.Sample.colors)
  return colors_;
}

// map<string, int32> map_data = 6;
inline int Sample::map_data_size() const {
  return map_data_.size();
}
inline void Sample::clear_map_data() {
  map_data_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >&
Sample::map_data() const {
  // @@protoc_insertion_point(field_map:pb.Sample.map_data)
  return map_data_.GetMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >*
Sample::mutable_map_data() {
  // @@protoc_insertion_point(field_mutable_map:pb.Sample.map_data)
  return map_data_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Sample_2eproto
