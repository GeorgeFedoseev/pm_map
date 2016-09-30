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

// Alerts
struct Alerts_t1963757239;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;
// SPBUTimetable.Pair
struct Pair_t3945686594;
// System.Action`2<SPBUTimetable.Pair,SPBUTimetable.Pair>
struct Action_2_t1379811059;
// SPBUTimetable.WeekTimetable
struct WeekTimetable_t3211448027;
// System.Action`1<SPBUTimetable.Pair>
struct Action_1_t46535434;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173.h"
#include "AssemblyU2DCSharp_SPBUTimetable_Pair3945686594.h"
#include "AssemblyU2DCSharp_SPBUTimetable_WeekTimetable3211448027.h"

// System.Void Alerts::.ctor()
extern "C"  void Alerts__ctor_m570061764 (Alerts_t1963757239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::Awake()
extern "C"  void Alerts_Awake_m807666983 (Alerts_t1963757239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::hideAll()
extern "C"  void Alerts_hideAll_m837682689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::AskYesNo(System.String,System.String,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction,System.String,System.String,System.Boolean)
extern "C"  void Alerts_AskYesNo_m3302512758 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___text1, UnityAction_t594794173 * ___yesAction2, UnityAction_t594794173 * ___noAction3, String_t* ___yesTitle4, String_t* ___noTitle5, bool ___redYes6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::InfoOk(System.String,System.String,System.String)
extern "C"  void Alerts_InfoOk_m777832656 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___text1, String_t* ___okTitle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::editPair(System.String,SPBUTimetable.Pair,System.Action`2<SPBUTimetable.Pair,SPBUTimetable.Pair>,System.String,System.String)
extern "C"  void Alerts_editPair_m2930128390 (Il2CppObject * __this /* static, unused */, String_t* ___title0, Pair_t3945686594 * ___pair1, Action_2_t1379811059 * ___yesAction2, String_t* ___okButtonTitle3, String_t* ___cancelButtonTitle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::addPair(System.String,SPBUTimetable.WeekTimetable,System.Action`1<SPBUTimetable.Pair>,System.String,System.String)
extern "C"  void Alerts_addPair_m3188147348 (Il2CppObject * __this /* static, unused */, String_t* ___title0, WeekTimetable_t3211448027 * ___week1, Action_1_t46535434 * ___yesAction2, String_t* ___okButtonTitle3, String_t* ___cancelButtonTitle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::Start()
extern "C"  void Alerts_Start_m3812166852 (Alerts_t1963757239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::Update()
extern "C"  void Alerts_Update_m2218907593 (Alerts_t1963757239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::<AskYesNo>m__1F()
extern "C"  void Alerts_U3CAskYesNoU3Em__1F_m1646738097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::<AskYesNo>m__20()
extern "C"  void Alerts_U3CAskYesNoU3Em__20_m1646746746 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::<InfoOk>m__22()
extern "C"  void Alerts_U3CInfoOkU3Em__22_m4018814807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::<editPair>m__26()
extern "C"  void Alerts_U3CeditPairU3Em__26_m2714411477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alerts::<addPair>m__29()
extern "C"  void Alerts_U3CaddPairU3Em__29_m1379879829 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
