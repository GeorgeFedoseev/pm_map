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

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// pb_Object
struct pb_Object_t3489221196;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face2085788961.h"

// UnityEngine.Vector3[] ProBuilder2.Common.pb_Object_Utility::VerticesInWorldSpace(pb_Object,System.Int32[])
extern "C"  Vector3U5BU5D_t3227571696* pb_Object_Utility_VerticesInWorldSpace_m1830969243 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Object_Utility::TranslateVertices(pb_Object,System.Int32[],UnityEngine.Vector3)
extern "C"  void pb_Object_Utility_TranslateVertices_m3995296169 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, Int32U5BU5D_t1809983122* ___selectedTriangles, Vector3_t3525329789  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Object_Utility::FaceWithTriangle(pb_Object,System.Int32[],ProBuilder2.Common.pb_Face&)
extern "C"  bool pb_Object_Utility_FaceWithTriangle_m2565389813 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, Int32U5BU5D_t1809983122* ___tri, pb_Face_t2085788961 ** ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
