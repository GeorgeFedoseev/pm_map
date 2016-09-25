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

// UnityEngine.Application/LogCallback
struct LogCallback_t2984951347;
// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Application_LogCallback2984951347.h"
#include "UnityEngine_UnityEngine_RuntimePlatform3050318497.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_LogType4286006228.h"

// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C"  void Application_add_logMessageReceived_m601763714 (Il2CppObject * __this /* static, unused */, LogCallback_t2984951347 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C"  void Application_remove_logMessageReceived_m293388825 (Il2CppObject * __this /* static, unused */, LogCallback_t2984951347 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern "C"  void Application_add_logMessageReceivedThreaded_m2240409817 (Il2CppObject * __this /* static, unused */, LogCallback_t2984951347 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern "C"  void Application_remove_logMessageReceivedThreaded_m1892940912 (Il2CppObject * __this /* static, unused */, LogCallback_t2984951347 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m987993960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m1279348309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2918632856 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
extern "C"  String_t* Application_get_dataPath_m2519694320 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C"  String_t* Application_get_streamingAssetsPath_m1181082379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m2554537447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_version()
extern "C"  String_t* Application_get_version_m3762569241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C"  void Application_OpenURL_m1861717334 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m498658007 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C"  void Application_CallLogCallback_m419361836 (Il2CppObject * __this /* static, unused */, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, bool ___invokedOnMainThread3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean)
extern "C"  void Application_SetLogCallbackDefined_m603286656 (Il2CppObject * __this /* static, unused */, bool ___defined0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C"  void Application_RegisterLogCallback_m1894810578 (Il2CppObject * __this /* static, unused */, LogCallback_t2984951347 * ___handler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback,System.Boolean)
extern "C"  void Application_RegisterLogCallback_m1249997163 (Il2CppObject * __this /* static, unused */, LogCallback_t2984951347 * ___handler0, bool ___threaded1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern "C"  void Application_LoadLevel_m1181471414 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String)
extern "C"  AsyncOperation_t3699081103 * Application_LoadLevelAsync_m572913174 (Il2CppObject * __this /* static, unused */, String_t* ___levelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
