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
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.InputField
struct InputField_t609046876;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.InputFieldConfig
struct  InputFieldConfig_t900584798  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color MaterialUI.InputFieldConfig::activeColor
	Color_t4194546905  ___activeColor_2;
	// System.Boolean MaterialUI.InputFieldConfig::dynamicHeight
	bool ___dynamicHeight_3;
	// System.Boolean MaterialUI.InputFieldConfig::selected
	bool ___selected_4;
	// System.Single MaterialUI.InputFieldConfig::animationDuration
	float ___animationDuration_5;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::parentRect
	RectTransform_t972643934 * ___parentRect_6;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::placeholderText
	Text_t9039225 * ___placeholderText_7;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::inputText
	Text_t9039225 * ___inputText_8;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::displayText
	Text_t9039225 * ___displayText_9;
	// UnityEngine.UI.Image MaterialUI.InputFieldConfig::activeLine
	Image_t538875265 * ___activeLine_10;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::textRect
	RectTransform_t972643934 * ___textRect_11;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::displayTextRect
	RectTransform_t972643934 * ___displayTextRect_12;
	// UnityEngine.UI.InputField MaterialUI.InputFieldConfig::inputField
	InputField_t609046876 * ___inputField_13;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::activeLineRect
	RectTransform_t972643934 * ___activeLineRect_14;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::placeholderRect
	RectTransform_t972643934 * ___placeholderRect_15;
	// UnityEngine.Color MaterialUI.InputFieldConfig::placeholderOffColor
	Color_t4194546905  ___placeholderOffColor_16;
	// UnityEngine.Color MaterialUI.InputFieldConfig::placeholderColor
	Color_t4194546905  ___placeholderColor_17;
	// System.Single MaterialUI.InputFieldConfig::placeholderScale
	float ___placeholderScale_18;
	// System.Single MaterialUI.InputFieldConfig::placeholderPivot
	float ___placeholderPivot_19;
	// System.Single MaterialUI.InputFieldConfig::activeLineAlpha
	float ___activeLineAlpha_20;
	// System.Single MaterialUI.InputFieldConfig::activeLinePos
	float ___activeLinePos_21;
	// System.Single MaterialUI.InputFieldConfig::animStartTime
	float ___animStartTime_22;
	// System.Single MaterialUI.InputFieldConfig::animDeltaTime
	float ___animDeltaTime_23;
	// System.Boolean MaterialUI.InputFieldConfig::selectedBefore
	bool ___selectedBefore_24;
	// System.Int32 MaterialUI.InputFieldConfig::state
	int32_t ___state_25;

