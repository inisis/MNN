// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_VKCACHE_VKCACHE_H_
#define FLATBUFFERS_GENERATED_VKCACHE_VKCACHE_H_

#include "flatbuffers/flatbuffers.h"

namespace VKCache {

struct WorkSize;
struct WorkSizeT;

struct TuneInfo;
struct TuneInfoT;

struct TuneInfoCache;
struct TuneInfoCacheT;

inline const flatbuffers::TypeTable *WorkSizeTypeTable();

inline const flatbuffers::TypeTable *TuneInfoTypeTable();

inline const flatbuffers::TypeTable *TuneInfoCacheTypeTable();

struct WorkSizeT : public flatbuffers::NativeTable {
  typedef WorkSize TableType;
  uint32_t x;
  uint32_t y;
  uint32_t z;
  WorkSizeT()
      : x(0),
        y(0),
        z(0) {
  }
};

struct WorkSize FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef WorkSizeT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return WorkSizeTypeTable();
  }
  uint32_t x() const {
    return GetField<uint32_t>(4, 0);
  }
  uint32_t y() const {
    return GetField<uint32_t>(6, 0);
  }
  uint32_t z() const {
    return GetField<uint32_t>(8, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, 4) &&
           VerifyField<uint32_t>(verifier, 6) &&
           VerifyField<uint32_t>(verifier, 8) &&
           verifier.EndTable();
  }
  WorkSizeT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(WorkSizeT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<WorkSize> Pack(flatbuffers::FlatBufferBuilder &_fbb, const WorkSizeT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct WorkSizeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_x(uint32_t x) {
    fbb_.AddElement<uint32_t>(4, x, 0);
  }
  void add_y(uint32_t y) {
    fbb_.AddElement<uint32_t>(6, y, 0);
  }
  void add_z(uint32_t z) {
    fbb_.AddElement<uint32_t>(8, z, 0);
  }
  explicit WorkSizeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  WorkSizeBuilder &operator=(const WorkSizeBuilder &);
  flatbuffers::Offset<WorkSize> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<WorkSize>(end);
    return o;
  }
};

inline flatbuffers::Offset<WorkSize> CreateWorkSize(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t x = 0,
    uint32_t y = 0,
    uint32_t z = 0) {
  WorkSizeBuilder builder_(_fbb);
  builder_.add_z(z);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

flatbuffers::Offset<WorkSize> CreateWorkSize(flatbuffers::FlatBufferBuilder &_fbb, const WorkSizeT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TuneInfoT : public flatbuffers::NativeTable {
  typedef TuneInfo TableType;
  std::string shaderName;
  std::unique_ptr<WorkSizeT> gws;
  std::unique_ptr<WorkSizeT> optimalLws;
  float optimalCost;
  TuneInfoT()
      : optimalCost(0.0f) {
  }
};

struct TuneInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TuneInfoT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return TuneInfoTypeTable();
  }
  const flatbuffers::String *shaderName() const {
    return GetPointer<const flatbuffers::String *>(4);
  }
  const WorkSize *gws() const {
    return GetPointer<const WorkSize *>(6);
  }
  const WorkSize *optimalLws() const {
    return GetPointer<const WorkSize *>(8);
  }
  float optimalCost() const {
    return GetField<float>(10, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, 4) &&
           verifier.VerifyString(shaderName()) &&
           VerifyOffset(verifier, 6) &&
           verifier.VerifyTable(gws()) &&
           VerifyOffset(verifier, 8) &&
           verifier.VerifyTable(optimalLws()) &&
           VerifyField<float>(verifier, 10) &&
           verifier.EndTable();
  }
  TuneInfoT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TuneInfoT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<TuneInfo> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TuneInfoBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_shaderName(flatbuffers::Offset<flatbuffers::String> shaderName) {
    fbb_.AddOffset(4, shaderName);
  }
  void add_gws(flatbuffers::Offset<WorkSize> gws) {
    fbb_.AddOffset(6, gws);
  }
  void add_optimalLws(flatbuffers::Offset<WorkSize> optimalLws) {
    fbb_.AddOffset(8, optimalLws);
  }
  void add_optimalCost(float optimalCost) {
    fbb_.AddElement<float>(10, optimalCost, 0.0f);
  }
  explicit TuneInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TuneInfoBuilder &operator=(const TuneInfoBuilder &);
  flatbuffers::Offset<TuneInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TuneInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<TuneInfo> CreateTuneInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> shaderName = 0,
    flatbuffers::Offset<WorkSize> gws = 0,
    flatbuffers::Offset<WorkSize> optimalLws = 0,
    float optimalCost = 0.0f) {
  TuneInfoBuilder builder_(_fbb);
  builder_.add_optimalCost(optimalCost);
  builder_.add_optimalLws(optimalLws);
  builder_.add_gws(gws);
  builder_.add_shaderName(shaderName);
  return builder_.Finish();
}

flatbuffers::Offset<TuneInfo> CreateTuneInfo(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TuneInfoCacheT : public flatbuffers::NativeTable {
  typedef TuneInfoCache TableType;
  std::vector<std::unique_ptr<TuneInfoT>> TuneInfos;
  TuneInfoCacheT() {
  }
};

struct TuneInfoCache FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TuneInfoCacheT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return TuneInfoCacheTypeTable();
  }
  const flatbuffers::Vector<flatbuffers::Offset<TuneInfo>> *TuneInfos() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TuneInfo>> *>(4);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, 4) &&
           verifier.VerifyVector(TuneInfos()) &&
           verifier.VerifyVectorOfTables(TuneInfos()) &&
           verifier.EndTable();
  }
  TuneInfoCacheT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TuneInfoCacheT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<TuneInfoCache> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoCacheT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TuneInfoCacheBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_TuneInfos(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TuneInfo>>> TuneInfos) {
    fbb_.AddOffset(4, TuneInfos);
  }
  explicit TuneInfoCacheBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TuneInfoCacheBuilder &operator=(const TuneInfoCacheBuilder &);
  flatbuffers::Offset<TuneInfoCache> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TuneInfoCache>(end);
    return o;
  }
};

