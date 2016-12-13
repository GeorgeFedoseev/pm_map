#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppScript
struct AppScript_t3488119340;
// UnityEngine.Transform
struct Transform_t1659122786;
// FacilitiesManager
struct FacilitiesManager_t429269452;
// TimetableManger
struct TimetableManger_t3141655579;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Int32>
struct Action_1_t1549654636;
// System.Action`1<FacilityScript>
struct Action_1_t3398753846;
// System.Action`1<System.String>
struct Action_1_t403047693;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// PoolSystem
struct PoolSystem_t2430881163;
// CameraScript
struct CameraScript_t3510117488;
// SearchBoxScript
struct SearchBoxScript_t2166998414;
// FloorSwitchScript
struct FloorSwitchScript_t2794668843;
// BottomPanelScript
struct BottomPanelScript_t140445860;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// TTPanelScript
struct TTPanelScript_t1983791439;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t3870600107;
// WebViewObject
struct WebViewObject_t388577432;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppScript
struct  AppScript_t3488119340  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform AppScript::building
	Transform_t1659122786 * ___building_6;
	// FacilitiesManager AppScript::facilities
	FacilitiesManager_t429269452 * ___facilities_7;
	// TimetableManger AppScript::timetableManager
	TimetableManger_t3141655579 * ___timetableManager_8;
	// System.Int32 AppScript::currentFloor
	int32_t ___currentFloor_9;
	// System.Action AppScript::OnUpdateTimeBasedElements
	Action_t3771233898 * ___OnUpdateTimeBasedElements_10;
	// System.Action`1<System.Int32> AppScript::OnFloorSwitch
	Action_1_t1549654636 * ___OnFloorSwitch_11;
	// System.Action`1<FacilityScript> AppScript::OnFacilityFocus
	Action_1_t3398753846 * ___OnFacilityFocus_12;
	// System.Action`1<FacilityScript> AppScript::OnSearchResultSelect
	Action_1_t3398753846 * ___OnSearchResultSelect_13;
	// System.Action`1<System.String> AppScript::OnShowSearchResults
	Action_1_t403047693 * ___OnShowSearchResults_14;
	// System.Action AppScript::OnOpenTimetable
	Action_t3771233898 * ___OnOpenTimetable_15;
	// UnityEngine.Canvas AppScript::scaleFactorRefCanvas
	Canvas_t2727140764 * ___scaleFactorRefCanvas_16;
	// PoolSystem AppScript::pool
	PoolSystem_t2430881163 * ___pool_17;
	// UnityEngine.Canvas AppScript::hudCanvas
	Canvas_t2727140764 * ___hudCanvas_18;
	// UnityEngine.Transform AppScript::centerPanel
	Transform_t1659122786 * ___centerPanel_19;
	// UnityEngine.Canvas AppScript::alertsCanvas
	Canvas_t2727140764 * ___alertsCanvas_20;
	// CameraScript AppScript::cam
	CameraScript_t3510117488 * ___cam_21;
	// SearchBoxScript AppScript::searchBox
	SearchBoxScript_t2166998414 * ___searchBox_22;
	// FloorSwitchScript AppScript::floorSwitcher
	FloorSwitchScript_t2794668843 * ___floorSwitcher_23;
	// BottomPanelScript AppScript::bottomPanel
	BottomPanelScript_t140445860 * ___bottomPanel_24;
	// UnityEngine.RectTransform AppScript::openTimetableButton
	RectTransform_t972643934 * ___openTimetableButton_25;
	// UnityEngine.RectTransform AppScript::openExamsButton
	RectTransform_t972643934 * ___openExamsButton_26;
	// UnityEngine.GameObject AppScript::examsHeader
	GameObject_t3674682005 * ___examsHeader_27;
	// UnityEngine.Transform AppScript::centerPanelContainer
	Transform_t1659122786 * ___centerPanelContainer_28;
	// TTPanelScript AppScript::timetablePanel
	TTPanelScript_t1983791439 * ___timetablePanel_29;
	// System.Boolean AppScript::ready
	bool ___ready_30;
	// System.String AppScript::lastDeepLink
	String_t* ___lastDeepLink_31;
	// UnityEngine.Material AppScript::_savedSkybox
	Material_t3870600107 * ____savedSkybox_32;
	// WebViewObject AppScript::webViewObject
	WebViewObject_t388577432 * ___webViewObject_33;

