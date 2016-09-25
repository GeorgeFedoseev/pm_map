#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.Toaster
struct  Toaster_t1982138170  : public MonoBehaviour_t667441552
{
public:
	// System.String MaterialUI.Toaster::text
	String_t* ___text_2;
	// System.Single MaterialUI.Toaster::duration
	float ___duration_3;
	// UnityEngine.Color MaterialUI.Toaster::panelColor
	Color_t4194546905  ___panelColor_4;
	// UnityEngine.Color MaterialUI.Toaster::textColor
	Color_t4194546905  ___textColor_5;
	// System.Int32 MaterialUI.Toaster::fontSize
	int32_t ___fontSize_6;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Toaster_t1982138170, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(Toaster_t1982138170, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_panelColor_4() { return static_cast<int32_t>(offsetof(Toaster_t1982138170, ___panelColor_4)); }
	inline Color_t4194546905  get_panelColor_4() const { return ___panelColor_4; }
	inline Color_t4194546905 * get_address_of_panelColor_4() { return &___panelColor_4; }
	inline void set_panelColor_4(Color_t4194546905  value)
	{
		___panelColor_4 = value;
	}

	inline static int32_t get_offset_of_textColor_5() { return static_cast<int32_t>(offsetof(Toaster_t1982138170, ___textColor_5)); }
	inline Color_t4194546905  get_textColor_5() const { return ___textColor_5; }
	inline Color_t4194546905 * get_address_of_textColor_5() { return &___textColor_5; }
	inline void set_textColor_5(Color_t4194546905  value)
	{
		___textColor_5 = value;
	}

	inline static int32_t get_offset_of_fontSize_6() { return static_cast<int32_t>(offsetof(Toaster_t1982138170, ___fontSize_6)); }
	inline int32_t get_fontSize_6() const { return ___fontSize_6; }
	inline int32_t* get_address_of_fontSize_6() { return &___fontSize_6; }
	inline void set_fontSize_6(int32_t value)
	{
		___fontSize_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
