#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoriPivot
struct  HoriPivot_t70108484  : public MonoBehaviour_t667441552
{
public:
	// System.Single HoriPivot::rotationSpeed
	float ___rotationSpeed_2;
	// System.Single HoriPivot::lerpSpeed
	float ___lerpSpeed_3;
	// System.Single HoriPivot::speed
	float ___speed_4;
	// System.Single HoriPivot::holdTimer
	float ___holdTimer_5;
	// System.Single HoriPivot::xAxis
	float ___xAxis_6;
	// System.Int32 HoriPivot::lastTouch
	int32_t ___lastTouch_7;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(HoriPivot_t70108484, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_lerpSpeed_3() { return static_cast<int32_t>(offsetof(HoriPivot_t70108484, ___lerpSpeed_3)); }
	inline float get_lerpSpeed_3() const { return ___lerpSpeed_3; }
	inline float* get_address_of_lerpSpeed_3() { return &___lerpSpeed_3; }
	inline void set_lerpSpeed_3(float value)
	{
		___lerpSpeed_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(HoriPivot_t70108484, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_holdTimer_5() { return static_cast<int32_t>(offsetof(HoriPivot_t70108484, ___holdTimer_5)); }
	inline float get_holdTimer_5() const { return ___holdTimer_5; }
	inline float* get_address_of_holdTimer_5() { return &___holdTimer_5; }
	inline void set_holdTimer_5(float value)
	{
		___holdTimer_5 = value;
	}

	inline static int32_t get_offset_of_xAxis_6() { return static_cast<int32_t>(offsetof(HoriPivot_t70108484, ___xAxis_6)); }
	inline float get_xAxis_6() const { return ___xAxis_6; }
	inline float* get_address_of_xAxis_6() { return &___xAxis_6; }
	inline void set_xAxis_6(float value)
	{
		___xAxis_6 = value;
	}

	inline static int32_t get_offset_of_lastTouch_7() { return static_cast<int32_t>(offsetof(HoriPivot_t70108484, ___lastTouch_7)); }
	inline int32_t get_lastTouch_7() const { return ___lastTouch_7; }
	inline int32_t* get_address_of_lastTouch_7() { return &___lastTouch_7; }
	inline void set_lastTouch_7(int32_t value)
	{
		___lastTouch_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
