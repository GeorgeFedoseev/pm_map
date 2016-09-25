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
struct Vector3U5BU5D_t215400611;
// pb_Object
struct pb_Object_t3489221196;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176.h"

// UnityEngine.Vector3[] ProBuilder2.Common.pb_Object_Utility::VerticesInWorldSpace(pb_Object,System.Int32[])
extern "C"  Vector3U5BU5D_t215400611* pb_Object_Utility_VerticesInWorldSpace_m1830969243 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, Int32U5BU5D_t3230847821* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Object_Utility::TranslateVertices(pb_Object,System.Int32[],UnityEngine.Vector3)
extern "C"  void pb_Object_Utility_TranslateVertices_m3995296169 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, Int32U5BU5D_t3230847821* ___selectedTriangles1, Vector3_t4282066566  ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Object_Utility::FaceWithTriangle(pb_Object,System.Int32[],ProBuilder2.Common.pb_Face&)
extern "C"  bool pb_Object_Utility_FaceWithTriangle_m2565389813 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, Int32U5BU5D_t3230847821* ___tri1, pb_Face_t882335176 ** ___face2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
