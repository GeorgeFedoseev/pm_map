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

// ProBuilder2.Common.pb_Bounds2D
struct pb_Bounds2D_t3730308107;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Boun3730308107.h"

// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::get_size()
extern "C"  Vector2_t3525329788  pb_Bounds2D_get_size_m3820735224 (pb_Bounds2D_t3730308107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Bounds2D::set_size(UnityEngine.Vector2)
extern "C"  void pb_Bounds2D_set_size_m3190796361 (pb_Bounds2D_t3730308107 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::get_extents()
extern "C"  Vector2_t3525329788  pb_Bounds2D_get_extents_m1538594644 (pb_Bounds2D_t3730308107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Bounds2D::set_extents(UnityEngine.Vector2)
extern "C"  void pb_Bounds2D_set_extents_m419614719 (pb_Bounds2D_t3730308107 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Common.pb_Bounds2D::get_corners()
extern "C"  Vector2U5BU5D_t2741383957* pb_Bounds2D_get_corners_m2765483179 (pb_Bounds2D_t3730308107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Bounds2D::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void pb_Bounds2D__ctor_m1438007965 (pb_Bounds2D_t3730308107 * __this, Vector2_t3525329788  ___center, Vector2_t3525329788  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Bounds2D::.ctor(UnityEngine.Vector2[])
extern "C"  void pb_Bounds2D__ctor_m845073543 (pb_Bounds2D_t3730308107 * __this, Vector2U5BU5D_t2741383957* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Bounds2D::.ctor(UnityEngine.Vector2[],System.Int32)
extern "C"  void pb_Bounds2D__ctor_m3726975920 (pb_Bounds2D_t3730308107 * __this, Vector2U5BU5D_t2741383957* ___points, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Bounds2D::ContainsPoint(UnityEngine.Vector2)
extern "C"  bool pb_Bounds2D_ContainsPoint_m4262607536 (pb_Bounds2D_t3730308107 * __this, Vector2_t3525329788  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Bounds2D::IntersectsLineSegment(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool pb_Bounds2D_IntersectsLineSegment_m2704655178 (pb_Bounds2D_t3730308107 * __this, Vector2_t3525329788  ___lineStart, Vector2_t3525329788  ___lineEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Bounds2D::Intersects(ProBuilder2.Common.pb_Bounds2D)
extern "C"  bool pb_Bounds2D_Intersects_m1995965570 (pb_Bounds2D_t3730308107 * __this, pb_Bounds2D_t3730308107 * ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::Center(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  Vector2_t3525329788  pb_Bounds2D_Center_m2952905055 (Object_t * __this /* static, unused */, List_1_t27321461 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::Center(UnityEngine.Vector2[])
extern "C"  Vector2_t3525329788  pb_Bounds2D_Center_m162342805 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::Center(UnityEngine.Vector2[],System.Int32)
extern "C"  Vector2_t3525329788  pb_Bounds2D_Center_m107196258 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___points, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Bounds2D::ToString()
extern "C"  String_t* pb_Bounds2D_ToString_m1494492098 (pb_Bounds2D_t3730308107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
