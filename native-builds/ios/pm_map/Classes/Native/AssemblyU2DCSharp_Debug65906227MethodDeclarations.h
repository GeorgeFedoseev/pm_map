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

// System.String
struct String_t;
// UnityEngine.Object
struct Object_t3071478659;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void Debug::LogInfo(System.String,UnityEngine.Object)
extern "C"  void Debug_LogInfo_m1380238998 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Object_t3071478659 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::Log(System.String,UnityEngine.Object)
extern "C"  void Debug_Log_m1552180680 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Object_t3071478659 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::WriteLine(System.String)
extern "C"  void Debug_WriteLine_m3291795129 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::LogWarning(System.String,UnityEngine.Object)
extern "C"  void Debug_LogWarning_m4187349938 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Object_t3071478659 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void Debug_DrawLine_m1816084912 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___start0, Vector3_t4282066566  ___end1, Color_t4194546905  ___color2, float ___duration3, bool ___depthTest4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::LogError(System.String,UnityEngine.Object)
extern "C"  void Debug_LogError_m694690014 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Object_t3071478659 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Debug::LogException(System.Exception)
extern "C"  void Debug_LogException_m468353031 (Il2CppObject * __this /* static, unused */, Exception_t3991598821 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
