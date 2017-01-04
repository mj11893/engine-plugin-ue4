// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: funapi/network/fun_message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "funapi/network/fun_message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* FunMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FunMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto() {
  protobuf_AddDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "funapi/network/fun_message.proto");
  GOOGLE_CHECK(file != NULL);
  FunMessage_descriptor_ = file->message_type(0);
  static const int FunMessage_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, sid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, msgtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, ack_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, urgent_),
  };
  FunMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FunMessage_descriptor_,
      FunMessage::default_instance_,
      FunMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, _unknown_fields_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FunMessage, _extensions_),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FunMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FunMessage_descriptor_, &FunMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_funapi_2fnetwork_2ffun_5fmessage_2eproto() {
  delete FunMessage::default_instance_;
  delete FunMessage_reflection_;
}

void protobuf_AddDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n funapi/network/fun_message.proto\"^\n\nFu"
    "nMessage\022\013\n\003sid\030\001 \001(\014\022\017\n\007msgtype\030\002 \001(\t\022\013"
    "\n\003seq\030\003 \001(\r\022\013\n\003ack\030\004 \001(\r\022\016\n\006urgent\030\005 \001(\010"
    "*\010\010\010\020\200\200\200\200\002", 130);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "funapi/network/fun_message.proto", &protobuf_RegisterTypes);
  FunMessage::default_instance_ = new FunMessage();
  FunMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_funapi_2fnetwork_2ffun_5fmessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_funapi_2fnetwork_2ffun_5fmessage_2eproto {
  StaticDescriptorInitializer_funapi_2fnetwork_2ffun_5fmessage_2eproto() {
    protobuf_AddDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto();
  }
} static_descriptor_initializer_funapi_2fnetwork_2ffun_5fmessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int FunMessage::kSidFieldNumber;
const int FunMessage::kMsgtypeFieldNumber;
const int FunMessage::kSeqFieldNumber;
const int FunMessage::kAckFieldNumber;
const int FunMessage::kUrgentFieldNumber;
#endif  // !_MSC_VER

FunMessage::FunMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:FunMessage)
}

void FunMessage::InitAsDefaultInstance() {
}

FunMessage::FunMessage(const FunMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:FunMessage)
}

void FunMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  sid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msgtype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  seq_ = 0u;
  ack_ = 0u;
  urgent_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FunMessage::~FunMessage() {
  // @@protoc_insertion_point(destructor:FunMessage)
  SharedDtor();
}

void FunMessage::SharedDtor() {
  if (sid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sid_;
  }
  if (msgtype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msgtype_;
  }
  if (this != default_instance_) {
  }
}

void FunMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FunMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FunMessage_descriptor_;
}

const FunMessage& FunMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto();
  return *default_instance_;
}

FunMessage* FunMessage::default_instance_ = NULL;

FunMessage* FunMessage::New() const {
  return new FunMessage;
}

void FunMessage::Clear() {
  _extensions_.Clear();
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<FunMessage*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(seq_, urgent_);
    if (has_sid()) {
      if (sid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        sid_->clear();
      }
    }
    if (has_msgtype()) {
      if (msgtype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        msgtype_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FunMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:FunMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes sid = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_sid()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_msgtype;
        break;
      }

      // optional string msgtype = 2;
      case 2: {
        if (tag == 18) {
         parse_msgtype:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msgtype()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->msgtype().data(), this->msgtype().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "msgtype");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_seq;
        break;
      }

      // optional uint32 seq = 3;
      case 3: {
        if (tag == 24) {
         parse_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seq_)));
          set_has_seq();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_ack;
        break;
      }

      // optional uint32 ack = 4;
      case 4: {
        if (tag == 32) {
         parse_ack:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ack_)));
          set_has_ack();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_urgent;
        break;
      }

      // optional bool urgent = 5;
      case 5: {
        if (tag == 40) {
         parse_urgent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &urgent_)));
          set_has_urgent();
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
        if ((64u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:FunMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:FunMessage)
  return false;
#undef DO_
}

void FunMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:FunMessage)
  // optional bytes sid = 1;
  if (has_sid()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->sid(), output);
  }

  // optional string msgtype = 2;
  if (has_msgtype()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msgtype().data(), this->msgtype().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "msgtype");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->msgtype(), output);
  }

  // optional uint32 seq = 3;
  if (has_seq()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->seq(), output);
  }

  // optional uint32 ack = 4;
  if (has_ack()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->ack(), output);
  }

  // optional bool urgent = 5;
  if (has_urgent()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->urgent(), output);
  }

  // Extension range [8, 536870912)
  _extensions_.SerializeWithCachedSizes(
      8, 536870912, output);

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:FunMessage)
}

::google::protobuf::uint8* FunMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:FunMessage)
  // optional bytes sid = 1;
  if (has_sid()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->sid(), target);
  }

  // optional string msgtype = 2;
  if (has_msgtype()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msgtype().data(), this->msgtype().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "msgtype");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msgtype(), target);
  }

  // optional uint32 seq = 3;
  if (has_seq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->seq(), target);
  }

  // optional uint32 ack = 4;
  if (has_ack()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->ack(), target);
  }

  // optional bool urgent = 5;
  if (has_urgent()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->urgent(), target);
  }

  // Extension range [8, 536870912)
  target = _extensions_.SerializeWithCachedSizesToArray(
      8, 536870912, target);

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FunMessage)
  return target;
}

int FunMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bytes sid = 1;
    if (has_sid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->sid());
    }

    // optional string msgtype = 2;
    if (has_msgtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msgtype());
    }

    // optional uint32 seq = 3;
    if (has_seq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->seq());
    }

    // optional uint32 ack = 4;
    if (has_ack()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ack());
    }

    // optional bool urgent = 5;
    if (has_urgent()) {
      total_size += 1 + 1;
    }

  }
  total_size += _extensions_.ByteSize();

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FunMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FunMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FunMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FunMessage::MergeFrom(const FunMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_sid()) {
      set_sid(from.sid());
    }
    if (from.has_msgtype()) {
      set_msgtype(from.msgtype());
    }
    if (from.has_seq()) {
      set_seq(from.seq());
    }
    if (from.has_ack()) {
      set_ack(from.ack());
    }
    if (from.has_urgent()) {
      set_urgent(from.urgent());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FunMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FunMessage::CopyFrom(const FunMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FunMessage::IsInitialized() const {


  if (!_extensions_.IsInitialized()) return false;  return true;
}

void FunMessage::Swap(FunMessage* other) {
  if (other != this) {
    std::swap(sid_, other->sid_);
    std::swap(msgtype_, other->msgtype_);
    std::swap(seq_, other->seq_);
    std::swap(ack_, other->ack_);
    std::swap(urgent_, other->urgent_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
    _extensions_.Swap(&other->_extensions_);
  }
}

::google::protobuf::Metadata FunMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FunMessage_descriptor_;
  metadata.reflection = FunMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)