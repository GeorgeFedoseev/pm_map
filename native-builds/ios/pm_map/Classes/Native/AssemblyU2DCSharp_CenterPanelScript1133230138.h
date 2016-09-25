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
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.UI.Button
struct Button_t3896396478;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CenterPanelScript
struct  CenterPanelScript_t1133230138  : public MonoBehaviour_t667441552
{
public:
	// AppScript CenterPanelScript::app
	AppScript_t3488119340 * ___app_2;
	// UnityEngine.RectTransform CenterPanelScript::rect
	RectTransform_t972643934 * ___rect_3;
	// TMPro.TextMeshProUGUI CenterPanelScript::title
	TextMeshProUGUI_t3603375195 * ___title_4;
	// UnityEngine.UI.ScrollRect CenterPanelScript::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_5;
	// UnityEngine.RectTransform CenterPanelScript::pagesContainer
	RectTransform_t972643934 * ___pagesContainer_6;
	// UnityEngine.UI.Button CenterPanelScript::backButton
	Button_t3896396478 * ___backButton_7;
	// UnityEngine.Vector2 CenterPanelScript::targetSnapPosition
	Vector2_t4282066565  ___targetSnapPosition_8;

public:
	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(CenterPanelScript_t1133230138, ___app_2)); }
	inline AppScript_t3488119340 * get_app_2() const { return ___app_2; }
	inline AppScript_t3488119340 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(AppScript_t3488119340 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_2, value);
	}

	inline static int32_t get_offset_of_rect_3() { return static_cast<int32_t>(offsetof(CenterPanelScript_t1133230138, ___rect_3)); }
	inline RectTransform_t972643934 * get_rect_3() const { return ___rect_3; }
	inline RectTransform_t972643934 ** get_address_of_rect_3() { return &___rect_3; }
	inline void set_rect_3(RectTransform_t972643934 * value)
	{
		___rect_3 = value;
		Il2CppCodeGenWriteBarrier(&___rect_3, value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(CenterPanelScript_t1133230138, ___title_4)); }
	inline TextMeshProUGUI_t3603375195 * get_title_4() const { return ___title_4; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(TextMeshProUGUI_t3603375195 * value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier(&___title_4, value);
	}

	inline static int32_t get_offset_of_scrollRect_5() { return static_cast<int32_t>(offsetof(CenterPanelScript_t1133230138, ___scrollRect_5)); }
	inline ScrollRect_t3606982749 * get_scrollRect_5() const { return ___scrollRect_5; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_5() { return &___scrollRect_5; }
	inline void set_scrollRect_5(ScrollRect_t3606982749 * value)
	{
		___scrollRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_5, value);
	}

	inline static int32_t get_offset_of_pagesContainer_6() { return static_cast<int32_t>(offsetof(CenterPanelScript_t1133230138, ___pagesContainer_6)); }
	inline RectTransform_t972643934 * get_pagesContainer_6() const { return ___pagesContainer_6; }
	inline RectTransform_t972643934 ** get_address_of_pagesContainer_6() { return &___pagesContainer_6; }
	inline void set_pagesContainer_6(RectTransform_t972643934 * value)
	{
		___pagesContainer_6 = value;
		Il2CppCodeGenWriteBarrier(&___pagesContainer_6, value);
	}

	inline static int32_t get_offset_of_backButton_7() { return static_cast<int32_t>(offsetof(CenterPanelScript_t1133230138, ___backButton_7)); }
	inline Button_t3896396478 * get_backButton_7() const { return ___backButton_7; }
	inline Button_t3896396478 ** get_address_of_backButton_7() { return &___backButton_7; }
	inline void set_backButton_7(Button_t3896396478 * value)
	{
		___backButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_7, value);
	}

	inline static int32_t get_offset_of_targetSnapPosition_8() { return static_cast<int32_t>(offsetof(CenterPanelScript_t1133230138, ___targetSnapPosition_8)); }
	inline Vector2_t4282066565  get_targetSnapPosition_8() const { return ___targetSnapPosition_8; }
	inline Vector2_t4282066565 * get_address_of_targetSnapPosition_8() { return &___targetSnapPosition_8; }
	inline void set_targetSnapPosition_8(Vector2_t4282066565  value)
	{
		___targetSnapPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