public:
	inline static int32_t get_offset_of_building_6() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___building_6)); }
	inline Transform_t1659122786 * get_building_6() const { return ___building_6; }
	inline Transform_t1659122786 ** get_address_of_building_6() { return &___building_6; }
	inline void set_building_6(Transform_t1659122786 * value)
	{
		___building_6 = value;
		Il2CppCodeGenWriteBarrier(&___building_6, value);
	}

	inline static int32_t get_offset_of_facilities_7() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___facilities_7)); }
	inline FacilitiesManager_t429269452 * get_facilities_7() const { return ___facilities_7; }
	inline FacilitiesManager_t429269452 ** get_address_of_facilities_7() { return &___facilities_7; }
	inline void set_facilities_7(FacilitiesManager_t429269452 * value)
	{
		___facilities_7 = value;
		Il2CppCodeGenWriteBarrier(&___facilities_7, value);
	}

	inline static int32_t get_offset_of_timetableManager_8() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___timetableManager_8)); }
	inline TimetableManger_t3141655579 * get_timetableManager_8() const { return ___timetableManager_8; }
	inline TimetableManger_t3141655579 ** get_address_of_timetableManager_8() { return &___timetableManager_8; }
	inline void set_timetableManager_8(TimetableManger_t3141655579 * value)
	{
		___timetableManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___timetableManager_8, value);
	}

	inline static int32_t get_offset_of_currentFloor_9() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___currentFloor_9)); }
	inline int32_t get_currentFloor_9() const { return ___currentFloor_9; }
	inline int32_t* get_address_of_currentFloor_9() { return &___currentFloor_9; }
	inline void set_currentFloor_9(int32_t value)
	{
		___currentFloor_9 = value;
	}

	inline static int32_t get_offset_of_OnUpdateTimeBasedElements_10() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___OnUpdateTimeBasedElements_10)); }
	inline Action_t3771233898 * get_OnUpdateTimeBasedElements_10() const { return ___OnUpdateTimeBasedElements_10; }
	inline Action_t3771233898 ** get_address_of_OnUpdateTimeBasedElements_10() { return &___OnUpdateTimeBasedElements_10; }
	inline void set_OnUpdateTimeBasedElements_10(Action_t3771233898 * value)
	{
		___OnUpdateTimeBasedElements_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateTimeBasedElements_10, value);
	}

	inline static int32_t get_offset_of_OnFloorSwitch_11() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___OnFloorSwitch_11)); }
	inline Action_1_t1549654636 * get_OnFloorSwitch_11() const { return ___OnFloorSwitch_11; }
	inline Action_1_t1549654636 ** get_address_of_OnFloorSwitch_11() { return &___OnFloorSwitch_11; }
	inline void set_OnFloorSwitch_11(Action_1_t1549654636 * value)
	{
		___OnFloorSwitch_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFloorSwitch_11, value);
	}

	inline static int32_t get_offset_of_OnFacilityFocus_12() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___OnFacilityFocus_12)); }
	inline Action_1_t3398753846 * get_OnFacilityFocus_12() const { return ___OnFacilityFocus_12; }
	inline Action_1_t3398753846 ** get_address_of_OnFacilityFocus_12() { return &___OnFacilityFocus_12; }
	inline void set_OnFacilityFocus_12(Action_1_t3398753846 * value)
	{
		___OnFacilityFocus_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnFacilityFocus_12, value);
	}

	inline static int32_t get_offset_of_OnSearchResultSelect_13() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___OnSearchResultSelect_13)); }
	inline Action_1_t3398753846 * get_OnSearchResultSelect_13() const { return ___OnSearchResultSelect_13; }
	inline Action_1_t3398753846 ** get_address_of_OnSearchResultSelect_13() { return &___OnSearchResultSelect_13; }
	inline void set_OnSearchResultSelect_13(Action_1_t3398753846 * value)
	{
		___OnSearchResultSelect_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnSearchResultSelect_13, value);
	}

	inline static int32_t get_offset_of_OnShowSearchResults_14() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___OnShowSearchResults_14)); }
	inline Action_1_t403047693 * get_OnShowSearchResults_14() const { return ___OnShowSearchResults_14; }
	inline Action_1_t403047693 ** get_address_of_OnShowSearchResults_14() { return &___OnShowSearchResults_14; }
	inline void set_OnShowSearchResults_14(Action_1_t403047693 * value)
	{
		___OnShowSearchResults_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnShowSearchResults_14, value);
	}

	inline static int32_t get_offset_of_OnOpenTimetable_15() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___OnOpenTimetable_15)); }
	inline Action_t3771233898 * get_OnOpenTimetable_15() const { return ___OnOpenTimetable_15; }
	inline Action_t3771233898 ** get_address_of_OnOpenTimetable_15() { return &___OnOpenTimetable_15; }
	inline void set_OnOpenTimetable_15(Action_t3771233898 * value)
	{
		___OnOpenTimetable_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnOpenTimetable_15, value);
	}

	inline static int32_t get_offset_of_scaleFactorRefCanvas_16() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___scaleFactorRefCanvas_16)); }
	inline Canvas_t2727140764 * get_scaleFactorRefCanvas_16() const { return ___scaleFactorRefCanvas_16; }
	inline Canvas_t2727140764 ** get_address_of_scaleFactorRefCanvas_16() { return &___scaleFactorRefCanvas_16; }
	inline void set_scaleFactorRefCanvas_16(Canvas_t2727140764 * value)
	{
		___scaleFactorRefCanvas_16 = value;
		Il2CppCodeGenWriteBarrier(&___scaleFactorRefCanvas_16, value);
	}

	inline static int32_t get_offset_of_pool_17() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___pool_17)); }
	inline PoolSystem_t2430881163 * get_pool_17() const { return ___pool_17; }
	inline PoolSystem_t2430881163 ** get_address_of_pool_17() { return &___pool_17; }
	inline void set_pool_17(PoolSystem_t2430881163 * value)
	{
		___pool_17 = value;
		Il2CppCodeGenWriteBarrier(&___pool_17, value);
	}

	inline static int32_t get_offset_of_hudCanvas_18() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___hudCanvas_18)); }
	inline Canvas_t2727140764 * get_hudCanvas_18() const { return ___hudCanvas_18; }
	inline Canvas_t2727140764 ** get_address_of_hudCanvas_18() { return &___hudCanvas_18; }
	inline void set_hudCanvas_18(Canvas_t2727140764 * value)
	{
		___hudCanvas_18 = value;
		Il2CppCodeGenWriteBarrier(&___hudCanvas_18, value);
	}

	inline static int32_t get_offset_of_centerPanel_19() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___centerPanel_19)); }
	inline Transform_t1659122786 * get_centerPanel_19() const { return ___centerPanel_19; }
	inline Transform_t1659122786 ** get_address_of_centerPanel_19() { return &___centerPanel_19; }
	inline void set_centerPanel_19(Transform_t1659122786 * value)
	{
		___centerPanel_19 = value;
		Il2CppCodeGenWriteBarrier(&___centerPanel_19, value);
	}

	inline static int32_t get_offset_of_alertsCanvas_20() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___alertsCanvas_20)); }
	inline Canvas_t2727140764 * get_alertsCanvas_20() const { return ___alertsCanvas_20; }
	inline Canvas_t2727140764 ** get_address_of_alertsCanvas_20() { return &___alertsCanvas_20; }
	inline void set_alertsCanvas_20(Canvas_t2727140764 * value)
	{
		___alertsCanvas_20 = value;
		Il2CppCodeGenWriteBarrier(&___alertsCanvas_20, value);
	}

	inline static int32_t get_offset_of_cam_21() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___cam_21)); }
	inline CameraScript_t3510117488 * get_cam_21() const { return ___cam_21; }
	inline CameraScript_t3510117488 ** get_address_of_cam_21() { return &___cam_21; }
	inline void set_cam_21(CameraScript_t3510117488 * value)
	{
		___cam_21 = value;
		Il2CppCodeGenWriteBarrier(&___cam_21, value);
	}

	inline static int32_t get_offset_of_searchBox_22() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___searchBox_22)); }
	inline SearchBoxScript_t2166998414 * get_searchBox_22() const { return ___searchBox_22; }
	inline SearchBoxScript_t2166998414 ** get_address_of_searchBox_22() { return &___searchBox_22; }
	inline void set_searchBox_22(SearchBoxScript_t2166998414 * value)
	{
		___searchBox_22 = value;
		Il2CppCodeGenWriteBarrier(&___searchBox_22, value);
	}

	inline static int32_t get_offset_of_floorSwitcher_23() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___floorSwitcher_23)); }
	inline FloorSwitchScript_t2794668843 * get_floorSwitcher_23() const { return ___floorSwitcher_23; }
	inline FloorSwitchScript_t2794668843 ** get_address_of_floorSwitcher_23() { return &___floorSwitcher_23; }
	inline void set_floorSwitcher_23(FloorSwitchScript_t2794668843 * value)
	{
		___floorSwitcher_23 = value;
		Il2CppCodeGenWriteBarrier(&___floorSwitcher_23, value);
	}

	inline static int32_t get_offset_of_bottomPanel_24() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___bottomPanel_24)); }
	inline BottomPanelScript_t140445860 * get_bottomPanel_24() const { return ___bottomPanel_24; }
	inline BottomPanelScript_t140445860 ** get_address_of_bottomPanel_24() { return &___bottomPanel_24; }
	inline void set_bottomPanel_24(BottomPanelScript_t140445860 * value)
	{
		___bottomPanel_24 = value;
		Il2CppCodeGenWriteBarrier(&___bottomPanel_24, value);
	}

	inline static int32_t get_offset_of_openTimetableButton_25() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___openTimetableButton_25)); }
	inline RectTransform_t972643934 * get_openTimetableButton_25() const { return ___openTimetableButton_25; }
	inline RectTransform_t972643934 ** get_address_of_openTimetableButton_25() { return &___openTimetableButton_25; }
	inline void set_openTimetableButton_25(RectTransform_t972643934 * value)
	{
		___openTimetableButton_25 = value;
		Il2CppCodeGenWriteBarrier(&___openTimetableButton_25, value);
	}

	inline static int32_t get_offset_of_openExamsButton_26() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___openExamsButton_26)); }
	inline RectTransform_t972643934 * get_openExamsButton_26() const { return ___openExamsButton_26; }
	inline RectTransform_t972643934 ** get_address_of_openExamsButton_26() { return &___openExamsButton_26; }
	inline void set_openExamsButton_26(RectTransform_t972643934 * value)
	{
		___openExamsButton_26 = value;
		Il2CppCodeGenWriteBarrier(&___openExamsButton_26, value);
	}

	inline static int32_t get_offset_of_examsHeader_27() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___examsHeader_27)); }
	inline GameObject_t3674682005 * get_examsHeader_27() const { return ___examsHeader_27; }
	inline GameObject_t3674682005 ** get_address_of_examsHeader_27() { return &___examsHeader_27; }
	inline void set_examsHeader_27(GameObject_t3674682005 * value)
	{
		___examsHeader_27 = value;
		Il2CppCodeGenWriteBarrier(&___examsHeader_27, value);
	}

	inline static int32_t get_offset_of_centerPanelContainer_28() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___centerPanelContainer_28)); }
	inline Transform_t1659122786 * get_centerPanelContainer_28() const { return ___centerPanelContainer_28; }
	inline Transform_t1659122786 ** get_address_of_centerPanelContainer_28() { return &___centerPanelContainer_28; }
	inline void set_centerPanelContainer_28(Transform_t1659122786 * value)
	{
		___centerPanelContainer_28 = value;
		Il2CppCodeGenWriteBarrier(&___centerPanelContainer_28, value);
	}

	inline static int32_t get_offset_of_timetablePanel_29() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___timetablePanel_29)); }
	inline TTPanelScript_t1983791439 * get_timetablePanel_29() const { return ___timetablePanel_29; }
	inline TTPanelScript_t1983791439 ** get_address_of_timetablePanel_29() { return &___timetablePanel_29; }
	inline void set_timetablePanel_29(TTPanelScript_t1983791439 * value)
	{
		___timetablePanel_29 = value;
		Il2CppCodeGenWriteBarrier(&___timetablePanel_29, value);
	}

	inline static int32_t get_offset_of_ready_30() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___ready_30)); }
	inline bool get_ready_30() const { return ___ready_30; }
	inline bool* get_address_of_ready_30() { return &___ready_30; }
	inline void set_ready_30(bool value)
	{
		___ready_30 = value;
	}

	inline static int32_t get_offset_of_lastDeepLink_31() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___lastDeepLink_31)); }
	inline String_t* get_lastDeepLink_31() const { return ___lastDeepLink_31; }
	inline String_t** get_address_of_lastDeepLink_31() { return &___lastDeepLink_31; }
	inline void set_lastDeepLink_31(String_t* value)
	{
		___lastDeepLink_31 = value;
		Il2CppCodeGenWriteBarrier(&___lastDeepLink_31, value);
	}

	inline static int32_t get_offset_of__savedSkybox_32() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ____savedSkybox_32)); }
	inline Material_t3870600107 * get__savedSkybox_32() const { return ____savedSkybox_32; }
	inline Material_t3870600107 ** get_address_of__savedSkybox_32() { return &____savedSkybox_32; }
	inline void set__savedSkybox_32(Material_t3870600107 * value)
	{
		____savedSkybox_32 = value;
		Il2CppCodeGenWriteBarrier(&____savedSkybox_32, value);
	}

	inline static int32_t get_offset_of_webViewObject_33() { return static_cast<int32_t>(offsetof(AppScript_t3488119340, ___webViewObject_33)); }
	inline WebViewObject_t388577432 * get_webViewObject_33() const { return ___webViewObject_33; }
	inline WebViewObject_t388577432 ** get_address_of_webViewObject_33() { return &___webViewObject_33; }
	inline void set_webViewObject_33(WebViewObject_t388577432 * value)
	{
		___webViewObject_33 = value;
		Il2CppCodeGenWriteBarrier(&___webViewObject_33, value);
	}
};

