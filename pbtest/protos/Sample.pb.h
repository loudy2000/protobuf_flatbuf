// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Sample.proto

#ifndef PROTOBUF_Sample_2eproto__INCLUDED
#define PROTOBUF_Sample_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Sample {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Sample_2eproto();
void protobuf_AssignDesc_Sample_2eproto();
void protobuf_ShutdownFile_Sample_2eproto();

class Sample;

// ===================================================================

class Sample : public ::google::protobuf::Message {
 public:
  Sample();
  virtual ~Sample();

  Sample(const Sample& from);

  inline Sample& operator=(const Sample& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Sample& default_instance();

  void Swap(Sample* other);

  // implements Message ----------------------------------------------

  Sample* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sample& from);
  void MergeFrom(const Sample& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required int32 ip = 3;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 3;
  inline ::google::protobuf::int32 ip() const;
  inline void set_ip(::google::protobuf::int32 value);

  // repeated int32 addr_list = 4;
  inline int addr_list_size() const;
  inline void clear_addr_list();
  static const int kAddrListFieldNumber = 4;
  inline ::google::protobuf::int32 addr_list(int index) const;
  inline void set_addr_list(int index, ::google::protobuf::int32 value);
  inline void add_addr_list(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      addr_list() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_addr_list();

  // @@protoc_insertion_point(class_scope:Sample.Sample)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_ip();
  inline void clear_has_ip();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 ip_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > addr_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_Sample_2eproto();
  friend void protobuf_AssignDesc_Sample_2eproto();
  friend void protobuf_ShutdownFile_Sample_2eproto();

  void InitAsDefaultInstance();
  static Sample* default_instance_;
};
// ===================================================================


// ===================================================================

// Sample

// required int32 id = 1;
inline bool Sample::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Sample::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Sample::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Sample::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Sample::id() const {
  return id_;
}
inline void Sample::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required string name = 2;
inline bool Sample::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Sample::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Sample::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Sample::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Sample::name() const {
  return *name_;
}
inline void Sample::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Sample::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Sample::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Sample::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Sample::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Sample::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 ip = 3;
inline bool Sample::has_ip() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Sample::set_has_ip() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Sample::clear_has_ip() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Sample::clear_ip() {
  ip_ = 0;
  clear_has_ip();
}
inline ::google::protobuf::int32 Sample::ip() const {
  return ip_;
}
inline void Sample::set_ip(::google::protobuf::int32 value) {
  set_has_ip();
  ip_ = value;
}

// repeated int32 addr_list = 4;
inline int Sample::addr_list_size() const {
  return addr_list_.size();
}
inline void Sample::clear_addr_list() {
  addr_list_.Clear();
}
inline ::google::protobuf::int32 Sample::addr_list(int index) const {
  return addr_list_.Get(index);
}
inline void Sample::set_addr_list(int index, ::google::protobuf::int32 value) {
  addr_list_.Set(index, value);
}
inline void Sample::add_addr_list(::google::protobuf::int32 value) {
  addr_list_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Sample::addr_list() const {
  return addr_list_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Sample::mutable_addr_list() {
  return &addr_list_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Sample

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Sample_2eproto__INCLUDED
