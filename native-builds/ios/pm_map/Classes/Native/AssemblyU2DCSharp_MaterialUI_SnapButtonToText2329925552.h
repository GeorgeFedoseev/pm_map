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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SnapButtonToText
struct  SnapButtonToText_t2329925552  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform MaterialUI.SnapButtonToText::buttonRectTransform
	RectTransform_t972643934 * ___buttonRectTransform_2;
	// System.Boolean MaterialUI.SnapButtonToText::snapEveryFrame
	bool ___snapEveryFrame_3;
	// UnityEngine.RectTransform MaterialUI.SnapButtonToText::thisRectTransform
	RectTransform_t972643934 * ___thisRectTransform_4;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::textSize
	Vector2_t4282066565  ___textSize_5;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::basePadding
	Vector2_t4282066565  ___basePadding_6;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::buttonSize
	Vector2_t4282066565  ___buttonSize_7;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::buttonPadding
	Vector2_t4282066565  ___buttonPadding_8;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::finalSize
	Vector2_t4282066565  ___finalSize_9;

public:
	inline static int32_t get_offset_of_buttonRectTransform_2() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___buttonRectTransform_2)); }
	inline RectTransform_t972643934 * get_buttonRectTransform_2() const { return ___buttonRectTransform_2; }
	inline RectTransform_t972643934 ** get_address_of_buttonRectTransform_2() { return &___buttonRectTransform_2; }
	inline void set_buttonRectTransform_2(RectTransform_t972643934 * value)
	{
		___buttonRectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonRectTransform_2, value);
	}

	inline static int32_t get_offset_of_snapEveryFrame_3() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___snapEveryFrame_3)); }
	inline bool get_snapEveryFrame_3() const { return ___snapEveryFrame_3; }
	inline bool* get_address_of_snapEveryFrame_3() { return &___snapEveryFrame_3; }
	inline void set_snapEveryFrame_3(bool value)
	{
		___snapEveryFrame_3 = value;
	}

	inline static int32_t get_offset_of_thisRectTransform_4() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___thisRectTransform_4)); }
	inline RectTransform_t972643934 * get_thisRectTransform_4() const { return ___thisRectTransform_4; }
	inline RectTransform_t972643934 ** get_address_of_thisRectTransform_4() { return &___thisRectTransform_4; }
	inline void set_thisRectTransform_4(RectTransform_t972643934 * value)
	{
		___thisRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisRectTransform_4, value);
	}

	inline static int32_t get_offset_of_textSize_5() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___textSize_5)); }
	inline Vector2_t4282066565  get_textSize_5() const { return ___textSize_5; }
	inline Vector2_t4282066565 * get_address_of_textSize_5() { return &___textSize_5; }
	inline void set_textSize_5(Vector2_t4282066565  value)
	{
		___textSize_5 = value;
	}

	inline static int32_t get_offset_of_basePadding_6() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___basePadding_6)); }
	inline Vector2_t4282066565  get_basePadding_6() const { return ___basePadding_6; }
	inline Vector2_t4282066565 * get_address_of_basePadding_6() { return &___basePadding_6; }
	inline void set_basePadding_6(Vector2_t4282066565  value)
	{
		___basePadding_6 = value;
	}

	inline static int32_t get_offset_of_buttonSize_7() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___buttonSize_7)); }
	inline Vector2_t4282066565  get_buttonSize_7() const { return ___buttonSize_7; }
	inline Vector2_t4282066565 * get_address_of_buttonSize_7() { return &___buttonSize_7; }
	inline void set_buttonSize_7(Vector2_t4282066565  value)
	{
		___buttonSize_7 = value;
	}

	inline static int32_t get_offset_of_buttonPadding_8() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___buttonPadding_8)); }
	inline Vector2_t4282066565  get_buttonPadding_8() const { return ___buttonPadding_8; }
	inline Vector2_t4282066565 * get_address_of_buttonPadding_8() { return &___buttonPadding_8; }
	inline void set_buttonPadding_8(Vector2_t4282066565  value)
	{
		___buttonPadding_8 = value;
	}

	inline static int32_t get_offset_of_finalSize_9() { return static_cast<int32_t>(offsetof(SnapButtonToText_t2329925552, ___finalSize_9)); }
	inline Vector2_t4282066565  get_finalSize_9() const { return ___finalSize_9; }
	inline Vector2_t4282066565 * get_address_of_finalSize_9() { return &___finalSize_9; }
	inline void set_finalSize_9(Vector2_t4282066565  value)
	{
		___finalSize_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
