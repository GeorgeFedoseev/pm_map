#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MGBlendTable
struct MGBlendTable_t2313184055;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t2441545637;

#include "codegen/il2cpp-codegen.h"

// System.Void MGBlendTable::.ctor(System.Int32,System.Int32,System.Int32,System.Single,System.Boolean)
extern "C"  void MGBlendTable__ctor_m1163737187 (MGBlendTable_t2313184055 * __this, int32_t ___tableX0, int32_t ___tableY1, int32_t ___nToBlend2, float ___ditherAmt3, bool ___normalizeTable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MGBlendTable::LayerIndex(System.Int32)
extern "C"  int32_t MGBlendTable_LayerIndex_m3561230688 (MGBlendTable_t2313184055 * __this, int32_t ___nImage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MGBlendTable::PixelIndex(System.Int32,System.Int32)
extern "C"  int32_t MGBlendTable_PixelIndex_m765472940 (MGBlendTable_t2313184055 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MGBlendTable::RowIndex(System.Int32)
extern "C"  int32_t MGBlendTable_RowIndex_m3599701367 (MGBlendTable_t2313184055 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MGBlendTable::TileX(System.Int32)
extern "C"  int32_t MGBlendTable_TileX_m2598858319 (MGBlendTable_t2313184055 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MGBlendTable::TileY(System.Int32)
extern "C"  int32_t MGBlendTable_TileY_m4106410128 (MGBlendTable_t2313184055 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MGBlendTable::Index(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t MGBlendTable_Index_m893357143 (MGBlendTable_t2313184055 * __this, int32_t ___nImage0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] MGBlendTable::GetTable()
extern "C"  SingleU5BU5D_t2316563989* MGBlendTable_GetTable_m1581524674 (MGBlendTable_t2313184055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MGBlendTable::GetWeight(System.Int32,System.Int32,System.Int32)
extern "C"  float MGBlendTable_GetWeight_m2713813237 (MGBlendTable_t2313184055 * __this, int32_t ___nImage0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MGBlendTable::SetWeight(System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  void MGBlendTable_SetWeight_m3620700018 (MGBlendTable_t2313184055 * __this, int32_t ___nImage0, int32_t ___x1, int32_t ___y2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MGBlendTable::GetTileSz(System.Int32&,System.Int32&)
extern "C"  void MGBlendTable_GetTileSz_m1461663555 (MGBlendTable_t2313184055 * __this, int32_t* ___xSz0, int32_t* ___ySz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MGBlendTable::dummyNoise()
extern "C"  float MGBlendTable_dummyNoise_m3460762814 (MGBlendTable_t2313184055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MGBlendTable::RandomNoise()
extern "C"  float MGBlendTable_RandomNoise_m2608120749 (MGBlendTable_t2313184055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MGBlendTable::BlendImages(UnityEngine.Color[,],UnityEngine.Color[,],System.Int32,System.Int32,System.Int32)
extern "C"  void MGBlendTable_BlendImages_m2308857532 (MGBlendTable_t2313184055 * __this, ColorU5BU2CU5D_t2441545637* ___pDstBM0, ColorU5BU2CU5D_t2441545637* ___pSrcBM1, int32_t ___width2, int32_t ___height3, int32_t ___nImage4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
