// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/pkg/util/hlc/timestamp.proto

#ifndef PROTOBUF_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto__INCLUDED
#define PROTOBUF_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace cockroach {
namespace util {
namespace hlc {
class Timestamp;
class TimestampDefaultTypeInternal;
extern TimestampDefaultTypeInternal _Timestamp_default_instance_;
}  // namespace hlc
}  // namespace util
}  // namespace cockroach

namespace cockroach {
namespace util {
namespace hlc {

namespace protobuf_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto

// ===================================================================

class Timestamp : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:cockroach.util.hlc.Timestamp) */ {
 public:
  Timestamp();
  virtual ~Timestamp();

  Timestamp(const Timestamp& from);

  inline Timestamp& operator=(const Timestamp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Timestamp(Timestamp&& from) noexcept
    : Timestamp() {
    *this = ::std::move(from);
  }

  inline Timestamp& operator=(Timestamp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Timestamp& default_instance();

  static inline const Timestamp* internal_default_instance() {
    return reinterpret_cast<const Timestamp*>(
               &_Timestamp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Timestamp* other);
  friend void swap(Timestamp& a, Timestamp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Timestamp* New() const PROTOBUF_FINAL { return New(NULL); }

  Timestamp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Timestamp& from);
  void MergeFrom(const Timestamp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Timestamp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 wall_time = 1;
  void clear_wall_time();
  static const int kWallTimeFieldNumber = 1;
  ::google::protobuf::int64 wall_time() const;
  void set_wall_time(::google::protobuf::int64 value);

  // int32 logical = 2;
  void clear_logical();
  static const int kLogicalFieldNumber = 2;
  ::google::protobuf::int32 logical() const;
  void set_logical(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cockroach.util.hlc.Timestamp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::int64 wall_time_;
  ::google::protobuf::int32 logical_;
  mutable int _cached_size_;
  friend struct protobuf_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Timestamp

// int64 wall_time = 1;
inline void Timestamp::clear_wall_time() {
  wall_time_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Timestamp::wall_time() const {
  // @@protoc_insertion_point(field_get:cockroach.util.hlc.Timestamp.wall_time)
  return wall_time_;
}
inline void Timestamp::set_wall_time(::google::protobuf::int64 value) {
  
  wall_time_ = value;
  // @@protoc_insertion_point(field_set:cockroach.util.hlc.Timestamp.wall_time)
}

// int32 logical = 2;
inline void Timestamp::clear_logical() {
  logical_ = 0;
}
inline ::google::protobuf::int32 Timestamp::logical() const {
  // @@protoc_insertion_point(field_get:cockroach.util.hlc.Timestamp.logical)
  return logical_;
}
inline void Timestamp::set_logical(::google::protobuf::int32 value) {
  
  logical_ = value;
  // @@protoc_insertion_point(field_set:cockroach.util.hlc.Timestamp.logical)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace hlc
}  // namespace util
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto__INCLUDED
