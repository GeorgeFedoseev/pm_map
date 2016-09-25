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

// CUDLR.Console
struct Console_t1942719977;
// CUDLR.CommandAttribute
struct CommandAttribute_t2471075151;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// CUDLR.CommandAttribute/Callback
struct Callback_t1792859565;
// CUDLR.RequestContext
struct RequestContext_t2839801694;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CUDLR_CommandAttribute2471075151.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_LogType4286006228.h"
#include "AssemblyU2DCSharp_CUDLR_CommandAttribute_Callback1792859565.h"
#include "AssemblyU2DCSharp_CUDLR_RequestContext2839801694.h"

// System.Void CUDLR.Console::.ctor()
extern "C"  void Console__ctor_m239760938 (Console_t1942719977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CUDLR.Console CUDLR.Console::get_Instance()
extern "C"  Console_t1942719977 * Console_get_Instance_m3954308454 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Update()
extern "C"  void Console_Update_m569516579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Queue(CUDLR.CommandAttribute,System.String[])
extern "C"  void Console_Queue_m4021726604 (Il2CppObject * __this /* static, unused */, CommandAttribute_t2471075151 * ___command0, StringU5BU5D_t4054002952* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Run(System.String)
extern "C"  void Console_Run_m775637263 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Clear()
extern "C"  void Console_Clear_m1940861525 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Help()
extern "C"  void Console_Help_m1307888859 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CUDLR.Console::Complete(System.String)
extern "C"  String_t* Console_Complete_m3244755314 (Il2CppObject * __this /* static, unused */, String_t* ___partialCommand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::LogCommand(System.String)
extern "C"  void Console_LogCommand_m3112958945 (Il2CppObject * __this /* static, unused */, String_t* ___cmd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Log(System.String)
extern "C"  void Console_Log_m2211952438 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::LogCallback(System.String,System.String,UnityEngine.LogType)
extern "C"  void Console_LogCallback_m284258098 (Il2CppObject * __this /* static, unused */, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CUDLR.Console::Output()
extern "C"  String_t* Console_Output_m4225458904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::RegisterCommand(System.String,System.String,CUDLR.CommandAttribute/Callback,System.Boolean)
extern "C"  void Console_RegisterCommand_m3570700720 (Il2CppObject * __this /* static, unused */, String_t* ___command0, String_t* ___desc1, Callback_t1792859565 * ___callback2, bool ___runOnMainThread3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::RegisterAttributes()
extern "C"  void Console_RegisterAttributes_m339292148 (Console_t1942719977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CUDLR.Console::PreviousCommand(System.Int32)
extern "C"  String_t* Console_PreviousCommand_m2190872272 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::RecordCommand(System.String)
extern "C"  void Console_RecordCommand_m2381186752 (Console_t1942719977 * __this, String_t* ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Output(CUDLR.RequestContext)
extern "C"  void Console_Output_m838981701 (Il2CppObject * __this /* static, unused */, RequestContext_t2839801694 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Run(CUDLR.RequestContext)
extern "C"  void Console_Run_m1758141629 (Il2CppObject * __this /* static, unused */, RequestContext_t2839801694 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::History(CUDLR.RequestContext)
extern "C"  void Console_History_m3620834950 (Il2CppObject * __this /* static, unused */, RequestContext_t2839801694 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Console::Complete(CUDLR.RequestContext)
extern "C"  void Console_Complete_m2423444541 (Il2CppObject * __this /* static, unused */, RequestContext_t2839801694 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
