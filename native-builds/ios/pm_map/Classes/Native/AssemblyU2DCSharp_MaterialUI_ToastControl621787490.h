#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ToastControl
struct  ToastControl_t621787490  : public Il2CppObject
{
public:

public:
};

struct ToastControl_t621787490_StaticFields
{
public:
	// UnityEngine.GameObject MaterialUI.ToastControl::theToast
	GameObject_t3674682005 * ___theToast_0;
	// System.String MaterialUI.ToastControl::toastText
	String_t* ___toastText_1;
	// System.Single MaterialUI.ToastControl::toastDuration
	float ___toastDuration_2;
	// UnityEngine.Color MaterialUI.ToastControl::toastPanelColor
	Color_t4194546905  ___toastPanelColor_3;
	// UnityEngine.Color MaterialUI.ToastControl::toastTextColor
	Color_t4194546905  ___toastTextColor_4;
	// System.Int32 MaterialUI.ToastControl::toastFontSize
	int32_t ___toastFontSize_5;
	// UnityEngine.Canvas MaterialUI.ToastControl::parentCanvas
	Canvas_t2727140764 * ___parentCanvas_6;

public:
	inline static int32_t get_offset_of_theToast_0() { return static_cast<int32_t>(offsetof(ToastControl_t621787490_StaticFields, ___theToast_0)); }
	inline GameObject_t3674682005 * get_theToast_0() const { return ___theToast_0; }
	inline GameObject_t3674682005 ** get_address_of_theToast_0() { return &___theToast_0; }
	inline void set_theToast_0(GameObject_t3674682005 * value)
	{
		___theToast_0 = value;
		Il2CppCodeGenWriteBarrier(&___theToast_0, value);
	}

	inline static int32_t get_offset_of_toastText_1() { return static_cast<int32_t>(offsetof(ToastControl_t621787490_StaticFields, ___toastText_1)); }
	inline String_t* get_toastText_1() const { return ___toastText_1; }
	inline String_t** get_address_of_toastText_1() { return &___toastText_1; }
	inline void set_toastText_1(String_t* value)
	{
		___toastText_1 = value;
		Il2CppCodeGenWriteBarrier(&___toastText_1, value);
	}

	inline static int32_t get_offset_of_toastDuration_2() { return static_cast<int32_t>(offsetof(ToastControl_t621787490_StaticFields, ___toastDuration_2)); }
	inline float get_toastDuration_2() const { return ___toastDuration_2; }
	inline float* get_address_of_toastDuration_2() { return &___toastDuration_2; }
	inline void set_toastDuration_2(float value)
	{
		___toastDuration_2 = value;
	}

	inline static int32_t get_offset_of_toastPanelColor_3() { return static_cast<int32_t>(offsetof(ToastControl_t621787490_StaticFields, ___toastPanelColor_3)); }
	inline Color_t4194546905  get_toastPanelColor_3() const { return ___toastPanelColor_3; }
	inline Color_t4194546905 * get_address_of_toastPanelColor_3() { return &___toastPanelColor_3; }
	inline void set_toastPanelColor_3(Color_t4194546905  value)
	{
		___toastPanelColor_3 = value;
	}

	inline static int32_t get_offset_of_toastTextColor_4() { return static_cast<int32_t>(offsetof(ToastControl_t621787490_StaticFields, ___toastTextColor_4)); }
	inline Color_t4194546905  get_toastTextColor_4() const { return ___toastTextColor_4; }
	inline Color_t4194546905 * get_address_of_toastTextColor_4() { return &___toastTextColor_4; }
	inline void set_toastTextColor_4(Color_t4194546905  value)
	{
		___toastTextColor_4 = value;
	}

	inline static int32_t get_offset_of_toastFontSize_5() { return static_cast<int32_t>(offsetof(ToastControl_t621787490_StaticFields, ___toastFontSize_5)); }
	inline int32_t get_toastFontSize_5() const { return ___toastFontSize_5; }
	inline int32_t* get_address_of_toastFontSize_5() { return &___toastFontSize_5; }
	inline void set_toastFontSize_5(int32_t value)
	{
		___toastFontSize_5 = value;
	}

	inline static int32_t get_offset_of_parentCanvas_6() { return static_cast<int32_t>(offsetof(ToastControl_t621787490_StaticFields, ___parentCanvas_6)); }
	inline Canvas_t2727140764 * get_parentCanvas_6() const { return ___parentCanvas_6; }
	inline Canvas_t2727140764 ** get_address_of_parentCanvas_6() { return &___parentCanvas_6; }
	inline void set_parentCanvas_6(Canvas_t2727140764 * value)
	{
		___parentCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___parentCanvas_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
