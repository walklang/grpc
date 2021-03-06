// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.proto

#include "client.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace window {
class ResponseMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ResponseMessage> _instance;
} _ResponseMessage_default_instance_;
class MoveMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MoveMessage> _instance;
} _MoveMessage_default_instance_;
}  // namespace window
static void InitDefaultsResponseMessage_client_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::window::_ResponseMessage_default_instance_;
    new (ptr) ::window::ResponseMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::window::ResponseMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ResponseMessage_client_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResponseMessage_client_2eproto}, {}};

static void InitDefaultsMoveMessage_client_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::window::_MoveMessage_default_instance_;
    new (ptr) ::window::MoveMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::window::MoveMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_MoveMessage_client_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMoveMessage_client_2eproto}, {}};

void InitDefaults_client_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ResponseMessage_client_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_MoveMessage_client_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_client_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_client_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_client_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_client_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::window::ResponseMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::window::ResponseMessage, result_),
  PROTOBUF_FIELD_OFFSET(::window::ResponseMessage, success_),
  PROTOBUF_FIELD_OFFSET(::window::ResponseMessage, msg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, hwnd_),
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, left_),
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, top_),
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, width_),
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, height_),
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, repaint_),
  PROTOBUF_FIELD_OFFSET(::window::MoveMessage, msg_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::window::ResponseMessage)},
  { 8, -1, sizeof(::window::MoveMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::window::_ResponseMessage_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::window::_MoveMessage_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_client_2eproto = {
  {}, AddDescriptors_client_2eproto, "client.proto", schemas,
  file_default_instances, TableStruct_client_2eproto::offsets,
  file_level_metadata_client_2eproto, 2, file_level_enum_descriptors_client_2eproto, file_level_service_descriptors_client_2eproto,
};

const char descriptor_table_protodef_client_2eproto[] =
  "\n\014client.proto\022\006window\"\?\n\017ResponseMessag"
  "e\022\016\n\006result\030\001 \001(\005\022\017\n\007success\030\002 \001(\010\022\013\n\003ms"
  "g\030\003 \001(\t\"s\n\013MoveMessage\022\014\n\004hwnd\030\001 \001(\005\022\014\n\004"
  "left\030\002 \001(\005\022\013\n\003top\030\003 \001(\005\022\r\n\005width\030\004 \001(\005\022\016"
  "\n\006height\030\005 \001(\005\022\017\n\007repaint\030\006 \001(\010\022\013\n\003msg\030\007"
  " \001(\t2F\n\006Window\022<\n\nMoveWindow\022\023.window.Mo"
  "veMessage\032\027.window.ResponseMessage\"\000b\006pr"
  "oto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_client_2eproto = {
  false, InitDefaults_client_2eproto, 
  descriptor_table_protodef_client_2eproto,
  "client.proto", &assign_descriptors_table_client_2eproto, 284,
};

void AddDescriptors_client_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_client_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_client_2eproto = []() { AddDescriptors_client_2eproto(); return true; }();
namespace window {

// ===================================================================

void ResponseMessage::InitAsDefaultInstance() {
}
class ResponseMessage::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResponseMessage::kResultFieldNumber;
const int ResponseMessage::kSuccessFieldNumber;
const int ResponseMessage::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResponseMessage::ResponseMessage()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:window.ResponseMessage)
}
ResponseMessage::ResponseMessage(const ResponseMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg().size() > 0) {
    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  ::memcpy(&result_, &from.result_,
    static_cast<size_t>(reinterpret_cast<char*>(&success_) -
    reinterpret_cast<char*>(&result_)) + sizeof(success_));
  // @@protoc_insertion_point(copy_constructor:window.ResponseMessage)
}

void ResponseMessage::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ResponseMessage_client_2eproto.base);
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&result_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&success_) -
      reinterpret_cast<char*>(&result_)) + sizeof(success_));
}

ResponseMessage::~ResponseMessage() {
  // @@protoc_insertion_point(destructor:window.ResponseMessage)
  SharedDtor();
}

