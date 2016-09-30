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

// Loom
struct Loom_t2374337;
// System.Action
struct Action_t3771233898;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t1973216770;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_Loom_DelayedQueueItem3219765808.h"

// System.Void Loom::.ctor()
extern "C"  void Loom__ctor_m3034241274 (Loom_t2374337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::.cctor()
extern "C"  void Loom__cctor_m3385070067 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Loom Loom::get_Current()
extern "C"  Loom_t2374337 * Loom_get_Current_m3802507340 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::Awake()
extern "C"  void Loom_Awake_m3271846493 (Loom_t2374337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::Initialize()
extern "C"  void Loom_Initialize_m3107195354 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::QueueOnMainThread(System.Action)
extern "C"  void Loom_QueueOnMainThread_m2240132210 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::QueueOnMainThread(System.Action,System.Single,System.String)
extern "C"  void Loom_QueueOnMainThread_m3879973843 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___action0, float ___time1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::removeAll()
extern "C"  void Loom_removeAll_m1310364149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::removeByName(System.String)
extern "C"  void Loom_removeByName_m916048242 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread Loom::RunAsync(System.Action)
extern "C"  Thread_t1973216770 * Loom_RunAsync_m2054240526 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::RunAction(System.Object)
extern "C"  void Loom_RunAction_m1175492411 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::OnDisable()
extern "C"  void Loom_OnDisable_m3078168673 (Loom_t2374337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::Start()
extern "C"  void Loom_Start_m1981379066 (Loom_t2374337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loom::Update()
extern "C"  void Loom_Update_m1299061075 (Loom_t2374337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Loom::<Update>m__5F(Loom/DelayedQueueItem)
extern "C"  bool Loom_U3CUpdateU3Em__5F_m4228054265 (Il2CppObject * __this /* static, unused */, DelayedQueueItem_t3219765808  ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
