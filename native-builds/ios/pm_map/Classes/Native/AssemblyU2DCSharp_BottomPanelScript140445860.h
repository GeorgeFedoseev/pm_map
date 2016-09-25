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
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.Action`1<FacilityScript>
struct Action_1_t3398753846;
// System.Collections.Generic.List`1<FacilityScript>
struct List_1_t76155966;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BottomPanelScript
struct  BottomPanelScript_t140445860  : public MonoBehaviour_t667441552
{
public:
	// AppScript BottomPanelScript::app
	AppScript_t3488119340 * ___app_2;
	// UnityEngine.RectTransform BottomPanelScript::rect
	RectTransform_t972643934 * ___rect_3;
	// UnityEngine.UI.ScrollRect BottomPanelScript::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_4;
	// UnityEngine.RectTransform BottomPanelScript::rowsContainer
	RectTransform_t972643934 * ___rowsContainer_5;
	// UnityEngine.UI.Text BottomPanelScript::title
	Text_t9039225 * ___title_6;
	// UnityEngine.UI.Text BottomPanelScript::pageCounter
	Text_t9039225 * ___pageCounter_7;
	// System.Action`1<FacilityScript> BottomPanelScript::OnSnapToFacility
	Action_1_t3398753846 * ___OnSnapToFacility_8;
	// System.Collections.Generic.List`1<FacilityScript> BottomPanelScript::facilities
	List_1_t76155966 * ___facilities_9;
	// System.Boolean BottomPanelScript::orangeMode
	bool ___orangeMode_10;
	// UnityEngine.Vector2 BottomPanelScript::targetSnapPosition
	Vector2_t4282066565  ___targetSnapPosition_11;
	// System.Boolean BottomPanelScript::dragging
	bool ___dragging_12;
	// UnityEngine.Vector2 BottomPanelScript::drag_start_pos
	Vector2_t4282066565  ___drag_start_pos_13;
	// System.Single BottomPanelScript::drag_start_panel_y
	float ___drag_start_panel_y_14;
	// UnityEngine.Vector2 BottomPanelScript::targetFoldPosition
	Vector2_t4282066565  ___targetFoldPosition_15;
	// System.Single BottomPanelScript::foldSpeed
	float ___foldSpeed_16;
	// System.Boolean BottomPanelScript::doFold
	bool ___doFold_17;
	// System.Boolean BottomPanelScript::folded
	bool ___folded_18;
	// System.Boolean BottomPanelScript::hidden
	bool ___hidden_19;
	// System.Single BottomPanelScript::halfFoldDistance
	float ___halfFoldDistance_20;
	// System.Single BottomPanelScript::fullFoldDistance
	float ___fullFoldDistance_21;
	// UnityEngine.Vector2 BottomPanelScript::oldScreenSize
	Vector2_t4282066565  ___oldScreenSize_22;

public:
	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___app_2)); }
	inline AppScript_t3488119340 * get_app_2() const { return ___app_2; }
	inline AppScript_t3488119340 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(AppScript_t3488119340 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_2, value);
	}

	inline static int32_t get_offset_of_rect_3() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___rect_3)); }
	inline RectTransform_t972643934 * get_rect_3() const { return ___rect_3; }
	inline RectTransform_t972643934 ** get_address_of_rect_3() { return &___rect_3; }
	inline void set_rect_3(RectTransform_t972643934 * value)
	{
		___rect_3 = value;
		Il2CppCodeGenWriteBarrier(&___rect_3, value);
	}

	inline static int32_t get_offset_of_scrollRect_4() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___scrollRect_4)); }
	inline ScrollRect_t3606982749 * get_scrollRect_4() const { return ___scrollRect_4; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_4() { return &___scrollRect_4; }
	inline void set_scrollRect_4(ScrollRect_t3606982749 * value)
	{
		___scrollRect_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_4, value);
	}

	inline static int32_t get_offset_of_rowsContainer_5() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___rowsContainer_5)); }
	inline RectTransform_t972643934 * get_rowsContainer_5() const { return ___rowsContainer_5; }
	inline RectTransform_t972643934 ** get_address_of_rowsContainer_5() { return &___rowsContainer_5; }
	inline void set_rowsContainer_5(RectTransform_t972643934 * value)
	{
		___rowsContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&___rowsContainer_5, value);
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___title_6)); }
	inline Text_t9039225 * get_title_6() const { return ___title_6; }
	inline Text_t9039225 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(Text_t9039225 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_pageCounter_7() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___pageCounter_7)); }
	inline Text_t9039225 * get_pageCounter_7() const { return ___pageCounter_7; }
	inline Text_t9039225 ** get_address_of_pageCounter_7() { return &___pageCounter_7; }
	inline void set_pageCounter_7(Text_t9039225 * value)
	{
		___pageCounter_7 = value;
		Il2CppCodeGenWriteBarrier(&___pageCounter_7, value);
	}

	inline static int32_t get_offset_of_OnSnapToFacility_8() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___OnSnapToFacility_8)); }
	inline Action_1_t3398753846 * get_OnSnapToFacility_8() const { return ___OnSnapToFacility_8; }
	inline Action_1_t3398753846 ** get_address_of_OnSnapToFacility_8() { return &___OnSnapToFacility_8; }
	inline void set_OnSnapToFacility_8(Action_1_t3398753846 * value)
	{
		___OnSnapToFacility_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnSnapToFacility_8, value);
	}

	inline static int32_t get_offset_of_facilities_9() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___facilities_9)); }
	inline List_1_t76155966 * get_facilities_9() const { return ___facilities_9; }
	inline List_1_t76155966 ** get_address_of_facilities_9() { return &___facilities_9; }
	inline void set_facilities_9(List_1_t76155966 * value)
	{
		___facilities_9 = value;
		Il2CppCodeGenWriteBarrier(&___facilities_9, value);
	}

	inline static int32_t get_offset_of_orangeMode_10() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___orangeMode_10)); }
	inline bool get_orangeMode_10() const { return ___orangeMode_10; }
	inline bool* get_address_of_orangeMode_10() { return &___orangeMode_10; }
	inline void set_orangeMode_10(bool value)
	{
		___orangeMode_10 = value;
	}

	inline static int32_t get_offset_of_targetSnapPosition_11() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___targetSnapPosition_11)); }
	inline Vector2_t4282066565  get_targetSnapPosition_11() const { return ___targetSnapPosition_11; }
	inline Vector2_t4282066565 * get_address_of_targetSnapPosition_11() { return &___targetSnapPosition_11; }
	inline void set_targetSnapPosition_11(Vector2_t4282066565  value)
	{
		___targetSnapPosition_11 = value;
	}

	inline static int32_t get_offset_of_dragging_12() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___dragging_12)); }
	inline bool get_dragging_12() const { return ___dragging_12; }
	inline bool* get_address_of_dragging_12() { return &___dragging_12; }
	inline void set_dragging_12(bool value)
	{
		___dragging_12 = value;
	}

	inline static int32_t get_offset_of_drag_start_pos_13() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___drag_start_pos_13)); }
	inline Vector2_t4282066565  get_drag_start_pos_13() const { return ___drag_start_pos_13; }
	inline Vector2_t4282066565 * get_address_of_drag_start_pos_13() { return &___drag_start_pos_13; }
	inline void set_drag_start_pos_13(Vector2_t4282066565  value)
	{
		___drag_start_pos_13 = value;
	}

	inline static int32_t get_offset_of_drag_start_panel_y_14() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___drag_start_panel_y_14)); }
	inline float get_drag_start_panel_y_14() const { return ___drag_start_panel_y_14; }
	inline float* get_address_of_drag_start_panel_y_14() { return &___drag_start_panel_y_14; }
	inline void set_drag_start_panel_y_14(float value)
	{
		___drag_start_panel_y_14 = value;
	}

	inline static int32_t get_offset_of_targetFoldPosition_15() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___targetFoldPosition_15)); }
	inline Vector2_t4282066565  get_targetFoldPosition_15() const { return ___targetFoldPosition_15; }
	inline Vector2_t4282066565 * get_address_of_targetFoldPosition_15() { return &___targetFoldPosition_15; }
	inline void set_targetFoldPosition_15(Vector2_t4282066565  value)
	{
		___targetFoldPosition_15 = value;
	}

	inline static int32_t get_offset_of_foldSpeed_16() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___foldSpeed_16)); }
	inline float get_foldSpeed_16() const { return ___foldSpeed_16; }
	inline float* get_address_of_foldSpeed_16() { return &___foldSpeed_16; }
	inline void set_foldSpeed_16(float value)
	{
		___foldSpeed_16 = value;
	}

	inline static int32_t get_offset_of_doFold_17() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___doFold_17)); }
	inline bool get_doFold_17() const { return ___doFold_17; }
	inline bool* get_address_of_doFold_17() { return &___doFold_17; }
	inline void set_doFold_17(bool value)
	{
		___doFold_17 = value;
	}

	inline static int32_t get_offset_of_folded_18() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___folded_18)); }
	inline bool get_folded_18() const { return ___folded_18; }
	inline bool* get_address_of_folded_18() { return &___folded_18; }
	inline void set_folded_18(bool value)
	{
		___folded_18 = value;
	}

	inline static int32_t get_offset_of_hidden_19() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___hidden_19)); }
	inline bool get_hidden_19() const { return ___hidden_19; }
	inline bool* get_address_of_hidden_19() { return &___hidden_19; }
	inline void set_hidden_19(bool value)
	{
		___hidden_19 = value;
	}

	inline static int32_t get_offset_of_halfFoldDistance_20() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___halfFoldDistance_20)); }
	inline float get_halfFoldDistance_20() const { return ___halfFoldDistance_20; }
	inline float* get_address_of_halfFoldDistance_20() { return &___halfFoldDistance_20; }
	inline void set_halfFoldDistance_20(float value)
	{
		___halfFoldDistance_20 = value;
	}

	inline static int32_t get_offset_of_fullFoldDistance_21() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___fullFoldDistance_21)); }
	inline float get_fullFoldDistance_21() const { return ___fullFoldDistance_21; }
	inline float* get_address_of_fullFoldDistance_21() { return &___fullFoldDistance_21; }
	inline void set_fullFoldDistance_21(float value)
	{
		___fullFoldDistance_21 = value;
	}

	inline static int32_t get_offset_of_oldScreenSize_22() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860, ___oldScreenSize_22)); }
	inline Vector2_t4282066565  get_oldScreenSize_22() const { return ___oldScreenSize_22; }
	inline Vector2_t4282066565 * get_address_of_oldScreenSize_22() { return &___oldScreenSize_22; }
	inline void set_oldScreenSize_22(Vector2_t4282066565  value)
	{
		___oldScreenSize_22 = value;
	}
};

struct BottomPanelScript_t140445860_StaticFields
{
public:
	// System.Action`1<FacilityScript> BottomPanelScript::<>f__am$cache15
	Action_1_t3398753846 * ___U3CU3Ef__amU24cache15_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_23() { return static_cast<int32_t>(offsetof(BottomPanelScript_t140445860_StaticFields, ___U3CU3Ef__amU24cache15_23)); }
	inline Action_1_t3398753846 * get_U3CU3Ef__amU24cache15_23() const { return ___U3CU3Ef__amU24cache15_23; }
	inline Action_1_t3398753846 ** get_address_of_U3CU3Ef__amU24cache15_23() { return &___U3CU3Ef__amU24cache15_23; }
	inline void set_U3CU3Ef__amU24cache15_23(Action_1_t3398753846 * value)
	{
		___U3CU3Ef__amU24cache15_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
