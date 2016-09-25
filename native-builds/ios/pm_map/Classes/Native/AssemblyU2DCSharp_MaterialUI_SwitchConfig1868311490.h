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
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_t4178758561;
// MaterialUI.RippleConfig
struct RippleConfig_t2823880126;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SwitchConfig
struct  SwitchConfig_t1868311490  : public MonoBehaviour_t667441552
{
public:
	// System.Single MaterialUI.SwitchConfig::animationDuration
	float ___animationDuration_2;
	// UnityEngine.Color MaterialUI.SwitchConfig::onColor
	Color_t4194546905  ___onColor_3;
	// UnityEngine.Color MaterialUI.SwitchConfig::offColor
	Color_t4194546905  ___offColor_4;
	// UnityEngine.Color MaterialUI.SwitchConfig::disabledColor
	Color_t4194546905  ___disabledColor_5;
	// UnityEngine.Color MaterialUI.SwitchConfig::backOffColor
	Color_t4194546905  ___backOffColor_6;
	// UnityEngine.Color MaterialUI.SwitchConfig::backDisabledColor
	Color_t4194546905  ___backDisabledColor_7;
	// System.Boolean MaterialUI.SwitchConfig::changeTextColor
	bool ___changeTextColor_8;
	// UnityEngine.Color MaterialUI.SwitchConfig::textNormalColor
	Color_t4194546905  ___textNormalColor_9;
	// UnityEngine.Color MaterialUI.SwitchConfig::textDisabledColor
	Color_t4194546905  ___textDisabledColor_10;
	// System.Boolean MaterialUI.SwitchConfig::changeRippleColor
	bool ___changeRippleColor_11;
	// UnityEngine.UI.Image MaterialUI.SwitchConfig::switchImage
	Image_t538875265 * ___switchImage_12;
	// UnityEngine.UI.Image MaterialUI.SwitchConfig::backImage
	Image_t538875265 * ___backImage_13;
	// TMPro.TextMeshProUGUI MaterialUI.SwitchConfig::text
	TextMeshProUGUI_t3603375195 * ___text_14;
	// UnityEngine.RectTransform MaterialUI.SwitchConfig::switchRectTransform
	RectTransform_t972643934 * ___switchRectTransform_15;
	// MaterialUI.CheckBoxToggler MaterialUI.SwitchConfig::checkBoxToggler
	CheckBoxToggler_t4178758561 * ___checkBoxToggler_16;
	// MaterialUI.RippleConfig MaterialUI.SwitchConfig::rippleConfig
	RippleConfig_t2823880126 * ___rippleConfig_17;
	// UnityEngine.UI.Toggle MaterialUI.SwitchConfig::toggle
	Toggle_t110812896 * ___toggle_18;
	// System.Boolean MaterialUI.SwitchConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_19;
	// System.Boolean MaterialUI.SwitchConfig::lastToggleState
	bool ___lastToggleState_20;
	// System.Single MaterialUI.SwitchConfig::currentSwitchPosition
	float ___currentSwitchPosition_21;
	// UnityEngine.Color MaterialUI.SwitchConfig::currentColor
	Color_t4194546905  ___currentColor_22;
	// UnityEngine.Color MaterialUI.SwitchConfig::currentBackColor
	Color_t4194546905  ___currentBackColor_23;
	// UnityEngine.Color MaterialUI.SwitchConfig::currentTextColor
	Color_t4194546905  ___currentTextColor_24;
	// System.Int32 MaterialUI.SwitchConfig::state
	int32_t ___state_25;
	// System.Single MaterialUI.SwitchConfig::animStartTime
	float ___animStartTime_26;
	// System.Single MaterialUI.SwitchConfig::animDeltaTime
	float ___animDeltaTime_27;

public:
	inline static int32_t get_offset_of_animationDuration_2() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___animationDuration_2)); }
	inline float get_animationDuration_2() const { return ___animationDuration_2; }
	inline float* get_address_of_animationDuration_2() { return &___animationDuration_2; }
	inline void set_animationDuration_2(float value)
	{
		___animationDuration_2 = value;
	}

	inline static int32_t get_offset_of_onColor_3() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___onColor_3)); }
	inline Color_t4194546905  get_onColor_3() const { return ___onColor_3; }
	inline Color_t4194546905 * get_address_of_onColor_3() { return &___onColor_3; }
	inline void set_onColor_3(Color_t4194546905  value)
	{
		___onColor_3 = value;
	}

	inline static int32_t get_offset_of_offColor_4() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___offColor_4)); }
	inline Color_t4194546905  get_offColor_4() const { return ___offColor_4; }
	inline Color_t4194546905 * get_address_of_offColor_4() { return &___offColor_4; }
	inline void set_offColor_4(Color_t4194546905  value)
	{
		___offColor_4 = value;
	}

	inline static int32_t get_offset_of_disabledColor_5() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___disabledColor_5)); }
	inline Color_t4194546905  get_disabledColor_5() const { return ___disabledColor_5; }
	inline Color_t4194546905 * get_address_of_disabledColor_5() { return &___disabledColor_5; }
	inline void set_disabledColor_5(Color_t4194546905  value)
	{
		___disabledColor_5 = value;
	}

	inline static int32_t get_offset_of_backOffColor_6() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___backOffColor_6)); }
	inline Color_t4194546905  get_backOffColor_6() const { return ___backOffColor_6; }
	inline Color_t4194546905 * get_address_of_backOffColor_6() { return &___backOffColor_6; }
	inline void set_backOffColor_6(Color_t4194546905  value)
	{
		___backOffColor_6 = value;
	}

	inline static int32_t get_offset_of_backDisabledColor_7() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___backDisabledColor_7)); }
	inline Color_t4194546905  get_backDisabledColor_7() const { return ___backDisabledColor_7; }
	inline Color_t4194546905 * get_address_of_backDisabledColor_7() { return &___backDisabledColor_7; }
	inline void set_backDisabledColor_7(Color_t4194546905  value)
	{
		___backDisabledColor_7 = value;
	}

	inline static int32_t get_offset_of_changeTextColor_8() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___changeTextColor_8)); }
	inline bool get_changeTextColor_8() const { return ___changeTextColor_8; }
	inline bool* get_address_of_changeTextColor_8() { return &___changeTextColor_8; }
	inline void set_changeTextColor_8(bool value)
	{
		___changeTextColor_8 = value;
	}

	inline static int32_t get_offset_of_textNormalColor_9() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___textNormalColor_9)); }
	inline Color_t4194546905  get_textNormalColor_9() const { return ___textNormalColor_9; }
	inline Color_t4194546905 * get_address_of_textNormalColor_9() { return &___textNormalColor_9; }
	inline void set_textNormalColor_9(Color_t4194546905  value)
	{
		___textNormalColor_9 = value;
	}

	inline static int32_t get_offset_of_textDisabledColor_10() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___textDisabledColor_10)); }
	inline Color_t4194546905  get_textDisabledColor_10() const { return ___textDisabledColor_10; }
	inline Color_t4194546905 * get_address_of_textDisabledColor_10() { return &___textDisabledColor_10; }
	inline void set_textDisabledColor_10(Color_t4194546905  value)
	{
		___textDisabledColor_10 = value;
	}

	inline static int32_t get_offset_of_changeRippleColor_11() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___changeRippleColor_11)); }
	inline bool get_changeRippleColor_11() const { return ___changeRippleColor_11; }
	inline bool* get_address_of_changeRippleColor_11() { return &___changeRippleColor_11; }
	inline void set_changeRippleColor_11(bool value)
	{
		___changeRippleColor_11 = value;
	}

	inline static int32_t get_offset_of_switchImage_12() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___switchImage_12)); }
	inline Image_t538875265 * get_switchImage_12() const { return ___switchImage_12; }
	inline Image_t538875265 ** get_address_of_switchImage_12() { return &___switchImage_12; }
	inline void set_switchImage_12(Image_t538875265 * value)
	{
		___switchImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___switchImage_12, value);
	}

	inline static int32_t get_offset_of_backImage_13() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___backImage_13)); }
	inline Image_t538875265 * get_backImage_13() const { return ___backImage_13; }
	inline Image_t538875265 ** get_address_of_backImage_13() { return &___backImage_13; }
	inline void set_backImage_13(Image_t538875265 * value)
	{
		___backImage_13 = value;
		Il2CppCodeGenWriteBarrier(&___backImage_13, value);
	}

	inline static int32_t get_offset_of_text_14() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___text_14)); }
	inline TextMeshProUGUI_t3603375195 * get_text_14() const { return ___text_14; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_text_14() { return &___text_14; }
	inline void set_text_14(TextMeshProUGUI_t3603375195 * value)
	{
		___text_14 = value;
		Il2CppCodeGenWriteBarrier(&___text_14, value);
	}

	inline static int32_t get_offset_of_switchRectTransform_15() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___switchRectTransform_15)); }
	inline RectTransform_t972643934 * get_switchRectTransform_15() const { return ___switchRectTransform_15; }
	inline RectTransform_t972643934 ** get_address_of_switchRectTransform_15() { return &___switchRectTransform_15; }
	inline void set_switchRectTransform_15(RectTransform_t972643934 * value)
	{
		___switchRectTransform_15 = value;
		Il2CppCodeGenWriteBarrier(&___switchRectTransform_15, value);
	}

	inline static int32_t get_offset_of_checkBoxToggler_16() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___checkBoxToggler_16)); }
	inline CheckBoxToggler_t4178758561 * get_checkBoxToggler_16() const { return ___checkBoxToggler_16; }
	inline CheckBoxToggler_t4178758561 ** get_address_of_checkBoxToggler_16() { return &___checkBoxToggler_16; }
	inline void set_checkBoxToggler_16(CheckBoxToggler_t4178758561 * value)
	{
		___checkBoxToggler_16 = value;
		Il2CppCodeGenWriteBarrier(&___checkBoxToggler_16, value);
	}

	inline static int32_t get_offset_of_rippleConfig_17() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___rippleConfig_17)); }
	inline RippleConfig_t2823880126 * get_rippleConfig_17() const { return ___rippleConfig_17; }
	inline RippleConfig_t2823880126 ** get_address_of_rippleConfig_17() { return &___rippleConfig_17; }
	inline void set_rippleConfig_17(RippleConfig_t2823880126 * value)
	{
		___rippleConfig_17 = value;
		Il2CppCodeGenWriteBarrier(&___rippleConfig_17, value);
	}

	inline static int32_t get_offset_of_toggle_18() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___toggle_18)); }
	inline Toggle_t110812896 * get_toggle_18() const { return ___toggle_18; }
	inline Toggle_t110812896 ** get_address_of_toggle_18() { return &___toggle_18; }
	inline void set_toggle_18(Toggle_t110812896 * value)
	{
		___toggle_18 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_18, value);
	}

	inline static int32_t get_offset_of_lastToggleInteractableState_19() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___lastToggleInteractableState_19)); }
	inline bool get_lastToggleInteractableState_19() const { return ___lastToggleInteractableState_19; }
	inline bool* get_address_of_lastToggleInteractableState_19() { return &___lastToggleInteractableState_19; }
	inline void set_lastToggleInteractableState_19(bool value)
	{
		___lastToggleInteractableState_19 = value;
	}

	inline static int32_t get_offset_of_lastToggleState_20() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___lastToggleState_20)); }
	inline bool get_lastToggleState_20() const { return ___lastToggleState_20; }
	inline bool* get_address_of_lastToggleState_20() { return &___lastToggleState_20; }
	inline void set_lastToggleState_20(bool value)
	{
		___lastToggleState_20 = value;
	}

	inline static int32_t get_offset_of_currentSwitchPosition_21() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___currentSwitchPosition_21)); }
	inline float get_currentSwitchPosition_21() const { return ___currentSwitchPosition_21; }
	inline float* get_address_of_currentSwitchPosition_21() { return &___currentSwitchPosition_21; }
	inline void set_currentSwitchPosition_21(float value)
	{
		___currentSwitchPosition_21 = value;
	}

	inline static int32_t get_offset_of_currentColor_22() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___currentColor_22)); }
	inline Color_t4194546905  get_currentColor_22() const { return ___currentColor_22; }
	inline Color_t4194546905 * get_address_of_currentColor_22() { return &___currentColor_22; }
	inline void set_currentColor_22(Color_t4194546905  value)
	{
		___currentColor_22 = value;
	}

	inline static int32_t get_offset_of_currentBackColor_23() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___currentBackColor_23)); }
	inline Color_t4194546905  get_currentBackColor_23() const { return ___currentBackColor_23; }
	inline Color_t4194546905 * get_address_of_currentBackColor_23() { return &___currentBackColor_23; }
	inline void set_currentBackColor_23(Color_t4194546905  value)
	{
		___currentBackColor_23 = value;
	}

	inline static int32_t get_offset_of_currentTextColor_24() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___currentTextColor_24)); }
	inline Color_t4194546905  get_currentTextColor_24() const { return ___currentTextColor_24; }
	inline Color_t4194546905 * get_address_of_currentTextColor_24() { return &___currentTextColor_24; }
	inline void set_currentTextColor_24(Color_t4194546905  value)
	{
		___currentTextColor_24 = value;
	}

	inline static int32_t get_offset_of_state_25() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___state_25)); }
	inline int32_t get_state_25() const { return ___state_25; }
	inline int32_t* get_address_of_state_25() { return &___state_25; }
	inline void set_state_25(int32_t value)
	{
		___state_25 = value;
	}

	inline static int32_t get_offset_of_animStartTime_26() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___animStartTime_26)); }
	inline float get_animStartTime_26() const { return ___animStartTime_26; }
	inline float* get_address_of_animStartTime_26() { return &___animStartTime_26; }
	inline void set_animStartTime_26(float value)
	{
		___animStartTime_26 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_27() { return static_cast<int32_t>(offsetof(SwitchConfig_t1868311490, ___animDeltaTime_27)); }
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