inline flatbuffers::Offset<TuneInfoCache> CreateTuneInfoCache(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TuneInfo>>> TuneInfos = 0) {
  TuneInfoCacheBuilder builder_(_fbb);
  builder_.add_TuneInfos(TuneInfos);
  return builder_.Finish();
}

flatbuffers::Offset<TuneInfoCache> CreateTuneInfoCache(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoCacheT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline WorkSizeT *WorkSize::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new WorkSizeT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void WorkSize::UnPackTo(WorkSizeT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = x(); _o->x = _e; };
  { auto _e = y(); _o->y = _e; };
  { auto _e = z(); _o->z = _e; };
}

inline flatbuffers::Offset<WorkSize> WorkSize::Pack(flatbuffers::FlatBufferBuilder &_fbb, const WorkSizeT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateWorkSize(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<WorkSize> CreateWorkSize(flatbuffers::FlatBufferBuilder &_fbb, const WorkSizeT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const WorkSizeT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _x = _o->x;
  auto _y = _o->y;
  auto _z = _o->z;
  return VKCache::CreateWorkSize(
      _fbb,
      _x,
      _y,
      _z);
}

inline TuneInfoT *TuneInfo::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new TuneInfoT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void TuneInfo::UnPackTo(TuneInfoT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = shaderName(); if (_e) _o->shaderName = _e->str(); };
  { auto _e = gws(); if (_e) _o->gws = std::unique_ptr<WorkSizeT>(_e->UnPack(_resolver)); };
  { auto _e = optimalLws(); if (_e) _o->optimalLws = std::unique_ptr<WorkSizeT>(_e->UnPack(_resolver)); };
  { auto _e = optimalCost(); _o->optimalCost = _e; };
}

inline flatbuffers::Offset<TuneInfo> TuneInfo::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTuneInfo(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TuneInfo> CreateTuneInfo(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TuneInfoT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _shaderName = _o->shaderName.empty() ? 0 : _fbb.CreateString(_o->shaderName);
  auto _gws = _o->gws ? CreateWorkSize(_fbb, _o->gws.get(), _rehasher) : 0;
  auto _optimalLws = _o->optimalLws ? CreateWorkSize(_fbb, _o->optimalLws.get(), _rehasher) : 0;
  auto _optimalCost = _o->optimalCost;
  return VKCache::CreateTuneInfo(
      _fbb,
      _shaderName,
      _gws,
      _optimalLws,
      _optimalCost);
}

inline TuneInfoCacheT *TuneInfoCache::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new TuneInfoCacheT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void TuneInfoCache::UnPackTo(TuneInfoCacheT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = TuneInfos(); if (_e) { _o->TuneInfos.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->TuneInfos[_i] = std::unique_ptr<TuneInfoT>(_e->Get(_i)->UnPack(_resolver)); } } };
}

inline flatbuffers::Offset<TuneInfoCache> TuneInfoCache::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoCacheT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTuneInfoCache(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TuneInfoCache> CreateTuneInfoCache(flatbuffers::FlatBufferBuilder &_fbb, const TuneInfoCacheT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TuneInfoCacheT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _TuneInfos = _o->TuneInfos.size() ? _fbb.CreateVector<flatbuffers::Offset<TuneInfo>> (_o->TuneInfos.size(), [](size_t i, _VectorArgs *__va) { return CreateTuneInfo(*__va->__fbb, __va->__o->TuneInfos[i].get(), __va->__rehasher); }, &_va ) : 0;
  return VKCache::CreateTuneInfoCache(
      _fbb,
      _TuneInfos);
}

inline const flatbuffers::TypeTable *WorkSizeTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_UINT, 0, -1 },
    { flatbuffers::ET_UINT, 0, -1 },
    { flatbuffers::ET_UINT, 0, -1 }
  };
  static const char * const names[] = {
    "x",
    "y",
    "z"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 3, type_codes, nullptr, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *TuneInfoTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_STRING, 0, -1 },
    { flatbuffers::ET_SEQUENCE, 0, 0 },
    { flatbuffers::ET_SEQUENCE, 0, 0 },
    { flatbuffers::ET_FLOAT, 0, -1 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    WorkSizeTypeTable
  };
  static const char * const names[] = {
    "shaderName",
    "gws",
    "optimalLws",
    "optimalCost"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 4, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *TuneInfoCacheTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 1, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    TuneInfoTypeTable
  };
  static const char * const names[] = {
    "TuneInfos"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const VKCache::TuneInfoCache *GetTuneInfoCache(const void *buf) {
  return flatbuffers::GetRoot<VKCache::TuneInfoCache>(buf);
}

inline const VKCache::TuneInfoCache *GetSizePrefixedTuneInfoCache(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<VKCache::TuneInfoCache>(buf);
}

inline bool VerifyTuneInfoCacheBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<VKCache::TuneInfoCache>(nullptr);
}

inline bool VerifySizePrefixedTuneInfoCacheBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<VKCache::TuneInfoCache>(nullptr);
}

inline void FinishTuneInfoCacheBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<VKCache::TuneInfoCache> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTuneInfoCacheBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<VKCache::TuneInfoCache> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<TuneInfoCacheT> UnPackTuneInfoCache(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<TuneInfoCacheT>(GetTuneInfoCache(buf)->UnPack(res));
}

}  // namespace VKCache

#endif  // FLATBUFFERS_GENERATED_VKCACHE_VKCACHE_H_
