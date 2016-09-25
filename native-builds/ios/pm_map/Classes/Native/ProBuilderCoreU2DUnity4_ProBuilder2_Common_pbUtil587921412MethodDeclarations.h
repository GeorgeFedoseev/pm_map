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
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.String
struct String_t;
// pb_UV[]
struct pb_UVU5BU5D_t1178539003;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Boolean ProBuilder2.Common.pbUtil::get_SharedSnapEnabled()
extern "C"  bool pbUtil_get_SharedSnapEnabled_m252836170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Common.pbUtil::get_SharedSnapValue()
extern "C"  float pbUtil_get_SharedSnapValue_m2991456272 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pbUtil::get_SharedUseAxisConstraints()
extern "C"  bool pbUtil_get_SharedUseAxisConstraints_m1750871709 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ProBuilder2.Common.pbUtil::ToWorldSpace(UnityEngine.Transform,UnityEngine.Vector3[])
extern "C"  Vector3U5BU5D_t215400611* pbUtil_ToWorldSpace_m1025683232 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___t0, Vector3U5BU5D_t215400611* ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Common.pbUtil::SnapValue(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  pbUtil_SnapValue_m1071449010 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___vertex0, float ___snpVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Common.pbUtil::SnapValue(System.Single,System.Single)
extern "C"  float pbUtil_SnapValue_m1002811570 (Il2CppObject * __this /* static, unused */, float ___val0, float ___snpVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Common.pbUtil::SnapValue(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  pbUtil_SnapValue_m2745451397 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___vertex0, Vector3_t4282066566  ___mask1, float ___snpVal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh ProBuilder2.Common.pbUtil::DeepCopyMesh(UnityEngine.Mesh)
extern "C"  Mesh_t4241756145 * pbUtil_DeepCopyMesh_m3084073894 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ____mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pbUtil::ToFormattedString(pb_UV[],System.String)
extern "C"  String_t* pbUtil_ToFormattedString_m1328217310 (Il2CppObject * __this /* static, unused */, pb_UVU5BU5D_t1178539003* ___t0, String_t* ____delimiter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pbUtil::ColorWithString(System.String,UnityEngine.Color&)
extern "C"  bool pbUtil_ColorWithString_m3437747877 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Color_t4194546905 * ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ProBuilder2.Common.pbUtil::StringToVector3Array(System.String)
extern "C"  Vector3U5BU5D_t215400611* pbUtil_StringToVector3Array_m576655214 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Common.pbUtil::DivideBy(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  pbUtil_DivideBy_m2774210690 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, Vector2_t4282066565  ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Common.pbUtil::DivideBy(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  pbUtil_DivideBy_m1155671263 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v0, Vector3_t4282066566  ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
