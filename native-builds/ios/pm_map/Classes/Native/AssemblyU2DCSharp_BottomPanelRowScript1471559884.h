#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;
// BottomPanelScript
struct BottomPanelScript_t140445860;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t1596995480;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BottomPanelRowScript
struct  BottomPanelRowScript_t1471559884  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform BottomPanelRowScript::rect
	RectTransform_t972643934 * ___rect_2;
	// BottomPanelScript BottomPanelRowScript::bottomPanel
	BottomPanelScript_t140445860 * ___bottomPanel_3;
	// UnityEngine.Vector2 BottomPanelRowScript::oldSize
	Vector2_t4282066565  ___oldSize_4;
	// UnityEngine.UI.LayoutElement BottomPanelRowScript::layoutElem
	LayoutElement_t1596995480 * ___layoutElem_5;
	// UnityEngine.UI.Text BottomPanelRowScript::title
	Text_t9039225 * ___title_6;
	// UnityEngine.UI.Text BottomPanelRowScript::desc
	Text_t9039225 * ___desc_7;
	// UnityEngine.UI.Image BottomPanelRowScript::icon
	Image_t538875265 * ___icon_8;

public:
	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(BottomPanelRowScript_t1471559884, ___rect_2)); }
	inline RectTransform_t972643934 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t972643934 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t972643934 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier(&___rect_2, value);
	}

	inline static int32_t get_offset_of_bottomPanel_3() { return static_cast<int32_t>(offsetof(BottomPanelRowScript_t1471559884, ___bottomPanel_3)); }
	inline BottomPanelScript_t140445860 * get_bottomPanel_3() const { return ___bottomPanel_3; }
	inline BottomPanelScript_t140445860 ** get_address_of_bottomPanel_3() { return &___bottomPanel_3; }
	inline void set_bottomPanel_3(BottomPanelScript_t140445860 * value)
	{
		___bottomPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___bottomPanel_3, value);
	}

	inline static int32_t get_offset_of_oldSize_4() { return static_cast<int32_t>(offsetof(BottomPanelRowScript_t1471559884, ___oldSize_4)); }
	inline Vector2_t4282066565  get_oldSize_4() const { return ___oldSize_4; }
	inline Vector2_t4282066565 * get_address_of_oldSize_4() { return &___oldSize_4; }
	inline void set_oldSize_4(Vector2_t4282066565  value)
	{
		___oldSize_4 = value;
	}

	inline static int32_t get_offset_of_layoutElem_5() { return static_cast<int32_t>(offsetof(BottomPanelRowScript_t1471559884, ___layoutElem_5)); }
	inline LayoutElement_t1596995480 * get_layoutElem_5() const { return ___layoutElem_5; }
	inline LayoutElement_t1596995480 ** get_address_of_layoutElem_5() { return &___layoutElem_5; }
	inline void set_layoutElem_5(LayoutElement_t1596995480 * value)
	{
		___layoutElem_5 = value;
		Il2CppCodeGenWriteBarrier(&___layoutElem_5, value);
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(BottomPanelRowScript_t1471559884, ___title_6)); }
	inline Text_t9039225 * get_title_6() const { return ___title_6; }
	inline Text_t9039225 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(Text_t9039225 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_desc_7() { return static_cast<int32_t>(offsetof(BottomPanelRowScript_t1471559884, ___desc_7)); }
	inline Text_t9039225 * get_desc_7() const { return ___desc_7; }
	inline Text_t9039225 ** get_address_of_desc_7() { return &___desc_7; }
	inline void set_desc_7(Text_t9039225 * value)
	{
		___desc_7 = value;
		Il2CppCodeGenWriteBarrier(&___desc_7, value);
	}

	inline static int32_t get_offset_of_icon_8() { return static_cast<int32_t>(offsetof(BottomPanelRowScript_t1471559884, ___icon_8)); }
	inline Image_t538875265 * get_icon_8() const { return ___icon_8; }
	inline Image_t538875265 ** get_address_of_icon_8() { return &___icon_8; }
	inline void set_icon_8(Image_t538875265 * value)
	{
		___icon_8 = value;
		Il2CppCodeGenWriteBarrier(&___icon_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
