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

// AppScript
struct AppScript_t3488119340;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// FacilityScript
struct FacilityScript_t3002937710;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_FacilityScript3002937710.h"

// System.Void AppScript::.ctor()
extern "C"  void AppScript__ctor_m247155903 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::.cctor()
extern "C"  void AppScript__cctor_m2884769486 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AppScript AppScript::getSharedInstance()
extern "C"  AppScript_t3488119340 * AppScript_getSharedInstance_m3091938420 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AppScript::_GetDeepLink()
extern "C"  String_t* AppScript__GetDeepLink_m2694011679 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::Awake()
extern "C"  void AppScript_Awake_m484761122 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AppScript::isNewYear()
extern "C"  bool AppScript_isNewYear_m3740530788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::SetupTimeSpecialContent()
extern "C"  void AppScript_SetupTimeSpecialContent_m2847733607 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::Start()
extern "C"  void AppScript_Start_m3489260991 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::Update()
extern "C"  void AppScript_Update_m798760494 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::disableCamera()
extern "C"  void AppScript_disableCamera_m1227885290 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::enableCamera()
extern "C"  void AppScript_enableCamera_m3928523021 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::switchToFloor(System.Int32)
extern "C"  void AppScript_switchToFloor_m1733818763 (AppScript_t3488119340 * __this, int32_t ___floor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::clearCenterPanelContainer()
extern "C"  void AppScript_clearCenterPanelContainer_m1326885052 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::disableAllInCentralPanelContainer()
extern "C"  void AppScript_disableAllInCentralPanelContainer_m2871540913 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject AppScript::loadCenterPanel(System.String)
extern "C"  GameObject_t3674682005 * AppScript_loadCenterPanel_m3492800263 (AppScript_t3488119340 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::openExamsView()
extern "C"  void AppScript_openExamsView_m2350208012 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::closeExamsView()
extern "C"  void AppScript_closeExamsView_m841355558 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::openTimetable()
extern "C"  void AppScript_openTimetable_m4037397044 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::openTimetableTour()
extern "C"  void AppScript_openTimetableTour_m2259949868 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::closeTimetable()
extern "C"  void AppScript_closeTimetable_m2528544590 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::UpdateTimeBasedElements()
extern "C"  void AppScript_UpdateTimeBasedElements_m1799663633 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::OnApplicationPause(System.Boolean)
extern "C"  void AppScript_OnApplicationPause_m1231330017 (AppScript_t3488119340 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::DeepLinkFocusRoom(System.String)
extern "C"  void AppScript_DeepLinkFocusRoom_m4059669816 (AppScript_t3488119340 * __this, String_t* ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AppScript::HasNewDeepLink()
extern "C"  bool AppScript_HasNewDeepLink_m3345536829 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::ProcessDeepLinking()
extern "C"  void AppScript_ProcessDeepLinking_m3381373842 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<OnUpdateTimeBasedElements>m__0()
extern "C"  void AppScript_U3COnUpdateTimeBasedElementsU3Em__0_m892619301 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<OnFloorSwitch>m__1(System.Int32)
extern "C"  void AppScript_U3COnFloorSwitchU3Em__1_m3730524427 (Il2CppObject * __this /* static, unused */, int32_t ____0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<OnFacilityFocus>m__2(FacilityScript)
extern "C"  void AppScript_U3COnFacilityFocusU3Em__2_m1140380440 (Il2CppObject * __this /* static, unused */, FacilityScript_t3002937710 * ____0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<OnSearchResultSelect>m__3(FacilityScript)
extern "C"  void AppScript_U3COnSearchResultSelectU3Em__3_m3538054271 (Il2CppObject * __this /* static, unused */, FacilityScript_t3002937710 * ____0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<OnShowSearchResults>m__4(System.String)
extern "C"  void AppScript_U3COnShowSearchResultsU3Em__4_m3290503606 (Il2CppObject * __this /* static, unused */, String_t* ____0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<OnOpenTimetable>m__5()
extern "C"  void AppScript_U3COnOpenTimetableU3Em__5_m3257448583 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<Start>m__6()
extern "C"  void AppScript_U3CStartU3Em__6_m3372710142 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppScript::<openTimetable>m__7()
extern "C"  void AppScript_U3CopenTimetableU3Em__7_m3269076330 (AppScript_t3488119340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
