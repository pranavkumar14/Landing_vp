// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Transform.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Transform.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gz_geometry_msgs {

namespace {

const ::google::protobuf::Descriptor* Transform_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Transform_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Transform_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Transform_2eproto() {
  protobuf_AddDesc_Transform_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Transform.proto");
  GOOGLE_CHECK(file != NULL);
  Transform_descriptor_ = file->message_type(0);
  static const int Transform_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, translation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, rotation_),
  };
  Transform_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Transform_descriptor_,
      Transform::default_instance_,
      Transform_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, _has_bits_[0]),
      -1,
      -1,
      sizeof(Transform),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Transform_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Transform_descriptor_, &Transform::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Transform_2eproto() {
  delete Transform::default_instance_;
  delete Transform_reflection_;
}

void protobuf_AddDesc_Transform_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_Transform_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_quaternion_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017Transform.proto\022\020gz_geometry_msgs\032\016vec"
    "tor3d.proto\032\020quaternion.proto\"b\n\tTransfo"
    "rm\022*\n\013translation\030\001 \002(\0132\025.gazebo.msgs.Ve"
    "ctor3d\022)\n\010rotation\030\002 \002(\0132\027.gazebo.msgs.Q"
    "uaternion", 169);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Transform.proto", &protobuf_RegisterTypes);
  Transform::default_instance_ = new Transform();
  Transform::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Transform_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Transform_2eproto {
  StaticDescriptorInitializer_Transform_2eproto() {
    protobuf_AddDesc_Transform_2eproto();
  }
} static_descriptor_initializer_Transform_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Transform::kTranslationFieldNumber;
const int Transform::kRotationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Transform::Transform()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz_geometry_msgs.Transform)
}

void Transform::InitAsDefaultInstance() {
  translation_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  rotation_ = const_cast< ::gazebo::msgs::Quaternion*>(&::gazebo::msgs::Quaternion::default_instance());
}

Transform::Transform(const Transform& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gz_geometry_msgs.Transform)
}

void Transform::SharedCtor() {
  _cached_size_ = 0;
  translation_ = NULL;
  rotation_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Transform::~Transform() {
  // @@protoc_insertion_point(destructor:gz_geometry_msgs.Transform)
  SharedDtor();
}

void Transform::SharedDtor() {
  if (this != default_instance_) {
    delete translation_;
    delete rotation_;
  }
}

void Transform::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transform::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Transform_descriptor_;
}

const Transform& Transform::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Transform_2eproto();
  return *default_instance_;
}

Transform* Transform::default_instance_ = NULL;

Transform* Transform::New(::google::protobuf::Arena* arena) const {
  Transform* n = new Transform;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Transform::Clear() {
// @@protoc_insertion_point(message_clear_start:gz_geometry_msgs.Transform)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_translation()) {
      if (translation_ != NULL) translation_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_rotation()) {
      if (rotation_ != NULL) rotation_->::gazebo::msgs::Quaternion::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Transform::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz_geometry_msgs.Transform)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Vector3d translation = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_translation()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_rotation;
        break;
      }

      // required .gazebo.msgs.Quaternion rotation = 2;
      case 2: {
        if (tag == 18) {
         parse_rotation:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rotation()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz_geometry_msgs.Transform)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz_geometry_msgs.Transform)
  return false;
#undef DO_
}

void Transform::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz_geometry_msgs.Transform)
  // required .gazebo.msgs.Vector3d translation = 1;
  if (has_translation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->translation_, output);
  }

  // required .gazebo.msgs.Quaternion rotation = 2;
  if (has_rotation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->rotation_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gz_geometry_msgs.Transform)
}

::google::protobuf::uint8* Transform::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gz_geometry_msgs.Transform)
  // required .gazebo.msgs.Vector3d translation = 1;
  if (has_translation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->translation_, false, target);
  }

  // required .gazebo.msgs.Quaternion rotation = 2;
  if (has_rotation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->rotation_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz_geometry_msgs.Transform)
  return target;
}

