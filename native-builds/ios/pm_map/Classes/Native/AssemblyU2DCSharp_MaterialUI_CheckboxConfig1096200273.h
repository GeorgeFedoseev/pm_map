#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_t4178758561;
// MaterialUI.RippleConfig
struct RippleConfig_t2823880126;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.CheckboxConfig
struct  CheckboxConfig_t1096200273  : public MonoBehaviour_t667441552
{
public:
	// System.Single MaterialUI.CheckboxConfig::animationDuration
	float ___animationDuration_2;
	// UnityEngine.Color MaterialUI.CheckboxConfig::onColor
	Color_t4194546905  ___onColor_3;
	// UnityEngine.Color MaterialUI.CheckboxConfig::offColor
	Color_t4194546905  ___offColor_4;
	// UnityEngine.Color MaterialUI.CheckboxConfig::disabledColor
	Color_t4194546905  ___disabledColor_5;
	// System.Boolean MaterialUI.CheckboxConfig::changeTextColor
	bool ___changeTextColor_6;
	// UnityEngine.Color MaterialUI.CheckboxConfig::textNormalColor
	Color_t4194546905  ___textNormalColor_7;
	// UnityEngine.Color MaterialUI.CheckboxConfig::textDisabledColor
	Color_t4194546905  ___textDisabledColor_8;
	// System.Boolean MaterialUI.CheckboxConfig::changeRippleColor
	bool ___changeRippleColor_9;
	// UnityEngine.UI.Image MaterialUI.CheckboxConfig::checkImage
	Image_t538875265 * ___checkImage_10;
	// UnityEngine.UI.Image MaterialUI.CheckboxConfig::frameImage
	Image_t538875265 * ___frameImage_11;
	// UnityEngine.UI.Text MaterialUI.CheckboxConfig::text
	Text_t9039225 * ___text_12;
	// UnityEngine.RectTransform MaterialUI.CheckboxConfig::checkRectTransform
	RectTransform_t972643934 * ___checkRectTransform_13;
	// UnityEngine.CanvasGroup MaterialUI.CheckboxConfig::frameCanvasGroup
	CanvasGroup_t3702418109 * ___frameCanvasGroup_14;
	// MaterialUI.CheckBoxToggler MaterialUI.CheckboxConfig::checkBoxToggler
	CheckBoxToggler_t4178758561 * ___checkBoxToggler_15;
	// MaterialUI.RippleConfig MaterialUI.CheckboxConfig::rippleConfig
	RippleConfig_t2823880126 * ___rippleConfig_16;
	// UnityEngine.UI.Toggle MaterialUI.CheckboxConfig::toggle
	Toggle_t110812896 * ___toggle_17;
	// System.Boolean MaterialUI.CheckboxConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_18;
	// System.Boolean MaterialUI.CheckboxConfig::lastToggleState
	bool ___lastToggleState_19;
	// System.Single MaterialUI.CheckboxConfig::currentCheckSize
	float ___currentCheckSize_20;
	// UnityEngine.Color MaterialUI.CheckboxConfig::currentColor
	Color_t4194546905  ___currentColor_21;
	// UnityEngine.Color MaterialUI.CheckboxConfig::currentTextColor
	Color_t4194546905  ___currentTextColor_22;
	// System.Single MaterialUI.CheckboxConfig::currentFrameAlpha
	float ___currentFrameAlpha_23;
	// UnityEngine.Vector3 MaterialUI.CheckboxConfig::tempVector3
	Vector3_t4282066566  ___tempVector3_24;
	// UnityEngine.Color MaterialUI.CheckboxConfig::tempColor
	Color_t4194546905  ___tempColor_25;
	// System.Int32 MaterialUI.CheckboxConfig::state
	int32_t ___state_26;
	// System.Single MaterialUI.CheckboxConfig::animStartTime
	float ___animStartTime_27;
	// System.Single MaterialUI.CheckboxConfig::animDeltaTime
	float ___animDeltaTime_28;

public:
	inline static int32_t get_offset_of_animationDuration_2() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___animationDuration_2)); }
	inline float get_animationDuration_2() const { return ___animationDuration_2; }
	inline float* get_address_of_animationDuration_2() { return &___animationDuration_2; }
	inline void set_animationDuration_2(float value)
	{
		___animationDuration_2 = value;
	}

	inline static int32_t get_offset_of_onColor_3() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___onColor_3)); }
	inline Color_t4194546905  get_onColor_3() const { return ___onColor_3; }
	inline Color_t4194546905 * get_address_of_onColor_3() { return &___onColor_3; }
	inline void set_onColor_3(Color_t4194546905  value)
	{
		___onColor_3 = value;
	}

	inline static int32_t get_offset_of_offColor_4() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___offColor_4)); }
	inline Color_t4194546905  get_offColor_4() const { return ___offColor_4; }
	inline Color_t4194546905 * get_address_of_offColor_4() { return &___offColor_4; }
	inline void set_offColor_4(Color_t4194546905  value)
	{
		___offColor_4 = value;
	}

	inline static int32_t get_offset_of_disabledColor_5() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___disabledColor_5)); }
	inline Color_t4194546905  get_disabledColor_5() const { return ___disabledColor_5; }
	inline Color_t4194546905 * get_address_of_disabledColor_5() { return &___disabledColor_5; }
	inline void set_disabledColor_5(Color_t4194546905  value)
	{
		___disabledColor_5 = value;
	}

	inline static int32_t get_offset_of_changeTextColor_6() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___changeTextColor_6)); }
	inline bool get_changeTextColor_6() const { return ___changeTextColor_6; }
	inline bool* get_address_of_changeTextColor_6() { return &___changeTextColor_6; }
	inline void set_changeTextColor_6(bool value)
	{
		___changeTextColor_6 = value;
	}

	inline static int32_t get_offset_of_textNormalColor_7() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___textNormalColor_7)); }
	inline Color_t4194546905  get_textNormalColor_7() const { return ___textNormalColor_7; }
	inline Color_t4194546905 * get_address_of_textNormalColor_7() { return &___textNormalColor_7; }
	inline void set_textNormalColor_7(Color_t4194546905  value)
	{
		___textNormalColor_7 = value;
	}

	inline static int32_t get_offset_of_textDisabledColor_8() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___textDisabledColor_8)); }
	inline Color_t4194546905  get_textDisabledColor_8() const { return ___textDisabledColor_8; }
	inline Color_t4194546905 * get_address_of_textDisabledColor_8() { return &___textDisabledColor_8; }
	inline void set_textDisabledColor_8(Color_t4194546905  value)
	{
		___textDisabledColor_8 = value;
	}

	inline static int32_t get_offset_of_changeRippleColor_9() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___changeRippleColor_9)); }
	inline bool get_changeRippleColor_9() const { return ___changeRippleColor_9; }
	inline bool* get_address_of_changeRippleColor_9() { return &___changeRippleColor_9; }
	inline void set_changeRippleColor_9(bool value)
	{
		___changeRippleColor_9 = value;
	}

	inline static int32_t get_offset_of_checkImage_10() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___checkImage_10)); }
	inline Image_t538875265 * get_checkImage_10() const { return ___checkImage_10; }
	inline Image_t538875265 ** get_address_of_checkImage_10() { return &___checkImage_10; }
	inline void set_checkImage_10(Image_t538875265 * value)
	{
		___checkImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___checkImage_10, value);
	}

	inline static int32_t get_offset_of_frameImage_11() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___frameImage_11)); }
	inline Image_t538875265 * get_frameImage_11() const { return ___frameImage_11; }
	inline Image_t538875265 ** get_address_of_frameImage_11() { return &___frameImage_11; }
	inline void set_frameImage_11(Image_t538875265 * value)
	{
		___frameImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___frameImage_11, value);
	}

	inline static int32_t get_offset_of_text_12() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___text_12)); }
	inline Text_t9039225 * get_text_12() const { return ___text_12; }
	inline Text_t9039225 ** get_address_of_text_12() { return &___text_12; }
	inline void set_text_12(Text_t9039225 * value)
	{
		___text_12 = value;
		Il2CppCodeGenWriteBarrier(&___text_12, value);
	}

	inline static int32_t get_offset_of_checkRectTransform_13() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___checkRectTransform_13)); }
	inline RectTransform_t972643934 * get_checkRectTransform_13() const { return ___checkRectTransform_13; }
	inline RectTransform_t972643934 ** get_address_of_checkRectTransform_13() { return &___checkRectTransform_13; }
	inline void set_checkRectTransform_13(RectTransform_t972643934 * value)
	{
		___checkRectTransform_13 = value;
		Il2CppCodeGenWriteBarrier(&___checkRectTransform_13, value);
	}

	inline static int32_t get_offset_of_frameCanvasGroup_14() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___frameCanvasGroup_14)); }
	inline CanvasGroup_t3702418109 * get_frameCanvasGroup_14() const { return ___frameCanvasGroup_14; }
	inline CanvasGroup_t3702418109 ** get_address_of_frameCanvasGroup_14() { return &___frameCanvasGroup_14; }
	inline void set_frameCanvasGroup_14(CanvasGroup_t3702418109 * value)
	{
		___frameCanvasGroup_14 = value;
		Il2CppCodeGenWriteBarrier(&___frameCanvasGroup_14, value);
	}

	inline static int32_t get_offset_of_checkBoxToggler_15() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___checkBoxToggler_15)); }
	inline CheckBoxToggler_t4178758561 * get_checkBoxToggler_15() const { return ___checkBoxToggler_15; }
	inline CheckBoxToggler_t4178758561 ** get_address_of_checkBoxToggler_15() { return &___checkBoxToggler_15; }
	inline void set_checkBoxToggler_15(CheckBoxToggler_t4178758561 * value)
	{
		___checkBoxToggler_15 = value;
		Il2CppCodeGenWriteBarrier(&___checkBoxToggler_15, value);
	}

	inline static int32_t get_offset_of_rippleConfig_16() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___rippleConfig_16)); }
	inline RippleConfig_t2823880126 * get_rippleConfig_16() const { return ___rippleConfig_16; }
	inline RippleConfig_t2823880126 ** get_address_of_rippleConfig_16() { return &___rippleConfig_16; }
	inline void set_rippleConfig_16(RippleConfig_t2823880126 * value)
	{
		___rippleConfig_16 = value;
		Il2CppCodeGenWriteBarrier(&___rippleConfig_16, value);
	}

	inline static int32_t get_offset_of_toggle_17() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___toggle_17)); }
	inline Toggle_t110812896 * get_toggle_17() const { return ___toggle_17; }
	inline Toggle_t110812896 ** get_address_of_toggle_17() { return &___toggle_17; }
	inline void set_toggle_17(Toggle_t110812896 * value)
	{
		___toggle_17 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_17, value);
	}

	inline static int32_t get_offset_of_lastToggleInteractableState_18() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___lastToggleInteractableState_18)); }
	inline bool get_lastToggleInteractableState_18() const { return ___lastToggleInteractableState_18; }
	inline bool* get_address_of_lastToggleInteractableState_18() { return &___lastToggleInteractableState_18; }
	inline void set_lastToggleInteractableState_18(bool value)
	{
		___lastToggleInteractableState_18 = value;
	}

	inline static int32_t get_offset_of_lastToggleState_19() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___lastToggleState_19)); }
	inline bool get_lastToggleState_19() const { return ___lastToggleState_19; }
	inline bool* get_address_of_lastToggleState_19() { return &___lastToggleState_19; }
	inline void set_lastToggleState_19(bool value)
	{
		___lastToggleState_19 = value;
	}

	inline static int32_t get_offset_of_currentCheckSize_20() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___currentCheckSize_20)); }
	inline float get_currentCheckSize_20() const { return ___currentCheckSize_20; }
	inline float* get_address_of_currentCheckSize_20() { return &___currentCheckSize_20; }
	inline void set_currentCheckSize_20(float value)
	{
		___currentCheckSize_20 = value;
	}

	inline static int32_t get_offset_of_currentColor_21() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___currentColor_21)); }
	inline Color_t4194546905  get_currentColor_21() const { return ___currentColor_21; }
	inline Color_t4194546905 * get_address_of_currentColor_21() { return &___currentColor_21; }
	inline void set_currentColor_21(Color_t4194546905  value)
	{
		___currentColor_21 = value;
	}

	inline static int32_t get_offset_of_currentTextColor_22() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___currentTextColor_22)); }
	inline Color_t4194546905  get_currentTextColor_22() const { return ___currentTextColor_22; }
	inline Color_t4194546905 * get_address_of_currentTextColor_22() { return &___currentTextColor_22; }
	inline void set_currentTextColor_22(Color_t4194546905  value)
	{
		___currentTextColor_22 = value;
	}

	inline static int32_t get_offset_of_currentFrameAlpha_23() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___currentFrameAlpha_23)); }
	inline float get_currentFrameAlpha_23() const { return ___currentFrameAlpha_23; }
	inline float* get_address_of_currentFrameAlpha_23() { return &___currentFrameAlpha_23; }
	inline void set_currentFrameAlpha_23(float value)
	{
		___currentFrameAlpha_23 = value;
	}

	inline static int32_t get_offset_of_tempVector3_24() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___tempVector3_24)); }
	inline Vector3_t4282066566  get_tempVector3_24() const { return ___tempVector3_24; }
	inline Vector3_t4282066566 * get_address_of_tempVector3_24() { return &___tempVector3_24; }
	inline void set_tempVector3_24(Vector3_t4282066566  value)
	{
		___tempVector3_24 = value;
	}

	inline static int32_t get_offset_of_tempColor_25() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___tempColor_25)); }
	inline Color_t4194546905  get_tempColor_25() const { return ___tempColor_25; }
	inline Color_t4194546905 * get_address_of_tempColor_25() { return &___tempColor_25; }
	inline void set_tempColor_25(Color_t4194546905  value)
	{
		___tempColor_25 = value;
	}

	inline static int32_t get_offset_of_state_26() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___state_26)); }
	inline int32_t get_state_26() const { return ___state_26; }
	inline int32_t* get_address_of_state_26() { return &___state_26; }
	inline void set_state_26(int32_t value)
	{
		___state_26 = value;
	}

	inline static int32_t get_offset_of_animStartTime_27() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___animStartTime_27)); }
	inline float get_animStartTime_27() const { return ___animStartTime_27; }
	inline float* get_address_of_animStartTime_27() { return &___animStartTime_27; }
	inline void set_animStartTime_27(float value)
	{
		___animStartTime_27 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_28() { return static_cast<int32_t>(offsetof(CheckboxConfig_t1096200273, ___animDeltaTime_28)); }
	inline float get_animDeltaTime_28() const { return ___animDeltaTime_28; }
	inline float* get_address_of_animDeltaTime_28() { return &___animDeltaTime_28; }
	inline void set_animDeltaTime_28(float value)
	{
		___animDeltaTime_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
