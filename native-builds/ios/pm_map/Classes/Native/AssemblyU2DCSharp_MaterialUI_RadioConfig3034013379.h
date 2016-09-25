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
// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_t4178758561;
// MaterialUI.RippleConfig
struct RippleConfig_t2823880126;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1990156785;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.RadioConfig
struct  RadioConfig_t3034013379  : public MonoBehaviour_t667441552
{
public:
	// System.Single MaterialUI.RadioConfig::animationDuration
	float ___animationDuration_2;
	// UnityEngine.Color MaterialUI.RadioConfig::onColor
	Color_t4194546905  ___onColor_3;
	// UnityEngine.Color MaterialUI.RadioConfig::offColor
	Color_t4194546905  ___offColor_4;
	// UnityEngine.Color MaterialUI.RadioConfig::disabledColor
	Color_t4194546905  ___disabledColor_5;
	// System.Boolean MaterialUI.RadioConfig::changeTextColor
	bool ___changeTextColor_6;
	// UnityEngine.Color MaterialUI.RadioConfig::textNormalColor
	Color_t4194546905  ___textNormalColor_7;
	// UnityEngine.Color MaterialUI.RadioConfig::textDisabledColor
	Color_t4194546905  ___textDisabledColor_8;
	// System.Boolean MaterialUI.RadioConfig::changeRippleColor
	bool ___changeRippleColor_9;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::dotImage
	Image_t538875265 * ___dotImage_10;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::ringImage
	Image_t538875265 * ___ringImage_11;
	// UnityEngine.UI.Text MaterialUI.RadioConfig::text
	Text_t9039225 * ___text_12;
	// UnityEngine.RectTransform MaterialUI.RadioConfig::dotRectTransform
	RectTransform_t972643934 * ___dotRectTransform_13;
	// MaterialUI.CheckBoxToggler MaterialUI.RadioConfig::checkBoxToggler
	CheckBoxToggler_t4178758561 * ___checkBoxToggler_14;
	// MaterialUI.RippleConfig MaterialUI.RadioConfig::rippleConfig
	RippleConfig_t2823880126 * ___rippleConfig_15;
	// UnityEngine.UI.Toggle MaterialUI.RadioConfig::toggle
	Toggle_t110812896 * ___toggle_16;
	// UnityEngine.UI.ToggleGroup MaterialUI.RadioConfig::toggleGroup
	ToggleGroup_t1990156785 * ___toggleGroup_17;
	// System.Boolean MaterialUI.RadioConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_18;
	// System.Boolean MaterialUI.RadioConfig::lastToggleState
	bool ___lastToggleState_19;
	// System.Single MaterialUI.RadioConfig::currentDotSize
	float ___currentDotSize_20;
	// UnityEngine.Color MaterialUI.RadioConfig::currentColor
	Color_t4194546905  ___currentColor_21;
	// UnityEngine.Color MaterialUI.RadioConfig::currentTextColor
	Color_t4194546905  ___currentTextColor_22;
	// UnityEngine.Vector3 MaterialUI.RadioConfig::tempVector3
	Vector3_t4282066566  ___tempVector3_23;
	// UnityEngine.Color MaterialUI.RadioConfig::tempColor
	Color_t4194546905  ___tempColor_24;
	// System.Int32 MaterialUI.RadioConfig::state
	int32_t ___state_25;
	// System.Single MaterialUI.RadioConfig::animStartTime
	float ___animStartTime_26;
	// System.Single MaterialUI.RadioConfig::animDeltaTime
	float ___animDeltaTime_27;

public:
	inline static int32_t get_offset_of_animationDuration_2() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___animationDuration_2)); }
	inline float get_animationDuration_2() const { return ___animationDuration_2; }
	inline float* get_address_of_animationDuration_2() { return &___animationDuration_2; }
	inline void set_animationDuration_2(float value)
	{
		___animationDuration_2 = value;
	}

	inline static int32_t get_offset_of_onColor_3() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___onColor_3)); }
	inline Color_t4194546905  get_onColor_3() const { return ___onColor_3; }
	inline Color_t4194546905 * get_address_of_onColor_3() { return &___onColor_3; }
	inline void set_onColor_3(Color_t4194546905  value)
	{
		___onColor_3 = value;
	}

	inline static int32_t get_offset_of_offColor_4() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___offColor_4)); }
	inline Color_t4194546905  get_offColor_4() const { return ___offColor_4; }
	inline Color_t4194546905 * get_address_of_offColor_4() { return &___offColor_4; }
	inline void set_offColor_4(Color_t4194546905  value)
	{
		___offColor_4 = value;
	}

	inline static int32_t get_offset_of_disabledColor_5() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___disabledColor_5)); }
	inline Color_t4194546905  get_disabledColor_5() const { return ___disabledColor_5; }
	inline Color_t4194546905 * get_address_of_disabledColor_5() { return &___disabledColor_5; }
	inline void set_disabledColor_5(Color_t4194546905  value)
	{
		___disabledColor_5 = value;
	}

	inline static int32_t get_offset_of_changeTextColor_6() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___changeTextColor_6)); }
	inline bool get_changeTextColor_6() const { return ___changeTextColor_6; }
	inline bool* get_address_of_changeTextColor_6() { return &___changeTextColor_6; }
	inline void set_changeTextColor_6(bool value)
	{
		___changeTextColor_6 = value;
	}

	inline static int32_t get_offset_of_textNormalColor_7() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___textNormalColor_7)); }
	inline Color_t4194546905  get_textNormalColor_7() const { return ___textNormalColor_7; }
	inline Color_t4194546905 * get_address_of_textNormalColor_7() { return &___textNormalColor_7; }
	inline void set_textNormalColor_7(Color_t4194546905  value)
	{
		___textNormalColor_7 = value;
	}

	inline static int32_t get_offset_of_textDisabledColor_8() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___textDisabledColor_8)); }
	inline Color_t4194546905  get_textDisabledColor_8() const { return ___textDisabledColor_8; }
	inline Color_t4194546905 * get_address_of_textDisabledColor_8() { return &___textDisabledColor_8; }
	inline void set_textDisabledColor_8(Color_t4194546905  value)
	{
		___textDisabledColor_8 = value;
	}

	inline static int32_t get_offset_of_changeRippleColor_9() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___changeRippleColor_9)); }
	inline bool get_changeRippleColor_9() const { return ___changeRippleColor_9; }
	inline bool* get_address_of_changeRippleColor_9() { return &___changeRippleColor_9; }
	inline void set_changeRippleColor_9(bool value)
	{
		___changeRippleColor_9 = value;
	}

	inline static int32_t get_offset_of_dotImage_10() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___dotImage_10)); }
	inline Image_t538875265 * get_dotImage_10() const { return ___dotImage_10; }
	inline Image_t538875265 ** get_address_of_dotImage_10() { return &___dotImage_10; }
	inline void set_dotImage_10(Image_t538875265 * value)
	{
		___dotImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___dotImage_10, value);
	}

	inline static int32_t get_offset_of_ringImage_11() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___ringImage_11)); }
	inline Image_t538875265 * get_ringImage_11() const { return ___ringImage_11; }
	inline Image_t538875265 ** get_address_of_ringImage_11() { return &___ringImage_11; }
	inline void set_ringImage_11(Image_t538875265 * value)
	{
		___ringImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___ringImage_11, value);
	}

	inline static int32_t get_offset_of_text_12() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___text_12)); }
	inline Text_t9039225 * get_text_12() const { return ___text_12; }
	inline Text_t9039225 ** get_address_of_text_12() { return &___text_12; }
	inline void set_text_12(Text_t9039225 * value)
	{
		___text_12 = value;
		Il2CppCodeGenWriteBarrier(&___text_12, value);
	}

	inline static int32_t get_offset_of_dotRectTransform_13() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___dotRectTransform_13)); }
	inline RectTransform_t972643934 * get_dotRectTransform_13() const { return ___dotRectTransform_13; }
	inline RectTransform_t972643934 ** get_address_of_dotRectTransform_13() { return &___dotRectTransform_13; }
	inline void set_dotRectTransform_13(RectTransform_t972643934 * value)
	{
		___dotRectTransform_13 = value;
		Il2CppCodeGenWriteBarrier(&___dotRectTransform_13, value);
	}

	inline static int32_t get_offset_of_checkBoxToggler_14() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___checkBoxToggler_14)); }
	inline CheckBoxToggler_t4178758561 * get_checkBoxToggler_14() const { return ___checkBoxToggler_14; }
	inline CheckBoxToggler_t4178758561 ** get_address_of_checkBoxToggler_14() { return &___checkBoxToggler_14; }
	inline void set_checkBoxToggler_14(CheckBoxToggler_t4178758561 * value)
	{
		___checkBoxToggler_14 = value;
		Il2CppCodeGenWriteBarrier(&___checkBoxToggler_14, value);
	}

	inline static int32_t get_offset_of_rippleConfig_15() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___rippleConfig_15)); }
	inline RippleConfig_t2823880126 * get_rippleConfig_15() const { return ___rippleConfig_15; }
	inline RippleConfig_t2823880126 ** get_address_of_rippleConfig_15() { return &___rippleConfig_15; }
	inline void set_rippleConfig_15(RippleConfig_t2823880126 * value)
	{
		___rippleConfig_15 = value;
		Il2CppCodeGenWriteBarrier(&___rippleConfig_15, value);
	}

	inline static int32_t get_offset_of_toggle_16() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___toggle_16)); }
	inline Toggle_t110812896 * get_toggle_16() const { return ___toggle_16; }
	inline Toggle_t110812896 ** get_address_of_toggle_16() { return &___toggle_16; }
	inline void set_toggle_16(Toggle_t110812896 * value)
	{
		___toggle_16 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_16, value);
	}

	inline static int32_t get_offset_of_toggleGroup_17() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___toggleGroup_17)); }
	inline ToggleGroup_t1990156785 * get_toggleGroup_17() const { return ___toggleGroup_17; }
	inline ToggleGroup_t1990156785 ** get_address_of_toggleGroup_17() { return &___toggleGroup_17; }
	inline void set_toggleGroup_17(ToggleGroup_t1990156785 * value)
	{
		___toggleGroup_17 = value;
		Il2CppCodeGenWriteBarrier(&___toggleGroup_17, value);
	}

	inline static int32_t get_offset_of_lastToggleInteractableState_18() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___lastToggleInteractableState_18)); }
	inline bool get_lastToggleInteractableState_18() const { return ___lastToggleInteractableState_18; }
	inline bool* get_address_of_lastToggleInteractableState_18() { return &___lastToggleInteractableState_18; }
	inline void set_lastToggleInteractableState_18(bool value)
	{
		___lastToggleInteractableState_18 = value;
	}

	inline static int32_t get_offset_of_lastToggleState_19() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___lastToggleState_19)); }
	inline bool get_lastToggleState_19() const { return ___lastToggleState_19; }
	inline bool* get_address_of_lastToggleState_19() { return &___lastToggleState_19; }
	inline void set_lastToggleState_19(bool value)
	{
		___lastToggleState_19 = value;
	}

	inline static int32_t get_offset_of_currentDotSize_20() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___currentDotSize_20)); }
	inline float get_currentDotSize_20() const { return ___currentDotSize_20; }
	inline float* get_address_of_currentDotSize_20() { return &___currentDotSize_20; }
	inline void set_currentDotSize_20(float value)
	{
		___currentDotSize_20 = value;
	}

	inline static int32_t get_offset_of_currentColor_21() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___currentColor_21)); }
	inline Color_t4194546905  get_currentColor_21() const { return ___currentColor_21; }
	inline Color_t4194546905 * get_address_of_currentColor_21() { return &___currentColor_21; }
	inline void set_currentColor_21(Color_t4194546905  value)
	{
		___currentColor_21 = value;
	}

	inline static int32_t get_offset_of_currentTextColor_22() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___currentTextColor_22)); }
	inline Color_t4194546905  get_currentTextColor_22() const { return ___currentTextColor_22; }
	inline Color_t4194546905 * get_address_of_currentTextColor_22() { return &___currentTextColor_22; }
	inline void set_currentTextColor_22(Color_t4194546905  value)
	{
		___currentTextColor_22 = value;
	}

	inline static int32_t get_offset_of_tempVector3_23() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___tempVector3_23)); }
	inline Vector3_t4282066566  get_tempVector3_23() const { return ___tempVector3_23; }
	inline Vector3_t4282066566 * get_address_of_tempVector3_23() { return &___tempVector3_23; }
	inline void set_tempVector3_23(Vector3_t4282066566  value)
	{
		___tempVector3_23 = value;
	}

	inline static int32_t get_offset_of_tempColor_24() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___tempColor_24)); }
	inline Color_t4194546905  get_tempColor_24() const { return ___tempColor_24; }
	inline Color_t4194546905 * get_address_of_tempColor_24() { return &___tempColor_24; }
	inline void set_tempColor_24(Color_t4194546905  value)
	{
		___tempColor_24 = value;
	}

	inline static int32_t get_offset_of_state_25() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___state_25)); }
	inline int32_t get_state_25() const { return ___state_25; }
	inline int32_t* get_address_of_state_25() { return &___state_25; }
	inline void set_state_25(int32_t value)
	{
		___state_25 = value;
	}

	inline static int32_t get_offset_of_animStartTime_26() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___animStartTime_26)); }
	inline float get_animStartTime_26() const { return ___animStartTime_26; }
	inline float* get_address_of_animStartTime_26() { return &___animStartTime_26; }
	inline void set_animStartTime_26(float value)
	{
		___animStartTime_26 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_27() { return static_cast<int32_t>(offsetof(RadioConfig_t3034013379, ___animDeltaTime_27)); }
	inline float get_animDeltaTime_27() const { return ___animDeltaTime_27; }
	inline float* get_address_of_animDeltaTime_27() { return &___animDeltaTime_27; }
	inline void set_animDeltaTime_27(float value)
	{
		___animDeltaTime_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
