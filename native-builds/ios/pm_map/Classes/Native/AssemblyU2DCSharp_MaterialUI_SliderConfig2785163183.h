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
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Slider
struct Slider_t79469677;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SliderConfig
struct  SliderConfig_t2785163183  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean MaterialUI.SliderConfig::textHasDecimal
	bool ___textHasDecimal_2;
	// System.Boolean MaterialUI.SliderConfig::hasPopup
	bool ___hasPopup_3;
	// System.Single MaterialUI.SliderConfig::animationDuration
	float ___animationDuration_4;
	// UnityEngine.RectTransform MaterialUI.SliderConfig::handle
	RectTransform_t972643934 * ___handle_5;
	// UnityEngine.RectTransform MaterialUI.SliderConfig::popup
	RectTransform_t972643934 * ___popup_6;
	// UnityEngine.UI.Text MaterialUI.SliderConfig::popupText
	Text_t9039225 * ___popupText_7;
	// UnityEngine.UI.Slider MaterialUI.SliderConfig::slider
	Slider_t79469677 * ___slider_8;
	// System.Single MaterialUI.SliderConfig::currentPopupScale
	float ___currentPopupScale_9;
	// System.Single MaterialUI.SliderConfig::currentHandleScale
	float ___currentHandleScale_10;
	// System.Single MaterialUI.SliderConfig::currentPos
	float ___currentPos_11;
	// System.Boolean MaterialUI.SliderConfig::isSelected
	bool ___isSelected_12;
	// System.Int32 MaterialUI.SliderConfig::state
	int32_t ___state_13;
	// System.Single MaterialUI.SliderConfig::animStartTime
	float ___animStartTime_14;
	// System.Single MaterialUI.SliderConfig::animDeltaTime
	float ___animDeltaTime_15;
	// UnityEngine.Vector3 MaterialUI.SliderConfig::tempVec3
	Vector3_t4282066566  ___tempVec3_16;

public:
	inline static int32_t get_offset_of_textHasDecimal_2() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___textHasDecimal_2)); }
	inline bool get_textHasDecimal_2() const { return ___textHasDecimal_2; }
	inline bool* get_address_of_textHasDecimal_2() { return &___textHasDecimal_2; }
	inline void set_textHasDecimal_2(bool value)
	{
		___textHasDecimal_2 = value;
	}

	inline static int32_t get_offset_of_hasPopup_3() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___hasPopup_3)); }
	inline bool get_hasPopup_3() const { return ___hasPopup_3; }
	inline bool* get_address_of_hasPopup_3() { return &___hasPopup_3; }
	inline void set_hasPopup_3(bool value)
	{
		___hasPopup_3 = value;
	}

	inline static int32_t get_offset_of_animationDuration_4() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___animationDuration_4)); }
	inline float get_animationDuration_4() const { return ___animationDuration_4; }
	inline float* get_address_of_animationDuration_4() { return &___animationDuration_4; }
	inline void set_animationDuration_4(float value)
	{
		___animationDuration_4 = value;
	}

	inline static int32_t get_offset_of_handle_5() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___handle_5)); }
	inline RectTransform_t972643934 * get_handle_5() const { return ___handle_5; }
	inline RectTransform_t972643934 ** get_address_of_handle_5() { return &___handle_5; }
	inline void set_handle_5(RectTransform_t972643934 * value)
	{
		___handle_5 = value;
		Il2CppCodeGenWriteBarrier(&___handle_5, value);
	}

	inline static int32_t get_offset_of_popup_6() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___popup_6)); }
	inline RectTransform_t972643934 * get_popup_6() const { return ___popup_6; }
	inline RectTransform_t972643934 ** get_address_of_popup_6() { return &___popup_6; }
	inline void set_popup_6(RectTransform_t972643934 * value)
	{
		___popup_6 = value;
		Il2CppCodeGenWriteBarrier(&___popup_6, value);
	}

	inline static int32_t get_offset_of_popupText_7() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___popupText_7)); }
	inline Text_t9039225 * get_popupText_7() const { return ___popupText_7; }
	inline Text_t9039225 ** get_address_of_popupText_7() { return &___popupText_7; }
	inline void set_popupText_7(Text_t9039225 * value)
	{
		___popupText_7 = value;
		Il2CppCodeGenWriteBarrier(&___popupText_7, value);
	}

	inline static int32_t get_offset_of_slider_8() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___slider_8)); }
	inline Slider_t79469677 * get_slider_8() const { return ___slider_8; }
	inline Slider_t79469677 ** get_address_of_slider_8() { return &___slider_8; }
	inline void set_slider_8(Slider_t79469677 * value)
	{
		___slider_8 = value;
		Il2CppCodeGenWriteBarrier(&___slider_8, value);
	}

	inline static int32_t get_offset_of_currentPopupScale_9() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___currentPopupScale_9)); }
	inline float get_currentPopupScale_9() const { return ___currentPopupScale_9; }
	inline float* get_address_of_currentPopupScale_9() { return &___currentPopupScale_9; }
	inline void set_currentPopupScale_9(float value)
	{
		___currentPopupScale_9 = value;
	}

	inline static int32_t get_offset_of_currentHandleScale_10() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___currentHandleScale_10)); }
	inline float get_currentHandleScale_10() const { return ___currentHandleScale_10; }
	inline float* get_address_of_currentHandleScale_10() { return &___currentHandleScale_10; }
	inline void set_currentHandleScale_10(float value)
	{
		___currentHandleScale_10 = value;
	}

	inline static int32_t get_offset_of_currentPos_11() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___currentPos_11)); }
	inline float get_currentPos_11() const { return ___currentPos_11; }
	inline float* get_address_of_currentPos_11() { return &___currentPos_11; }
	inline void set_currentPos_11(float value)
	{
		___currentPos_11 = value;
	}

	inline static int32_t get_offset_of_isSelected_12() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___isSelected_12)); }
	inline bool get_isSelected_12() const { return ___isSelected_12; }
	inline bool* get_address_of_isSelected_12() { return &___isSelected_12; }
	inline void set_isSelected_12(bool value)
	{
		___isSelected_12 = value;
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___state_13)); }
	inline int32_t get_state_13() const { return ___state_13; }
	inline int32_t* get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(int32_t value)
	{
		___state_13 = value;
	}

	inline static int32_t get_offset_of_animStartTime_14() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___animStartTime_14)); }
	inline float get_animStartTime_14() const { return ___animStartTime_14; }
	inline float* get_address_of_animStartTime_14() { return &___animStartTime_14; }
	inline void set_animStartTime_14(float value)
	{
		___animStartTime_14 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_15() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___animDeltaTime_15)); }
	inline float get_animDeltaTime_15() const { return ___animDeltaTime_15; }
	inline float* get_address_of_animDeltaTime_15() { return &___animDeltaTime_15; }
	inline void set_animDeltaTime_15(float value)
	{
		___animDeltaTime_15 = value;
	}

	inline static int32_t get_offset_of_tempVec3_16() { return static_cast<int32_t>(offsetof(SliderConfig_t2785163183, ___tempVec3_16)); }
	inline Vector3_t4282066566  get_tempVec3_16() const { return ___tempVec3_16; }
	inline Vector3_t4282066566 * get_address_of_tempVec3_16() { return &___tempVec3_16; }
	inline void set_tempVec3_16(Vector3_t4282066566  value)
	{
		___tempVec3_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
