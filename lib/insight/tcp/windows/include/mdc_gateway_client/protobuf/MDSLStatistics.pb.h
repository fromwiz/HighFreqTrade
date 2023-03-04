// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDSLStatistics.proto

#ifndef PROTOBUF_MDSLStatistics_2eproto__INCLUDED
#define PROTOBUF_MDSLStatistics_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ESecurityIDSource.pb.h"
#include "ESecurityType.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MDSLStatistics_2eproto();
void protobuf_InitDefaults_MDSLStatistics_2eproto();
void protobuf_AssignDesc_MDSLStatistics_2eproto();
void protobuf_ShutdownFile_MDSLStatistics_2eproto();

class MDSLStatistics;

// ===================================================================

class MDSLStatistics : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDSLStatistics) */ {
 public:
  MDSLStatistics();
  virtual ~MDSLStatistics();

  MDSLStatistics(const MDSLStatistics& from);

  inline MDSLStatistics& operator=(const MDSLStatistics& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MDSLStatistics& default_instance();

  static const MDSLStatistics* internal_default_instance();

  void Swap(MDSLStatistics* other);

  // implements Message ----------------------------------------------

  inline MDSLStatistics* New() const { return New(NULL); }

  MDSLStatistics* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MDSLStatistics& from);
  void MergeFrom(const MDSLStatistics& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MDSLStatistics* other);
  void UnsafeMergeFrom(const MDSLStatistics& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string HTSCSecurityID = 1;
  void clear_htscsecurityid();
  static const int kHTSCSecurityIDFieldNumber = 1;
  const ::std::string& htscsecurityid() const;
  void set_htscsecurityid(const ::std::string& value);
  void set_htscsecurityid(const char* value);
  void set_htscsecurityid(const char* value, size_t size);
  ::std::string* mutable_htscsecurityid();
  ::std::string* release_htscsecurityid();
  void set_allocated_htscsecurityid(::std::string* htscsecurityid);

  // optional int32 MDDate = 2;
  void clear_mddate();
  static const int kMDDateFieldNumber = 2;
  ::google::protobuf::int32 mddate() const;
  void set_mddate(::google::protobuf::int32 value);

  // optional int32 MDTime = 3;
  void clear_mdtime();
  static const int kMDTimeFieldNumber = 3;
  ::google::protobuf::int32 mdtime() const;
  void set_mdtime(::google::protobuf::int32 value);

  // optional int64 DataTimestamp = 4;
  void clear_datatimestamp();
  static const int kDataTimestampFieldNumber = 4;
  ::google::protobuf::int64 datatimestamp() const;
  void set_datatimestamp(::google::protobuf::int64 value);

  // optional string TradingPhaseCode = 5;
  void clear_tradingphasecode();
  static const int kTradingPhaseCodeFieldNumber = 5;
  const ::std::string& tradingphasecode() const;
  void set_tradingphasecode(const ::std::string& value);
  void set_tradingphasecode(const char* value);
  void set_tradingphasecode(const char* value, size_t size);
  ::std::string* mutable_tradingphasecode();
  ::std::string* release_tradingphasecode();
  void set_allocated_tradingphasecode(::std::string* tradingphasecode);

  // optional .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 6;
  void clear_securityidsource();
  static const int kSecurityIDSourceFieldNumber = 6;
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);

  // optional .com.htsc.mdc.model.ESecurityType securityType = 7;
  void clear_securitytype();
  static const int kSecurityTypeFieldNumber = 7;
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);

  // optional int64 HtscBorrowTradeVolume = 8;
  void clear_htscborrowtradevolume();
  static const int kHtscBorrowTradeVolumeFieldNumber = 8;
  ::google::protobuf::int64 htscborrowtradevolume() const;
  void set_htscborrowtradevolume(::google::protobuf::int64 value);

  // optional int64 HtscLendTradeVolume = 9;
  void clear_htsclendtradevolume();
  static const int kHtscLendTradeVolumeFieldNumber = 9;
  ::google::protobuf::int64 htsclendtradevolume() const;
  void set_htsclendtradevolume(::google::protobuf::int64 value);

  // optional int64 MarketTradeVolume = 10;
  void clear_markettradevolume();
  static const int kMarketTradeVolumeFieldNumber = 10;
  ::google::protobuf::int64 markettradevolume() const;
  void set_markettradevolume(::google::protobuf::int64 value);

  // optional string TradeDate = 11;
  void clear_tradedate();
  static const int kTradeDateFieldNumber = 11;
  const ::std::string& tradedate() const;
  void set_tradedate(const ::std::string& value);
  void set_tradedate(const char* value);
  void set_tradedate(const char* value, size_t size);
  ::std::string* mutable_tradedate();
  ::std::string* release_tradedate();
  void set_allocated_tradedate(::std::string* tradedate);

  // optional int32 DataMultiplePowerOf10 = 12;
  void clear_datamultiplepowerof10();
  static const int kDataMultiplePowerOf10FieldNumber = 12;
  ::google::protobuf::int32 datamultiplepowerof10() const;
  void set_datamultiplepowerof10(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDSLStatistics)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr htscsecurityid_;
  ::google::protobuf::internal::ArenaStringPtr tradingphasecode_;
  ::google::protobuf::internal::ArenaStringPtr tradedate_;
  ::google::protobuf::int32 mddate_;
  ::google::protobuf::int32 mdtime_;
  ::google::protobuf::int64 datatimestamp_;
  int securityidsource_;
  int securitytype_;
  ::google::protobuf::int64 htscborrowtradevolume_;
  ::google::protobuf::int64 htsclendtradevolume_;
  ::google::protobuf::int64 markettradevolume_;
  ::google::protobuf::int32 datamultiplepowerof10_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_MDSLStatistics_2eproto_impl();
  friend void  protobuf_AddDesc_MDSLStatistics_2eproto_impl();
  friend void protobuf_AssignDesc_MDSLStatistics_2eproto();
  friend void protobuf_ShutdownFile_MDSLStatistics_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<MDSLStatistics> MDSLStatistics_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MDSLStatistics

