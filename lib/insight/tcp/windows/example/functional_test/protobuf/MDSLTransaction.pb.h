// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDSLTransaction.proto

#ifndef PROTOBUF_MDSLTransaction_2eproto__INCLUDED
#define PROTOBUF_MDSLTransaction_2eproto__INCLUDED

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
void protobuf_AddDesc_MDSLTransaction_2eproto();
void protobuf_InitDefaults_MDSLTransaction_2eproto();
void protobuf_AssignDesc_MDSLTransaction_2eproto();
void protobuf_ShutdownFile_MDSLTransaction_2eproto();

class MDSLTransaction;

// ===================================================================

class MDSLTransaction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDSLTransaction) */ {
 public:
  MDSLTransaction();
  virtual ~MDSLTransaction();

  MDSLTransaction(const MDSLTransaction& from);

  inline MDSLTransaction& operator=(const MDSLTransaction& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MDSLTransaction& default_instance();

  static const MDSLTransaction* internal_default_instance();

  void Swap(MDSLTransaction* other);

  // implements Message ----------------------------------------------

  inline MDSLTransaction* New() const { return New(NULL); }

  MDSLTransaction* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MDSLTransaction& from);
  void MergeFrom(const MDSLTransaction& from);
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
  void InternalSwap(MDSLTransaction* other);
  void UnsafeMergeFrom(const MDSLTransaction& from);
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

  // optional .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  void clear_securityidsource();
  static const int kSecurityIDSourceFieldNumber = 5;
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);

  // optional .com.htsc.mdc.model.ESecurityType securityType = 6;
  void clear_securitytype();
  static const int kSecurityTypeFieldNumber = 6;
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);

  // optional int32 ExchangeDate = 7;
  void clear_exchangedate();
  static const int kExchangeDateFieldNumber = 7;
  ::google::protobuf::int32 exchangedate() const;
  void set_exchangedate(::google::protobuf::int32 value);

  // optional int32 ExchangeTime = 8;
  void clear_exchangetime();
  static const int kExchangeTimeFieldNumber = 8;
  ::google::protobuf::int32 exchangetime() const;
  void set_exchangetime(::google::protobuf::int32 value);

  // optional int64 TradeIndex = 9;
  void clear_tradeindex();
  static const int kTradeIndexFieldNumber = 9;
  ::google::protobuf::int64 tradeindex() const;
  void set_tradeindex(::google::protobuf::int64 value);

  // optional int64 TradeBuyNo = 10;
  void clear_tradebuyno();
  static const int kTradeBuyNoFieldNumber = 10;
  ::google::protobuf::int64 tradebuyno() const;
  void set_tradebuyno(::google::protobuf::int64 value);

  // optional int64 TradeSellNo = 11;
  void clear_tradesellno();
  static const int kTradeSellNoFieldNumber = 11;
  ::google::protobuf::int64 tradesellno() const;
  void set_tradesellno(::google::protobuf::int64 value);

  // optional int32 TradeType = 12;
  void clear_tradetype();
  static const int kTradeTypeFieldNumber = 12;
  ::google::protobuf::int32 tradetype() const;
  void set_tradetype(::google::protobuf::int32 value);

  // optional int32 TradeBSFlag = 13;
  void clear_tradebsflag();
  static const int kTradeBSFlagFieldNumber = 13;
  ::google::protobuf::int32 tradebsflag() const;
  void set_tradebsflag(::google::protobuf::int32 value);

  // optional int64 TradePrice = 14;
  void clear_tradeprice();
  static const int kTradePriceFieldNumber = 14;
  ::google::protobuf::int64 tradeprice() const;
  void set_tradeprice(::google::protobuf::int64 value);

  // optional int64 TradeQty = 15;
  void clear_tradeqty();
  static const int kTradeQtyFieldNumber = 15;
  ::google::protobuf::int64 tradeqty() const;
  void set_tradeqty(::google::protobuf::int64 value);

  // optional int64 TradeMoney = 16;
  void clear_trademoney();
  static const int kTradeMoneyFieldNumber = 16;
  ::google::protobuf::int64 trademoney() const;
  void set_trademoney(::google::protobuf::int64 value);

  // optional int64 NumTrades = 17;
  void clear_numtrades();
  static const int kNumTradesFieldNumber = 17;
  ::google::protobuf::int64 numtrades() const;
  void set_numtrades(::google::protobuf::int64 value);

  // optional int32 TradeTerm = 18;
  void clear_tradeterm();
  static const int kTradeTermFieldNumber = 18;
  ::google::protobuf::int32 tradeterm() const;
  void set_tradeterm(::google::protobuf::int32 value);

  // optional string TradeNum = 19;
  void clear_tradenum();
  static const int kTradeNumFieldNumber = 19;
  const ::std::string& tradenum() const;
  void set_tradenum(const ::std::string& value);
  void set_tradenum(const char* value);
  void set_tradenum(const char* value, size_t size);
  ::std::string* mutable_tradenum();
  ::std::string* release_tradenum();
  void set_allocated_tradenum(::std::string* tradenum);

  // optional int32 DataMultiplePowerOf10 = 20;
  void clear_datamultiplepowerof10();
  static const int kDataMultiplePowerOf10FieldNumber = 20;
  ::google::protobuf::int32 datamultiplepowerof10() const;
  void set_datamultiplepowerof10(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDSLTransaction)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr htscsecurityid_;
  ::google::protobuf::internal::ArenaStringPtr tradenum_;
  ::google::protobuf::int32 mddate_;
  ::google::protobuf::int32 mdtime_;
  ::google::protobuf::int64 datatimestamp_;
  int securityidsource_;
  int securitytype_;
  ::google::protobuf::int32 exchangedate_;
  ::google::protobuf::int32 exchangetime_;
  ::google::protobuf::int64 tradeindex_;
  ::google::protobuf::int64 tradebuyno_;
  ::google::protobuf::int64 tradesellno_;
  ::google::protobuf::int32 tradetype_;
  ::google::protobuf::int32 tradebsflag_;
  ::google::protobuf::int64 tradeprice_;
  ::google::protobuf::int64 tradeqty_;
  ::google::protobuf::int64 trademoney_;
  ::google::protobuf::int64 numtrades_;
  ::google::protobuf::int32 tradeterm_;
  ::google::protobuf::int32 datamultiplepowerof10_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_MDSLTransaction_2eproto_impl();
  friend void  protobuf_AddDesc_MDSLTransaction_2eproto_impl();
  friend void protobuf_AssignDesc_MDSLTransaction_2eproto();
  friend void protobuf_ShutdownFile_MDSLTransaction_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<MDSLTransaction> MDSLTransaction_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MDSLTransaction

