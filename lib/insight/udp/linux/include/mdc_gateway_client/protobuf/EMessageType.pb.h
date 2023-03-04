// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EMessageType.proto

#ifndef PROTOBUF_EMessageType_2eproto__INCLUDED
#define PROTOBUF_EMessageType_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_EMessageType_2eproto();
void protobuf_InitDefaults_EMessageType_2eproto();
void protobuf_AssignDesc_EMessageType_2eproto();
void protobuf_ShutdownFile_EMessageType_2eproto();


enum EMessageType {
  UNKNOWN_MESSAGE_TYPE = 0,
  HEARTBEAT_REQUEST = 1,
  HEARTBEAT_RESPONSE = 2,
  GENERAL_ERROR_MESSAGE = 10,
  LOGIN_REQUEST = 11,
  LOGIN_RESPONSE = 12,
  SERVICE_DISCOVERY_REQUEST = 13,
  SERVICE_DISCOVERY_RESPONSE = 14,
  MD_SUBSCRIBE_REQUEST = 15,
  MD_SUBSCRIBE_RESPONSE = 16,
  PUSH_MARKET_DATA = 17,
  MD_QUERY_REQUEST = 18,
  MD_QUERY_RESPONSE = 19,
  PLAYBACK_REQUEST = 20,
  PLAYBACK_RESPONSE = 21,
  PLAYBACK_CONTROL_REQUEST = 22,
  PLAYBACK_CONTROL_RESPONSE = 23,
  PLAYBACK_STATUS_REQUEST = 24,
  PLAYBACK_STATUS = 25,
  PLAYBACK_PAYLOAD = 26,
  PUSH_MARKET_DATA_STREAM = 27,
  EMessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EMessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EMessageType_IsValid(int value);
const EMessageType EMessageType_MIN = UNKNOWN_MESSAGE_TYPE;
const EMessageType EMessageType_MAX = PUSH_MARKET_DATA_STREAM;
const int EMessageType_ARRAYSIZE = EMessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EMessageType_descriptor();
inline const ::std::string& EMessageType_Name(EMessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EMessageType_descriptor(), value);
}
inline bool EMessageType_Parse(
    const ::std::string& name, EMessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EMessageType>(
    EMessageType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::com::htsc::mdc::insight::model::EMessageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::htsc::mdc::insight::model::EMessageType>() {
  return ::com::htsc::mdc::insight::model::EMessageType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_EMessageType_2eproto__INCLUDED