#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextMarquee
struct  TextMarquee_t1667376661  : public MonoBehaviour_t667441552
{
public:
	// System.Single TextMarquee::scrollSpeed
	float ___scrollSpeed_2;
	// UnityEngine.UI.Text TextMarquee::label
	Text_t9039225 * ___label_3;
	// System.Single TextMarquee::leftMargin
	float ___leftMargin_4;
	// System.Boolean TextMarquee::left_direction
	bool ___left_direction_5;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(TextMarquee_t1667376661, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_label_3() { return static_cast<int32_t>(offsetof(TextMarquee_t1667376661, ___label_3)); }
	inline Text_t9039225 * get_label_3() const { return ___label_3; }
	inline Text_t9039225 ** get_address_of_label_3() { return &___label_3; }
	inline void set_label_3(Text_t9039225 * value)
	{
		___label_3 = value;
		Il2CppCodeGenWriteBarrier(&___label_3, value);
	}

	inline static int32_t get_offset_of_leftMargin_4() { return static_cast<int32_t>(offsetof(TextMarquee_t1667376661, ___leftMargin_4)); }
	inline float get_leftMargin_4() const { return ___leftMargin_4; }
	inline float* get_address_of_leftMargin_4() { return &___leftMargin_4; }
	inline void set_leftMargin_4(float value)
	{
		___leftMargin_4 = value;
	}

	inline static int32_t get_offset_of_left_direction_5() { return static_cast<int32_t>(offsetof(TextMarquee_t1667376661, ___left_direction_5)); }
	inline bool get_left_direction_5() const { return ___left_direction_5; }
	inline bool* get_address_of_left_direction_5() { return &___left_direction_5; }
	inline void set_left_direction_5(bool value)
	{
		___left_direction_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