// optional string HTSCSecurityID = 1;
inline void MDSLTransaction::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDSLTransaction::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
  return htscsecurityid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLTransaction::set_htscsecurityid(const ::std::string& value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
}
inline void MDSLTransaction::set_htscsecurityid(const char* value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
}
inline void MDSLTransaction::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
}
inline ::std::string* MDSLTransaction::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDSLTransaction::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLTransaction::set_allocated_htscsecurityid(::std::string* htscsecurityid) {
  if (htscsecurityid != NULL) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
}

// optional int32 MDDate = 2;
inline void MDSLTransaction::clear_mddate() {
  mddate_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.MDDate)
  return mddate_;
}
inline void MDSLTransaction::set_mddate(::google::protobuf::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.MDDate)
}

// optional int32 MDTime = 3;
inline void MDSLTransaction::clear_mdtime() {
  mdtime_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.MDTime)
  return mdtime_;
}
inline void MDSLTransaction::set_mdtime(::google::protobuf::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.MDTime)
}

// optional int64 DataTimestamp = 4;
inline void MDSLTransaction::clear_datatimestamp() {
  datatimestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.DataTimestamp)
  return datatimestamp_;
}
inline void MDSLTransaction::set_datatimestamp(::google::protobuf::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.DataTimestamp)
}

// optional .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void MDSLTransaction::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDSLTransaction::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.securityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void MDSLTransaction::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.securityIDSource)
}

// optional .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void MDSLTransaction::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDSLTransaction::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.securityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void MDSLTransaction::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.securityType)
}

// optional int32 ExchangeDate = 7;
inline void MDSLTransaction::clear_exchangedate() {
  exchangedate_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeDate)
  return exchangedate_;
}
inline void MDSLTransaction::set_exchangedate(::google::protobuf::int32 value) {
  
  exchangedate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeDate)
}

// optional int32 ExchangeTime = 8;
inline void MDSLTransaction::clear_exchangetime() {
  exchangetime_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeTime)
  return exchangetime_;
}
inline void MDSLTransaction::set_exchangetime(::google::protobuf::int32 value) {
  
  exchangetime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeTime)
}