void ResponseMessage::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResponseMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResponseMessage& ResponseMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ResponseMessage_client_2eproto.base);
  return *internal_default_instance();
}


void ResponseMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:window.ResponseMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&result_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&success_) -
      reinterpret_cast<char*>(&result_)) + sizeof(success_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ResponseMessage::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ResponseMessage*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 result = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_result(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // bool success = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_success(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // string msg = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("window.ResponseMessage.msg");
        object = msg->mutable_msg();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ResponseMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:window.ResponseMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool success = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg().data(), static_cast<int>(this->msg().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "window.ResponseMessage.msg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:window.ResponseMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:window.ResponseMessage)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ResponseMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:window.ResponseMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  // bool success = 2;
  if (this->success() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->success(), output);
  }

  // string msg = 3;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "window.ResponseMessage.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->msg(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:window.ResponseMessage)
}

::google::protobuf::uint8* ResponseMessage::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:window.ResponseMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  // bool success = 2;
  if (this->success() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->success(), target);
  }

  // string msg = 3;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "window.ResponseMessage.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->msg(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:window.ResponseMessage)
  return target;
}

size_t ResponseMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:window.ResponseMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 3;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  // int32 result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result());
  }

  // bool success = 2;
  if (this->success() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResponseMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:window.ResponseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const ResponseMessage* source =
      ::google::protobuf::DynamicCastToGenerated<ResponseMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:window.ResponseMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:window.ResponseMessage)
    MergeFrom(*source);
  }
}

void ResponseMessage::MergeFrom(const ResponseMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:window.ResponseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.success() != 0) {
    set_success(from.success());
  }
}

void ResponseMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:window.ResponseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResponseMessage::CopyFrom(const ResponseMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:window.ResponseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseMessage::IsInitialized() const {
  return true;
}

void ResponseMessage::Swap(ResponseMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResponseMessage::InternalSwap(ResponseMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  msg_.Swap(&other->msg_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(result_, other->result_);
  swap(success_, other->success_);
}

::google::protobuf::Metadata ResponseMessage::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_client_2eproto);
  return ::file_level_metadata_client_2eproto[kIndexInFileMessages];
}


// ===================================================================

void MoveMessage::InitAsDefaultInstance() {
}
class MoveMessage::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MoveMessage::kHwndFieldNumber;
const int MoveMessage::kLeftFieldNumber;
const int MoveMessage::kTopFieldNumber;
const int MoveMessage::kWidthFieldNumber;
const int MoveMessage::kHeightFieldNumber;
const int MoveMessage::kRepaintFieldNumber;
const int MoveMessage::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MoveMessage::MoveMessage()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:window.MoveMessage)
}
MoveMessage::MoveMessage(const MoveMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg().size() > 0) {
    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  ::memcpy(&hwnd_, &from.hwnd_,
    static_cast<size_t>(reinterpret_cast<char*>(&repaint_) -
    reinterpret_cast<char*>(&hwnd_)) + sizeof(repaint_));
  // @@protoc_insertion_point(copy_constructor:window.MoveMessage)
}

void MoveMessage::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_MoveMessage_client_2eproto.base);
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&hwnd_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&repaint_) -
      reinterpret_cast<char*>(&hwnd_)) + sizeof(repaint_));
}

MoveMessage::~MoveMessage() {
  // @@protoc_insertion_point(destructor:window.MoveMessage)
  SharedDtor();
}

void MoveMessage::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MoveMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MoveMessage& MoveMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_MoveMessage_client_2eproto.base);
  return *internal_default_instance();
}


void MoveMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:window.MoveMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&hwnd_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&repaint_) -
      reinterpret_cast<char*>(&hwnd_)) + sizeof(repaint_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* MoveMessage::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<MoveMessage*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 hwnd = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_hwnd(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 left = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_left(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 top = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_top(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 width = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 32) goto handle_unusual;
        msg->set_width(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 height = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 40) goto handle_unusual;
        msg->set_height(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // bool repaint = 6;
      case 6: {
        if (static_cast<::google::protobuf::uint8>(tag) != 48) goto handle_unusual;
        msg->set_repaint(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // string msg = 7;
      case 7: {
        if (static_cast<::google::protobuf::uint8>(tag) != 58) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("window.MoveMessage.msg");
        object = msg->mutable_msg();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool MoveMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:window.MoveMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 hwnd = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hwnd_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 left = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &left_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 top = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &top_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 width = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (32 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 height = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (40 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool repaint = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (48 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &repaint_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (58 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg().data(), static_cast<int>(this->msg().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "window.MoveMessage.msg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:window.MoveMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:window.MoveMessage)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void MoveMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:window.MoveMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 hwnd = 1;
  if (this->hwnd() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->hwnd(), output);
  }

  // int32 left = 2;
  if (this->left() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->left(), output);
  }

  // int32 top = 3;
  if (this->top() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->top(), output);
  }

  // int32 width = 4;
  if (this->width() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->width(), output);
  }

  // int32 height = 5;
  if (this->height() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->height(), output);
  }

  // bool repaint = 6;
  if (this->repaint() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->repaint(), output);
  }

  // string msg = 7;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "window.MoveMessage.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->msg(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:window.MoveMessage)
}

::google::protobuf::uint8* MoveMessage::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:window.MoveMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 hwnd = 1;
  if (this->hwnd() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->hwnd(), target);
  }

  // int32 left = 2;
  if (this->left() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->left(), target);
  }

  // int32 top = 3;
  if (this->top() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->top(), target);
  }

  // int32 width = 4;
  if (this->width() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->width(), target);
  }

  // int32 height = 5;
  if (this->height() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->height(), target);
  }

  // bool repaint = 6;
  if (this->repaint() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->repaint(), target);
  }

  // string msg = 7;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "window.MoveMessage.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->msg(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:window.MoveMessage)
  return target;
}

size_t MoveMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:window.MoveMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 7;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  // int32 hwnd = 1;
  if (this->hwnd() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->hwnd());
  }

  // int32 left = 2;
  if (this->left() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->left());
  }

  // int32 top = 3;
  if (this->top() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->top());
  }

  // int32 width = 4;
  if (this->width() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->width());
  }

  // int32 height = 5;
  if (this->height() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->height());
  }

  // bool repaint = 6;
  if (this->repaint() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MoveMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:window.MoveMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const MoveMessage* source =
      ::google::protobuf::DynamicCastToGenerated<MoveMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:window.MoveMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:window.MoveMessage)
    MergeFrom(*source);
  }
}

void MoveMessage::MergeFrom(const MoveMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:window.MoveMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  if (from.hwnd() != 0) {
    set_hwnd(from.hwnd());
  }
  if (from.left() != 0) {
    set_left(from.left());
  }
  if (from.top() != 0) {
    set_top(from.top());
  }
  if (from.width() != 0) {
    set_width(from.width());
  }
  if (from.height() != 0) {
    set_height(from.height());
  }
  if (from.repaint() != 0) {
    set_repaint(from.repaint());
  }
}

void MoveMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:window.MoveMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MoveMessage::CopyFrom(const MoveMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:window.MoveMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MoveMessage::IsInitialized() const {
  return true;
}

void MoveMessage::Swap(MoveMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MoveMessage::InternalSwap(MoveMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  msg_.Swap(&other->msg_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(hwnd_, other->hwnd_);
  swap(left_, other->left_);
  swap(top_, other->top_);
  swap(width_, other->width_);
  swap(height_, other->height_);
  swap(repaint_, other->repaint_);
}

::google::protobuf::Metadata MoveMessage::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_client_2eproto);
  return ::file_level_metadata_client_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace window
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::window::ResponseMessage* Arena::CreateMaybeMessage< ::window::ResponseMessage >(Arena* arena) {
  return Arena::CreateInternal< ::window::ResponseMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::window::MoveMessage* Arena::CreateMaybeMessage< ::window::MoveMessage >(Arena* arena) {
  return Arena::CreateInternal< ::window::MoveMessage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
