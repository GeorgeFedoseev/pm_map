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
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// System.String
struct String_t;
// pb_UV[]
struct pb_UVU5BU5D_t1178539003;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Boolean ProBuilder2.Common.pbUtil::get_SharedSnapEnabled()
extern "C"  bool pbUtil_get_SharedSnapEnabled_m252836170 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Common.pbUtil::get_SharedSnapValue()
extern "C"  float pbUtil_get_SharedSnapValue_m2991456272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pbUtil::get_SharedUseAxisConstraints()
extern "C"  bool pbUtil_get_SharedUseAxisConstraints_m1750871709 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ProBuilder2.Common.pbUtil::ToWorldSpace(UnityEngine.Transform,UnityEngine.Vector3[])
extern "C"  Vector3U5BU5D_t3227571696* pbUtil_ToWorldSpace_m1025683232 (Object_t * __this /* static, unused */, Transform_t284553113 * ___t, Vector3U5BU5D_t3227571696* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Common.pbUtil::SnapValue(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  pbUtil_SnapValue_m1071449010 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___vertex, float ___snpVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Common.pbUtil::SnapValue(System.Single,System.Single)
extern "C"  float pbUtil_SnapValue_m1002811570 (Object_t * __this /* static, unused */, float ___val, float ___snpVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Common.pbUtil::SnapValue(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  pbUtil_SnapValue_m2745451397 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___vertex, Vector3_t3525329789  ___mask, float ___snpVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh ProBuilder2.Common.pbUtil::DeepCopyMesh(UnityEngine.Mesh)
extern "C"  Mesh_t1525280346 * pbUtil_DeepCopyMesh_m3084073894 (Object_t * __this /* static, unused */, Mesh_t1525280346 * ____mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pbUtil::ToFormattedString(pb_UV[],System.String)
extern "C"  String_t* pbUtil_ToFormattedString_m1328217310 (Object_t * __this /* static, unused */, pb_UVU5BU5D_t1178539003* ___t, String_t* ____delimiter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pbUtil::ColorWithString(System.String,UnityEngine.Color&)
extern "C"  bool pbUtil_ColorWithString_m3437747877 (Object_t * __this /* static, unused */, String_t* ___value, Color_t1588175760 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ProBuilder2.Common.pbUtil::StringToVector3Array(System.String)
extern "C"  Vector3U5BU5D_t3227571696* pbUtil_StringToVector3Array_m576655214 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Common.pbUtil::DivideBy(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  pbUtil_DivideBy_m2774210690 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___v, Vector2_t3525329788  ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Common.pbUtil::DivideBy(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  pbUtil_DivideBy_m1155671263 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___v, Vector3_t3525329789  ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
