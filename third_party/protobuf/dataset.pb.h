// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dataset.proto

#ifndef PROTOBUF_INCLUDED_dataset_2eproto
#define PROTOBUF_INCLUDED_dataset_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_dataset_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_dataset_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_dataset_2eproto();
namespace protoDataset {
class Dataset;
class DatasetDefaultTypeInternal;
extern DatasetDefaultTypeInternal _Dataset_default_instance_;
}  // namespace protoDataset
namespace google {
namespace protobuf {
template<> ::protoDataset::Dataset* Arena::CreateMaybeMessage<::protoDataset::Dataset>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protoDataset {

// ===================================================================

class Dataset final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protoDataset.Dataset) */ {
 public:
  Dataset();
  virtual ~Dataset();

  Dataset(const Dataset& from);

  inline Dataset& operator=(const Dataset& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Dataset(Dataset&& from) noexcept
    : Dataset() {
    *this = ::std::move(from);
  }

  inline Dataset& operator=(Dataset&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Dataset& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Dataset* internal_default_instance() {
    return reinterpret_cast<const Dataset*>(
               &_Dataset_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Dataset* other);
  friend void swap(Dataset& a, Dataset& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Dataset* New() const final {
    return CreateMaybeMessage<Dataset>(nullptr);
  }

  Dataset* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Dataset>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Dataset& from);
  void MergeFrom(const Dataset& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Dataset* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float data = 3 [packed = true];
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 3;
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::google::protobuf::RepeatedField< float >&
      data() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_data();

  // repeated int32 labels = 4;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 4;
  ::google::protobuf::int32 labels(int index) const;
  void set_labels(int index, ::google::protobuf::int32 value);
  void add_labels(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      labels() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_labels();

  // uint32 numRows = 1;
  void clear_numrows();
  static const int kNumRowsFieldNumber = 1;
  ::google::protobuf::uint32 numrows() const;
  void set_numrows(::google::protobuf::uint32 value);

  // uint32 numCols = 2;
  void clear_numcols();
  static const int kNumColsFieldNumber = 2;
  ::google::protobuf::uint32 numcols() const;
  void set_numcols(::google::protobuf::uint32 value);

  // uint32 numLabels = 5;
  void clear_numlabels();
  static const int kNumLabelsFieldNumber = 5;
  ::google::protobuf::uint32 numlabels() const;
  void set_numlabels(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:protoDataset.Dataset)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< float > data_;
  mutable std::atomic<int> _data_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > labels_;
  mutable std::atomic<int> _labels_cached_byte_size_;
  ::google::protobuf::uint32 numrows_;
  ::google::protobuf::uint32 numcols_;
  ::google::protobuf::uint32 numlabels_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dataset_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Dataset

// uint32 numRows = 1;
inline void Dataset::clear_numrows() {
  numrows_ = 0u;
}
inline ::google::protobuf::uint32 Dataset::numrows() const {
  // @@protoc_insertion_point(field_get:protoDataset.Dataset.numRows)
  return numrows_;
}
inline void Dataset::set_numrows(::google::protobuf::uint32 value) {
  
  numrows_ = value;
  // @@protoc_insertion_point(field_set:protoDataset.Dataset.numRows)
}

// uint32 numCols = 2;
inline void Dataset::clear_numcols() {
  numcols_ = 0u;
}
inline ::google::protobuf::uint32 Dataset::numcols() const {
  // @@protoc_insertion_point(field_get:protoDataset.Dataset.numCols)
  return numcols_;
}
inline void Dataset::set_numcols(::google::protobuf::uint32 value) {
  
  numcols_ = value;
  // @@protoc_insertion_point(field_set:protoDataset.Dataset.numCols)
}

// repeated float data = 3 [packed = true];
inline int Dataset::data_size() const {
  return data_.size();
}
inline void Dataset::clear_data() {
  data_.Clear();
}
inline float Dataset::data(int index) const {
  // @@protoc_insertion_point(field_get:protoDataset.Dataset.data)
  return data_.Get(index);
}
inline void Dataset::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:protoDataset.Dataset.data)
}
inline void Dataset::add_data(float value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:protoDataset.Dataset.data)
}
inline const ::google::protobuf::RepeatedField< float >&
Dataset::data() const {
  // @@protoc_insertion_point(field_list:protoDataset.Dataset.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< float >*
Dataset::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:protoDataset.Dataset.data)
  return &data_;
}

// repeated int32 labels = 4;
inline int Dataset::labels_size() const {
  return labels_.size();
}
inline void Dataset::clear_labels() {
  labels_.Clear();
}
inline ::google::protobuf::int32 Dataset::labels(int index) const {
  // @@protoc_insertion_point(field_get:protoDataset.Dataset.labels)
  return labels_.Get(index);
}
inline void Dataset::set_labels(int index, ::google::protobuf::int32 value) {
  labels_.Set(index, value);
  // @@protoc_insertion_point(field_set:protoDataset.Dataset.labels)
}
inline void Dataset::add_labels(::google::protobuf::int32 value) {
  labels_.Add(value);
  // @@protoc_insertion_point(field_add:protoDataset.Dataset.labels)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Dataset::labels() const {
  // @@protoc_insertion_point(field_list:protoDataset.Dataset.labels)
  return labels_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Dataset::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:protoDataset.Dataset.labels)
  return &labels_;
}

// uint32 numLabels = 5;
inline void Dataset::clear_numlabels() {
  numlabels_ = 0u;
}
inline ::google::protobuf::uint32 Dataset::numlabels() const {
  // @@protoc_insertion_point(field_get:protoDataset.Dataset.numLabels)
  return numlabels_;
}
inline void Dataset::set_numlabels(::google::protobuf::uint32 value) {
  
  numlabels_ = value;
  // @@protoc_insertion_point(field_set:protoDataset.Dataset.numLabels)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protoDataset

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_dataset_2eproto