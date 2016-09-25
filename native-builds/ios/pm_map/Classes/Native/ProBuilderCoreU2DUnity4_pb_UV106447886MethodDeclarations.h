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

// pb_UV
struct pb_UV_t106447886;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "ProBuilderCoreU2DUnity4_pb_UV106447886.h"
#include "ProBuilderCoreU2DUnity4_pb_UV_Fill1422774020.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "ProBuilderCoreU2DUnity4_pb_UV_Justify2728957295.h"
#include "mscorlib_System_String7231557.h"

// System.Void pb_UV::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void pb_UV_GetObjectData_m3283440490 (pb_UV_t106447886 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void pb_UV__ctor_m3446892813 (pb_UV_t106447886 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor()
extern "C"  void pb_UV__ctor_m3196678604 (pb_UV_t106447886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor(pb_UV)
extern "C"  void pb_UV__ctor_m2643155480 (pb_UV_t106447886 * __this, pb_UV_t106447886 * ___uvs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean,pb_UV/Fill,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,pb_UV/Justify)
extern "C"  void pb_UV__ctor_m1771266098 (pb_UV_t106447886 * __this, bool ____useWorldSpace0, bool ____flipU1, bool ____flipV2, bool ____swapUV3, int32_t ____fill4, Vector2_t4282066565  ____scale5, Vector2_t4282066565  ____offset6, float ____rotation7, int32_t ____justify8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::Reset()
extern "C"  void pb_UV_Reset_m843111545 (pb_UV_t106447886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String pb_UV::ToString()
extern "C"  String_t* pb_UV_ToString_m3228687841 (pb_UV_t106447886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String pb_UV::ToString(System.String)
extern "C"  String_t* pb_UV_ToString_m277681857 (pb_UV_t106447886 * __this, String_t* ___delim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.cctor()
extern "C"  void pb_UV__cctor_m4125660001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