// optional int64 TradeIndex = 9;
inline void MDSLTransaction::clear_tradeindex() {
  tradeindex_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::tradeindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeIndex)
  return tradeindex_;
}
inline void MDSLTransaction::set_tradeindex(::google::protobuf::int64 value) {
  
  tradeindex_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeIndex)
}

// optional int64 TradeBuyNo = 10;
inline void MDSLTransaction::clear_tradebuyno() {
  tradebuyno_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::tradebuyno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeBuyNo)
  return tradebuyno_;
}
inline void MDSLTransaction::set_tradebuyno(::google::protobuf::int64 value) {
  
  tradebuyno_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeBuyNo)
}

// optional int64 TradeSellNo = 11;
inline void MDSLTransaction::clear_tradesellno() {
  tradesellno_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::tradesellno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeSellNo)
  return tradesellno_;
}
inline void MDSLTransaction::set_tradesellno(::google::protobuf::int64 value) {
  
  tradesellno_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeSellNo)
}

// optional int32 TradeType = 12;
inline void MDSLTransaction::clear_tradetype() {
  tradetype_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::tradetype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeType)
  return tradetype_;
}
inline void MDSLTransaction::set_tradetype(::google::protobuf::int32 value) {
  
  tradetype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeType)
}

// optional int32 TradeBSFlag = 13;
inline void MDSLTransaction::clear_tradebsflag() {
  tradebsflag_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::tradebsflag() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeBSFlag)
  return tradebsflag_;
}
inline void MDSLTransaction::set_tradebsflag(::google::protobuf::int32 value) {
  
  tradebsflag_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeBSFlag)
}

// optional int64 TradePrice = 14;
inline void MDSLTransaction::clear_tradeprice() {
  tradeprice_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::tradeprice() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradePrice)
  return tradeprice_;
}
inline void MDSLTransaction::set_tradeprice(::google::protobuf::int64 value) {
  
  tradeprice_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradePrice)
}

// optional int64 TradeQty = 15;
inline void MDSLTransaction::clear_tradeqty() {
  tradeqty_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::tradeqty() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeQty)
  return tradeqty_;
}
inline void MDSLTransaction::set_tradeqty(::google::protobuf::int64 value) {
  
  tradeqty_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeQty)
}

// optional int64 TradeMoney = 16;
inline void MDSLTransaction::clear_trademoney() {
  trademoney_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::trademoney() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeMoney)
  return trademoney_;
}
inline void MDSLTransaction::set_trademoney(::google::protobuf::int64 value) {
  
  trademoney_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeMoney)
}

// optional int64 NumTrades = 17;
inline void MDSLTransaction::clear_numtrades() {
  numtrades_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDSLTransaction::numtrades() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.NumTrades)
  return numtrades_;
}
inline void MDSLTransaction::set_numtrades(::google::protobuf::int64 value) {
  
  numtrades_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.NumTrades)
}

// optional int32 TradeTerm = 18;
inline void MDSLTransaction::clear_tradeterm() {
  tradeterm_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::tradeterm() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeTerm)
  return tradeterm_;
}
inline void MDSLTransaction::set_tradeterm(::google::protobuf::int32 value) {
  
  tradeterm_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeTerm)
}

// optional string TradeNum = 19;
inline void MDSLTransaction::clear_tradenum() {
  tradenum_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDSLTransaction::tradenum() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
  return tradenum_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLTransaction::set_tradenum(const ::std::string& value) {
  
  tradenum_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
}
inline void MDSLTransaction::set_tradenum(const char* value) {
  
  tradenum_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
}
inline void MDSLTransaction::set_tradenum(const char* value, size_t size) {
  
  tradenum_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
}
inline ::std::string* MDSLTransaction::mutable_tradenum() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
  return tradenum_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDSLTransaction::release_tradenum() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
  
  return tradenum_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDSLTransaction::set_allocated_tradenum(::std::string* tradenum) {
  if (tradenum != NULL) {
    
  } else {
    
  }
  tradenum_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tradenum);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
}

// optional int32 DataMultiplePowerOf10 = 20;
inline void MDSLTransaction::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
inline ::google::protobuf::int32 MDSLTransaction::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
inline void MDSLTransaction::set_datamultiplepowerof10(::google::protobuf::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.DataMultiplePowerOf10)
}

inline const MDSLTransaction* MDSLTransaction::internal_default_instance() {
  return &MDSLTransaction_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MDSLTransaction_2eproto__INCLUDED