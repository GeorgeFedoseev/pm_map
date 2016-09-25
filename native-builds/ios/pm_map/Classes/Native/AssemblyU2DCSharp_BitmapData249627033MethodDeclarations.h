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

// BitmapData
struct BitmapData_t249627033;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void BitmapData::.ctor(UnityEngine.Color[],System.Int32,System.Int32)
extern "C"  void BitmapData__ctor_m2354750530 (BitmapData_t249627033 * __this, ColorU5BU5D_t2441545636* ____pixels0, int32_t ____width1, int32_t ____height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BitmapData::.ctor(UnityEngine.Texture2D)
extern "C"  void BitmapData__ctor_m2439559226 (BitmapData_t249627033 * __this, Texture2D_t3884108195 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color BitmapData::getPixelColor(System.Int32,System.Int32)
extern "C"  Color_t4194546905  BitmapData_getPixelColor_m1523276858 (BitmapData_t249627033 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