// optional string HTSCSecurityID = 1;
inline void MDSLStatistics::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDSLStatistics::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
  return htscsecurityid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLStatistics::set_htscsecurityid(const ::std::string& value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
}
inline void MDSLStatistics::set_htscsecurityid(const char* value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
}
inline void MDSLStatistics::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
}
inline ::std::string* MDSLStatistics::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDSLStatistics::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLStatistics::set_allocated_htscsecurityid(::std::string* htscsecurityid) {
  if (htscsecurityid != NULL) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
}

// optional int32 MDDate = 2;
inline void MDSLStatistics::clear_mddate() {
  mddate_ = 0;
}
inline ::google::protobuf::int32 MDSLStatistics::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.MDDate)
  return mddate_;
}
inline void MDSLStatistics::set_mddate(::google::protobuf::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.MDDate)
}

// optional int32 MDTime = 3;
inline void MDSLStatistics::clear_mdtime() {
  mdtime_ = 0;
}
inline ::google::protobuf::int32 MDSLStatistics::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.MDTime)
  return mdtime_;
}
inline void MDSLStatistics::set_mdtime(::google::protobuf::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.MDTime)
}

// optional int64 DataTimestamp = 4;
inline void MDSLStatistics::clear_datatimestamp() {
  datatimestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLStatistics::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.DataTimestamp)
  return datatimestamp_;
}
inline void MDSLStatistics::set_datatimestamp(::google::protobuf::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.DataTimestamp)
}

// optional string TradingPhaseCode = 5;
inline void MDSLStatistics::clear_tradingphasecode() {
  tradingphasecode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDSLStatistics::tradingphasecode() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
  return tradingphasecode_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLStatistics::set_tradingphasecode(const ::std::string& value) {
  
  tradingphasecode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
}
inline void MDSLStatistics::set_tradingphasecode(const char* value) {
  
  tradingphasecode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
}
inline void MDSLStatistics::set_tradingphasecode(const char* value, size_t size) {
  
  tradingphasecode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
}
inline ::std::string* MDSLStatistics::mutable_tradingphasecode() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
  return tradingphasecode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDSLStatistics::release_tradingphasecode() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
  
  return tradingphasecode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLStatistics::set_allocated_tradingphasecode(::std::string* tradingphasecode) {
  if (tradingphasecode != NULL) {
    
  } else {
    
  }
  tradingphasecode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tradingphasecode);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
}

// optional .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 6;
inline void MDSLStatistics::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDSLStatistics::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.securityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void MDSLStatistics::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.securityIDSource)
}

// optional .com.htsc.mdc.model.ESecurityType securityType = 7;
inline void MDSLStatistics::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDSLStatistics::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.securityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void MDSLStatistics::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.securityType)
}

// optional int64 HtscBorrowTradeVolume = 8;
inline void MDSLStatistics::clear_htscborrowtradevolume() {
  htscborrowtradevolume_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLStatistics::htscborrowtradevolume() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.HtscBorrowTradeVolume)
  return htscborrowtradevolume_;
}
inline void MDSLStatistics::set_htscborrowtradevolume(::google::protobuf::int64 value) {
  
  htscborrowtradevolume_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.HtscBorrowTradeVolume)
}

// optional int64 HtscLendTradeVolume = 9;
inline void MDSLStatistics::clear_htsclendtradevolume() {
  htsclendtradevolume_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLStatistics::htsclendtradevolume() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.HtscLendTradeVolume)
  return htsclendtradevolume_;
}
inline void MDSLStatistics::set_htsclendtradevolume(::google::protobuf::int64 value) {
  
  htsclendtradevolume_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.HtscLendTradeVolume)
}

// optional int64 MarketTradeVolume = 10;
inline void MDSLStatistics::clear_markettradevolume() {
  markettradevolume_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLStatistics::markettradevolume() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.MarketTradeVolume)
  return markettradevolume_;
}
inline void MDSLStatistics::set_markettradevolume(::google::protobuf::int64 value) {
  
  markettradevolume_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.MarketTradeVolume)
}

// optional string TradeDate = 11;
inline void MDSLStatistics::clear_tradedate() {
  tradedate_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDSLStatistics::tradedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
  return tradedate_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLStatistics::set_tradedate(const ::std::string& value) {
  
  tradedate_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
}
inline void MDSLStatistics::set_tradedate(const char* value) {
  
  tradedate_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
}
inline void MDSLStatistics::set_tradedate(const char* value, size_t size) {
  
  tradedate_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
}
inline ::std::string* MDSLStatistics::mutable_tradedate() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
  return tradedate_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDSLStatistics::release_tradedate() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
  
  return tradedate_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLStatistics::set_allocated_tradedate(::std::string* tradedate) {
  if (tradedate != NULL) {
    
  } else {
    
  }
  tradedate_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tradedate);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
}

// optional int32 DataMultiplePowerOf10 = 12;
inline void MDSLStatistics::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
inline ::google::protobuf::int32 MDSLStatistics::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
inline void MDSLStatistics::set_datamultiplepowerof10(::google::protobuf::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.DataMultiplePowerOf10)
}

inline const MDSLStatistics* MDSLStatistics::internal_default_instance() {
  return &MDSLStatistics_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MDSLStatistics_2eproto__INCLUDED
