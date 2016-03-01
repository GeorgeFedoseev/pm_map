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

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// pb_UV
struct pb_UV_t106447886;
// ProBuilder2.Common.pb_UV_Utility
struct pb_UV_Utility_t193062546;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_pb_UV106447886.h"
#include "mscorlib_System_Nullable_1_gen2116400401.h"
#include "ProBuilderCoreU2DUnity4_pb_UV_Justify415171184.h"

// UnityEngine.Vector2[] ProBuilder2.Common.pb_UV_Utility::PlanarMap(UnityEngine.Vector3[],pb_UV)
extern "C"  Vector2U5BU5D_t2741383957* pb_UV_Utility_PlanarMap_m996268612 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___verts, pb_UV_t106447886 * ___uvSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Common.pb_UV_Utility::PlanarMap(UnityEngine.Vector3[],pb_UV,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  Vector2U5BU5D_t2741383957* pb_UV_Utility_PlanarMap_m2973080082 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___verts, pb_UV_t106447886 * ___uvSettings, Nullable_1_t2116400401  ___nrm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Common.pb_UV_Utility::ApplyUVSettings(UnityEngine.Vector2[],pb_UV)
extern "C"  Vector2U5BU5D_t2741383957* pb_UV_Utility_ApplyUVSettings_m2758669237 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___uvs, pb_UV_t106447886 * ___uvSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Common.pb_UV_Utility::StretchUVs(UnityEngine.Vector2[])
extern "C"  Vector2U5BU5D_t2741383957* pb_UV_Utility_StretchUVs_m3011408856 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Common.pb_UV_Utility::NormalizeUVs(UnityEngine.Vector2[])
extern "C"  Vector2U5BU5D_t2741383957* pb_UV_Utility_NormalizeUVs_m322459232 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Common.pb_UV_Utility::JustifyUVs(UnityEngine.Vector2[],pb_UV/Justify)
extern "C"  Vector2U5BU5D_t2741383957* pb_UV_Utility_JustifyUVs_m310447552 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___uvs, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_UV_Utility::.ctor()
extern "C"  void pb_UV_Utility__ctor_m3372075338 (pb_UV_Utility_t193062546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
