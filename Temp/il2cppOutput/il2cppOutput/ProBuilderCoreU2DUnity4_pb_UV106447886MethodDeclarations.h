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
struct SerializationInfo_t2995724695;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "ProBuilderCoreU2DUnity4_pb_UV106447886.h"
#include "ProBuilderCoreU2DUnity4_pb_UV_Fill2189731.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "ProBuilderCoreU2DUnity4_pb_UV_Justify415171184.h"
#include "mscorlib_System_String968488902.h"

// System.Void pb_UV::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void pb_UV_GetObjectData_m3283440490 (pb_UV_t106447886 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void pb_UV__ctor_m3446892813 (pb_UV_t106447886 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor()
extern "C"  void pb_UV__ctor_m3196678604 (pb_UV_t106447886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor(pb_UV)
extern "C"  void pb_UV__ctor_m2643155480 (pb_UV_t106447886 * __this, pb_UV_t106447886 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean,pb_UV/Fill,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,pb_UV/Justify)
extern "C"  void pb_UV__ctor_m1771266098 (pb_UV_t106447886 * __this, bool ____useWorldSpace, bool ____flipU, bool ____flipV, bool ____swapUV, int32_t ____fill, Vector2_t3525329788  ____scale, Vector2_t3525329788  ____offset, float ____rotation, int32_t ____justify, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::Reset()
extern "C"  void pb_UV_Reset_m843111545 (pb_UV_t106447886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String pb_UV::ToString()
extern "C"  String_t* pb_UV_ToString_m3228687841 (pb_UV_t106447886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String pb_UV::ToString(System.String)
extern "C"  String_t* pb_UV_ToString_m277681857 (pb_UV_t106447886 * __this, String_t* ___delim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_UV::.cctor()
extern "C"  void pb_UV__cctor_m4125660001 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