public:
	inline static int32_t get_offset_of_activeColor_2() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___activeColor_2)); }
	inline Color_t4194546905  get_activeColor_2() const { return ___activeColor_2; }
	inline Color_t4194546905 * get_address_of_activeColor_2() { return &___activeColor_2; }
	inline void set_activeColor_2(Color_t4194546905  value)
	{
		___activeColor_2 = value;
	}

	inline static int32_t get_offset_of_dynamicHeight_3() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___dynamicHeight_3)); }
	inline bool get_dynamicHeight_3() const { return ___dynamicHeight_3; }
	inline bool* get_address_of_dynamicHeight_3() { return &___dynamicHeight_3; }
	inline void set_dynamicHeight_3(bool value)
	{
		___dynamicHeight_3 = value;
	}

	inline static int32_t get_offset_of_selected_4() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___selected_4)); }
	inline bool get_selected_4() const { return ___selected_4; }
	inline bool* get_address_of_selected_4() { return &___selected_4; }
	inline void set_selected_4(bool value)
	{
		___selected_4 = value;
	}

	inline static int32_t get_offset_of_animationDuration_5() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___animationDuration_5)); }
	inline float get_animationDuration_5() const { return ___animationDuration_5; }
	inline float* get_address_of_animationDuration_5() { return &___animationDuration_5; }
	inline void set_animationDuration_5(float value)
	{
		___animationDuration_5 = value;
	}

	inline static int32_t get_offset_of_parentRect_6() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___parentRect_6)); }
	inline RectTransform_t972643934 * get_parentRect_6() const { return ___parentRect_6; }
	inline RectTransform_t972643934 ** get_address_of_parentRect_6() { return &___parentRect_6; }
	inline void set_parentRect_6(RectTransform_t972643934 * value)
	{
		___parentRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___parentRect_6, value);
	}

	inline static int32_t get_offset_of_placeholderText_7() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___placeholderText_7)); }
	inline Text_t9039225 * get_placeholderText_7() const { return ___placeholderText_7; }
	inline Text_t9039225 ** get_address_of_placeholderText_7() { return &___placeholderText_7; }
	inline void set_placeholderText_7(Text_t9039225 * value)
	{
		___placeholderText_7 = value;
		Il2CppCodeGenWriteBarrier(&___placeholderText_7, value);
	}

	inline static int32_t get_offset_of_inputText_8() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___inputText_8)); }
	inline Text_t9039225 * get_inputText_8() const { return ___inputText_8; }
	inline Text_t9039225 ** get_address_of_inputText_8() { return &___inputText_8; }
	inline void set_inputText_8(Text_t9039225 * value)
	{
		___inputText_8 = value;
		Il2CppCodeGenWriteBarrier(&___inputText_8, value);
	}

	inline static int32_t get_offset_of_displayText_9() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___displayText_9)); }
	inline Text_t9039225 * get_displayText_9() const { return ___displayText_9; }
	inline Text_t9039225 ** get_address_of_displayText_9() { return &___displayText_9; }
	inline void set_displayText_9(Text_t9039225 * value)
	{
		___displayText_9 = value;
		Il2CppCodeGenWriteBarrier(&___displayText_9, value);
	}

	inline static int32_t get_offset_of_activeLine_10() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___activeLine_10)); }
	inline Image_t538875265 * get_activeLine_10() const { return ___activeLine_10; }
	inline Image_t538875265 ** get_address_of_activeLine_10() { return &___activeLine_10; }
	inline void set_activeLine_10(Image_t538875265 * value)
	{
		___activeLine_10 = value;
		Il2CppCodeGenWriteBarrier(&___activeLine_10, value);
	}

	inline static int32_t get_offset_of_textRect_11() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___textRect_11)); }
	inline RectTransform_t972643934 * get_textRect_11() const { return ___textRect_11; }
	inline RectTransform_t972643934 ** get_address_of_textRect_11() { return &___textRect_11; }
	inline void set_textRect_11(RectTransform_t972643934 * value)
	{
		___textRect_11 = value;
		Il2CppCodeGenWriteBarrier(&___textRect_11, value);
	}

	inline static int32_t get_offset_of_displayTextRect_12() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___displayTextRect_12)); }
	inline RectTransform_t972643934 * get_displayTextRect_12() const { return ___displayTextRect_12; }
	inline RectTransform_t972643934 ** get_address_of_displayTextRect_12() { return &___displayTextRect_12; }
	inline void set_displayTextRect_12(RectTransform_t972643934 * value)
	{
		___displayTextRect_12 = value;
		Il2CppCodeGenWriteBarrier(&___displayTextRect_12, value);
	}

	inline static int32_t get_offset_of_inputField_13() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___inputField_13)); }
	inline InputField_t609046876 * get_inputField_13() const { return ___inputField_13; }
	inline InputField_t609046876 ** get_address_of_inputField_13() { return &___inputField_13; }
	inline void set_inputField_13(InputField_t609046876 * value)
	{
		___inputField_13 = value;
		Il2CppCodeGenWriteBarrier(&___inputField_13, value);
	}

	inline static int32_t get_offset_of_activeLineRect_14() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___activeLineRect_14)); }
	inline RectTransform_t972643934 * get_activeLineRect_14() const { return ___activeLineRect_14; }
	inline RectTransform_t972643934 ** get_address_of_activeLineRect_14() { return &___activeLineRect_14; }
	inline void set_activeLineRect_14(RectTransform_t972643934 * value)
	{
		___activeLineRect_14 = value;
		Il2CppCodeGenWriteBarrier(&___activeLineRect_14, value);
	}

	inline static int32_t get_offset_of_placeholderRect_15() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___placeholderRect_15)); }
	inline RectTransform_t972643934 * get_placeholderRect_15() const { return ___placeholderRect_15; }
	inline RectTransform_t972643934 ** get_address_of_placeholderRect_15() { return &___placeholderRect_15; }
	inline void set_placeholderRect_15(RectTransform_t972643934 * value)
	{
		___placeholderRect_15 = value;
		Il2CppCodeGenWriteBarrier(&___placeholderRect_15, value);
	}

	inline static int32_t get_offset_of_placeholderOffColor_16() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___placeholderOffColor_16)); }
	inline Color_t4194546905  get_placeholderOffColor_16() const { return ___placeholderOffColor_16; }
	inline Color_t4194546905 * get_address_of_placeholderOffColor_16() { return &___placeholderOffColor_16; }
	inline void set_placeholderOffColor_16(Color_t4194546905  value)
	{
		___placeholderOffColor_16 = value;
	}

	inline static int32_t get_offset_of_placeholderColor_17() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___placeholderColor_17)); }
	inline Color_t4194546905  get_placeholderColor_17() const { return ___placeholderColor_17; }
	inline Color_t4194546905 * get_address_of_placeholderColor_17() { return &___placeholderColor_17; }
	inline void set_placeholderColor_17(Color_t4194546905  value)
	{
		___placeholderColor_17 = value;
	}

	inline static int32_t get_offset_of_placeholderScale_18() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___placeholderScale_18)); }
	inline float get_placeholderScale_18() const { return ___placeholderScale_18; }
	inline float* get_address_of_placeholderScale_18() { return &___placeholderScale_18; }
	inline void set_placeholderScale_18(float value)
	{
		___placeholderScale_18 = value;
	}

	inline static int32_t get_offset_of_placeholderPivot_19() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___placeholderPivot_19)); }
	inline float get_placeholderPivot_19() const { return ___placeholderPivot_19; }
	inline float* get_address_of_placeholderPivot_19() { return &___placeholderPivot_19; }
	inline void set_placeholderPivot_19(float value)
	{
		___placeholderPivot_19 = value;
	}

	inline static int32_t get_offset_of_activeLineAlpha_20() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___activeLineAlpha_20)); }
	inline float get_activeLineAlpha_20() const { return ___activeLineAlpha_20; }
	inline float* get_address_of_activeLineAlpha_20() { return &___activeLineAlpha_20; }
	inline void set_activeLineAlpha_20(float value)
	{
		___activeLineAlpha_20 = value;
	}

	inline static int32_t get_offset_of_activeLinePos_21() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___activeLinePos_21)); }
	inline float get_activeLinePos_21() const { return ___activeLinePos_21; }
	inline float* get_address_of_activeLinePos_21() { return &___activeLinePos_21; }
	inline void set_activeLinePos_21(float value)
	{
		___activeLinePos_21 = value;
	}

	inline static int32_t get_offset_of_animStartTime_22() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___animStartTime_22)); }
	inline float get_animStartTime_22() const { return ___animStartTime_22; }
	inline float* get_address_of_animStartTime_22() { return &___animStartTime_22; }
	inline void set_animStartTime_22(float value)
	{
		___animStartTime_22 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_23() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___animDeltaTime_23)); }
	inline float get_animDeltaTime_23() const { return ___animDeltaTime_23; }
	inline float* get_address_of_animDeltaTime_23() { return &___animDeltaTime_23; }
	inline void set_animDeltaTime_23(float value)
	{
		___animDeltaTime_23 = value;
	}

	inline static int32_t get_offset_of_selectedBefore_24() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___selectedBefore_24)); }
	inline bool get_selectedBefore_24() const { return ___selectedBefore_24; }
	inline bool* get_address_of_selectedBefore_24() { return &___selectedBefore_24; }
	inline void set_selectedBefore_24(bool value)
	{
		___selectedBefore_24 = value;
	}

	inline static int32_t get_offset_of_state_25() { return static_cast<int32_t>(offsetof(InputFieldConfig_t900584798, ___state_25)); }
	inline int32_t get_state_25() const { return ___state_25; }
	inline int32_t* get_address_of_state_25() { return &___state_25; }
	inline void set_state_25(int32_t value)
	{
		___state_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