struct AppScript_t3488119340_StaticFields
{
public:
	// System.Boolean AppScript::DEBUG
	bool ___DEBUG_2;
	// System.Boolean AppScript::CLEAN_EVERYTHING_ON_START
	bool ___CLEAN_EVERYTHING_ON_START_3;
	// System.Boolean AppScript::UPDATE_FACILITIES_DB_ON_START
	bool ___UPDATE_FACILITIES_DB_ON_START_4;
	// AppScript AppScript::sharedInstance
	AppScript_t3488119340 * ___sharedInstance_5;
	// System.Action AppScript::<>f__am$cache20
	Action_t3771233898 * ___U3CU3Ef__amU24cache20_34;
	// System.Action`1<System.Int32> AppScript::<>f__am$cache21
	Action_1_t1549654636 * ___U3CU3Ef__amU24cache21_35;
	// System.Action`1<FacilityScript> AppScript::<>f__am$cache22
	Action_1_t3398753846 * ___U3CU3Ef__amU24cache22_36;
	// System.Action`1<FacilityScript> AppScript::<>f__am$cache23
	Action_1_t3398753846 * ___U3CU3Ef__amU24cache23_37;
	// System.Action`1<System.String> AppScript::<>f__am$cache24
	Action_1_t403047693 * ___U3CU3Ef__amU24cache24_38;
	// System.Action AppScript::<>f__am$cache25
	Action_t3771233898 * ___U3CU3Ef__amU24cache25_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> AppScript::<>f__switch$map1
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map1_40;

public:
	inline static int32_t get_offset_of_DEBUG_2() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___DEBUG_2)); }
	inline bool get_DEBUG_2() const { return ___DEBUG_2; }
	inline bool* get_address_of_DEBUG_2() { return &___DEBUG_2; }
	inline void set_DEBUG_2(bool value)
	{
		___DEBUG_2 = value;
	}

	inline static int32_t get_offset_of_CLEAN_EVERYTHING_ON_START_3() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___CLEAN_EVERYTHING_ON_START_3)); }
	inline bool get_CLEAN_EVERYTHING_ON_START_3() const { return ___CLEAN_EVERYTHING_ON_START_3; }
	inline bool* get_address_of_CLEAN_EVERYTHING_ON_START_3() { return &___CLEAN_EVERYTHING_ON_START_3; }
	inline void set_CLEAN_EVERYTHING_ON_START_3(bool value)
	{
		___CLEAN_EVERYTHING_ON_START_3 = value;
	}

	inline static int32_t get_offset_of_UPDATE_FACILITIES_DB_ON_START_4() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___UPDATE_FACILITIES_DB_ON_START_4)); }
	inline bool get_UPDATE_FACILITIES_DB_ON_START_4() const { return ___UPDATE_FACILITIES_DB_ON_START_4; }
	inline bool* get_address_of_UPDATE_FACILITIES_DB_ON_START_4() { return &___UPDATE_FACILITIES_DB_ON_START_4; }
	inline void set_UPDATE_FACILITIES_DB_ON_START_4(bool value)
	{
		___UPDATE_FACILITIES_DB_ON_START_4 = value;
	}

	inline static int32_t get_offset_of_sharedInstance_5() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___sharedInstance_5)); }
	inline AppScript_t3488119340 * get_sharedInstance_5() const { return ___sharedInstance_5; }
	inline AppScript_t3488119340 ** get_address_of_sharedInstance_5() { return &___sharedInstance_5; }
	inline void set_sharedInstance_5(AppScript_t3488119340 * value)
	{
		___sharedInstance_5 = value;
		Il2CppCodeGenWriteBarrier(&___sharedInstance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_34() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___U3CU3Ef__amU24cache20_34)); }
	inline Action_t3771233898 * get_U3CU3Ef__amU24cache20_34() const { return ___U3CU3Ef__amU24cache20_34; }
	inline Action_t3771233898 ** get_address_of_U3CU3Ef__amU24cache20_34() { return &___U3CU3Ef__amU24cache20_34; }
	inline void set_U3CU3Ef__amU24cache20_34(Action_t3771233898 * value)
	{
		___U3CU3Ef__amU24cache20_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache20_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache21_35() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___U3CU3Ef__amU24cache21_35)); }
	inline Action_1_t1549654636 * get_U3CU3Ef__amU24cache21_35() const { return ___U3CU3Ef__amU24cache21_35; }
	inline Action_1_t1549654636 ** get_address_of_U3CU3Ef__amU24cache21_35() { return &___U3CU3Ef__amU24cache21_35; }
	inline void set_U3CU3Ef__amU24cache21_35(Action_1_t1549654636 * value)
	{
		___U3CU3Ef__amU24cache21_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache21_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache22_36() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___U3CU3Ef__amU24cache22_36)); }
	inline Action_1_t3398753846 * get_U3CU3Ef__amU24cache22_36() const { return ___U3CU3Ef__amU24cache22_36; }
	inline Action_1_t3398753846 ** get_address_of_U3CU3Ef__amU24cache22_36() { return &___U3CU3Ef__amU24cache22_36; }
	inline void set_U3CU3Ef__amU24cache22_36(Action_1_t3398753846 * value)
	{
		___U3CU3Ef__amU24cache22_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache22_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache23_37() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___U3CU3Ef__amU24cache23_37)); }
	inline Action_1_t3398753846 * get_U3CU3Ef__amU24cache23_37() const { return ___U3CU3Ef__amU24cache23_37; }
	inline Action_1_t3398753846 ** get_address_of_U3CU3Ef__amU24cache23_37() { return &___U3CU3Ef__amU24cache23_37; }
	inline void set_U3CU3Ef__amU24cache23_37(Action_1_t3398753846 * value)
	{
		___U3CU3Ef__amU24cache23_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache23_37, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache24_38() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___U3CU3Ef__amU24cache24_38)); }
	inline Action_1_t403047693 * get_U3CU3Ef__amU24cache24_38() const { return ___U3CU3Ef__amU24cache24_38; }
	inline Action_1_t403047693 ** get_address_of_U3CU3Ef__amU24cache24_38() { return &___U3CU3Ef__amU24cache24_38; }
	inline void set_U3CU3Ef__amU24cache24_38(Action_1_t403047693 * value)
	{
		___U3CU3Ef__amU24cache24_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache24_38, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache25_39() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___U3CU3Ef__amU24cache25_39)); }
	inline Action_t3771233898 * get_U3CU3Ef__amU24cache25_39() const { return ___U3CU3Ef__amU24cache25_39; }
	inline Action_t3771233898 ** get_address_of_U3CU3Ef__amU24cache25_39() { return &___U3CU3Ef__amU24cache25_39; }
	inline void set_U3CU3Ef__amU24cache25_39(Action_t3771233898 * value)
	{
		___U3CU3Ef__amU24cache25_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache25_39, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_40() { return static_cast<int32_t>(offsetof(AppScript_t3488119340_StaticFields, ___U3CU3Ef__switchU24map1_40)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map1_40() const { return ___U3CU3Ef__switchU24map1_40; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map1_40() { return &___U3CU3Ef__switchU24map1_40; }
	inline void set_U3CU3Ef__switchU24map1_40(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map1_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