int Transform::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gz_geometry_msgs.Transform)
  int total_size = 0;

  if (has_translation()) {
    // required .gazebo.msgs.Vector3d translation = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->translation_);
  }

  if (has_rotation()) {
    // required .gazebo.msgs.Quaternion rotation = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rotation_);
  }

  return total_size;
}
int Transform::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:gz_geometry_msgs.Transform)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Vector3d translation = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->translation_);

    // required .gazebo.msgs.Quaternion rotation = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rotation_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Transform::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz_geometry_msgs.Transform)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Transform* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Transform>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz_geometry_msgs.Transform)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz_geometry_msgs.Transform)
    MergeFrom(*source);
  }
}

void Transform::MergeFrom(const Transform& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz_geometry_msgs.Transform)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_translation()) {
      mutable_translation()->::gazebo::msgs::Vector3d::MergeFrom(from.translation());
    }
    if (from.has_rotation()) {
      mutable_rotation()->::gazebo::msgs::Quaternion::MergeFrom(from.rotation());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Transform::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz_geometry_msgs.Transform)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transform::CopyFrom(const Transform& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz_geometry_msgs.Transform)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transform::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_translation()) {
    if (!this->translation_->IsInitialized()) return false;
  }
  if (has_rotation()) {
    if (!this->rotation_->IsInitialized()) return false;
  }
  return true;
}

void Transform::Swap(Transform* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Transform::InternalSwap(Transform* other) {
  std::swap(translation_, other->translation_);
  std::swap(rotation_, other->rotation_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Transform::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Transform_descriptor_;
  metadata.reflection = Transform_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Transform

// required .gazebo.msgs.Vector3d translation = 1;
bool Transform::has_translation() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Transform::set_has_translation() {
  _has_bits_[0] |= 0x00000001u;
}
void Transform::clear_has_translation() {
  _has_bits_[0] &= ~0x00000001u;
}
void Transform::clear_translation() {
  if (translation_ != NULL) translation_->::gazebo::msgs::Vector3d::Clear();
  clear_has_translation();
}
const ::gazebo::msgs::Vector3d& Transform::translation() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Transform.translation)
  return translation_ != NULL ? *translation_ : *default_instance_->translation_;
}
::gazebo::msgs::Vector3d* Transform::mutable_translation() {
  set_has_translation();
  if (translation_ == NULL) {
    translation_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Transform.translation)
  return translation_;
}
::gazebo::msgs::Vector3d* Transform::release_translation() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Transform.translation)
  clear_has_translation();
  ::gazebo::msgs::Vector3d* temp = translation_;
  translation_ = NULL;
  return temp;
}
void Transform::set_allocated_translation(::gazebo::msgs::Vector3d* translation) {
  delete translation_;
  translation_ = translation;
  if (translation) {
    set_has_translation();
  } else {
    clear_has_translation();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Transform.translation)
}

// required .gazebo.msgs.Quaternion rotation = 2;
bool Transform::has_rotation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Transform::set_has_rotation() {
  _has_bits_[0] |= 0x00000002u;
}
void Transform::clear_has_rotation() {
  _has_bits_[0] &= ~0x00000002u;
}
void Transform::clear_rotation() {
  if (rotation_ != NULL) rotation_->::gazebo::msgs::Quaternion::Clear();
  clear_has_rotation();
}
const ::gazebo::msgs::Quaternion& Transform::rotation() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Transform.rotation)
  return rotation_ != NULL ? *rotation_ : *default_instance_->rotation_;
}
::gazebo::msgs::Quaternion* Transform::mutable_rotation() {
  set_has_rotation();
  if (rotation_ == NULL) {
    rotation_ = new ::gazebo::msgs::Quaternion;
  }
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Transform.rotation)
  return rotation_;
}
::gazebo::msgs::Quaternion* Transform::release_rotation() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Transform.rotation)
  clear_has_rotation();
  ::gazebo::msgs::Quaternion* temp = rotation_;
  rotation_ = NULL;
  return temp;
}
void Transform::set_allocated_rotation(::gazebo::msgs::Quaternion* rotation) {
  delete rotation_;
  rotation_ = rotation;
  if (rotation) {
    set_has_rotation();
  } else {
    clear_has_rotation();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Transform.rotation)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_geometry_msgs

// @@protoc_insertion_point(global_scope)