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

// BottomPanelScript
struct BottomPanelScript_t140445860;
// SPBUTimetable.Pair
struct Pair_t3945686594;
// System.String
struct String_t;
// System.Collections.Generic.List`1<FacilityScript>
struct List_1_t76155966;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;
// FacilityScript
struct FacilityScript_t3002937710;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SPBUTimetable_Pair3945686594.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2054899105.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_FacilityScript3002937710.h"

// System.Void BottomPanelScript::.ctor()
extern "C"  void BottomPanelScript__ctor_m1424629063 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::Awake()
extern "C"  void BottomPanelScript_Awake_m1662234282 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::Start()
extern "C"  void BottomPanelScript_Start_m371766855 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::Update()
extern "C"  void BottomPanelScript_Update_m2940690086 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::didFold()
extern "C"  void BottomPanelScript_didFold_m3827924645 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::updatePairAlert(System.Boolean)
extern "C"  void BottomPanelScript_updatePairAlert_m2446119957 (BottomPanelScript_t140445860 * __this, bool ___forceUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::setOrangeMode(System.Boolean)
extern "C"  void BottomPanelScript_setOrangeMode_m2991217711 (BottomPanelScript_t140445860 * __this, bool ____orangeMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::showPair(SPBUTimetable.Pair,System.String)
extern "C"  void BottomPanelScript_showPair_m2532344601 (BottomPanelScript_t140445860 * __this, Pair_t3945686594 * ___pair0, String_t* ___title_text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::showFacilities(System.Collections.Generic.List`1<FacilityScript>,System.String,System.Boolean,System.Boolean)
extern "C"  void BottomPanelScript_showFacilities_m1383701121 (BottomPanelScript_t140445860 * __this, List_1_t76155966 * ____facilities0, String_t* ___title_text1, bool ___switchFloorIfOnlyOne2, bool ___doFocusingStuff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::OnTitleClick()
extern "C"  void BottomPanelScript_OnTitleClick_m2769297580 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::fold(System.Boolean)
extern "C"  void BottomPanelScript_fold_m3939139509 (BottomPanelScript_t140445860 * __this, bool ___hide0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::unfold(System.Boolean)
extern "C"  void BottomPanelScript_unfold_m261748942 (BottomPanelScript_t140445860 * __this, bool ___full0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::updateHidden()
extern "C"  void BottomPanelScript_updateHidden_m3604365840 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::OnDrag(UnityEngine.EventSystems.BaseEventData)
extern "C"  void BottomPanelScript_OnDrag_m358701418 (BottomPanelScript_t140445860 * __this, BaseEventData_t2054899105 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::OnEndDrag()
extern "C"  void BottomPanelScript_OnEndDrag_m3423617589 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::OnScroll(UnityEngine.Vector2)
extern "C"  void BottomPanelScript_OnScroll_m3223973233 (BottomPanelScript_t140445860 * __this, Vector2_t4282066565  ___scrollPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::OnRectTransformDimensionsChange()
extern "C"  void BottomPanelScript_OnRectTransformDimensionsChange_m2651868715 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::OnScrollStop()
extern "C"  void BottomPanelScript_OnScrollStop_m440127307 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::setTitle(System.String)
extern "C"  void BottomPanelScript_setTitle_m3305615183 (BottomPanelScript_t140445860 * __this, String_t* ____title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::UpdateSnapping()
extern "C"  void BottomPanelScript_UpdateSnapping_m39265026 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::UpdateLayout()
extern "C"  void BottomPanelScript_UpdateLayout_m3085437872 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::<OnSnapToFacility>m__2B(FacilityScript)
extern "C"  void BottomPanelScript_U3COnSnapToFacilityU3Em__2B_m1926541049 (Il2CppObject * __this /* static, unused */, FacilityScript_t3002937710 * ____0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BottomPanelScript::<Start>m__2C()
extern "C"  void BottomPanelScript_U3CStartU3Em__2C_m2249015587 (BottomPanelScript_t140445860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
