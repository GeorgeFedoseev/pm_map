#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PinchZoom
struct  PinchZoom_t1518303117  : public MonoBehaviour_t667441552
{
public:
	// System.Single PinchZoom::minPinchSpeed
	float ___minPinchSpeed_2;
	// System.Single PinchZoom::minDistance
	float ___minDistance_3;
	// System.Single PinchZoom::touchDelta
	float ___touchDelta_4;
	// UnityEngine.Vector2 PinchZoom::previousDistance
	Vector2_t4282066565  ___previousDistance_5;
	// UnityEngine.Vector2 PinchZoom::currentDistance
	Vector2_t4282066565  ___currentDistance_6;
	// System.Single PinchZoom::speedTouch0
	float ___speedTouch0_7;
	// System.Single PinchZoom::speedTouch1
	float ___speedTouch1_8;
	// System.Int32 PinchZoom::speed
	int32_t ___speed_9;
	// System.Int32 PinchZoom::maxOut
	int32_t ___maxOut_10;
	// System.Int32 PinchZoom::maxIn
	int32_t ___maxIn_11;
	// System.Boolean PinchZoom::showGUI
	bool ___showGUI_12;

public:
	inline static int32_t get_offset_of_minPinchSpeed_2() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___minPinchSpeed_2)); }
	inline float get_minPinchSpeed_2() const { return ___minPinchSpeed_2; }
	inline float* get_address_of_minPinchSpeed_2() { return &___minPinchSpeed_2; }
	inline void set_minPinchSpeed_2(float value)
	{
		___minPinchSpeed_2 = value;
	}

	inline static int32_t get_offset_of_minDistance_3() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___minDistance_3)); }
	inline float get_minDistance_3() const { return ___minDistance_3; }
	inline float* get_address_of_minDistance_3() { return &___minDistance_3; }
	inline void set_minDistance_3(float value)
	{
		___minDistance_3 = value;
	}

	inline static int32_t get_offset_of_touchDelta_4() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___touchDelta_4)); }
	inline float get_touchDelta_4() const { return ___touchDelta_4; }
	inline float* get_address_of_touchDelta_4() { return &___touchDelta_4; }
	inline void set_touchDelta_4(float value)
	{
		___touchDelta_4 = value;
	}

	inline static int32_t get_offset_of_previousDistance_5() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___previousDistance_5)); }
	inline Vector2_t4282066565  get_previousDistance_5() const { return ___previousDistance_5; }
	inline Vector2_t4282066565 * get_address_of_previousDistance_5() { return &___previousDistance_5; }
	inline void set_previousDistance_5(Vector2_t4282066565  value)
	{
		___previousDistance_5 = value;
	}

	inline static int32_t get_offset_of_currentDistance_6() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___currentDistance_6)); }
	inline Vector2_t4282066565  get_currentDistance_6() const { return ___currentDistance_6; }
	inline Vector2_t4282066565 * get_address_of_currentDistance_6() { return &___currentDistance_6; }
	inline void set_currentDistance_6(Vector2_t4282066565  value)
	{
		___currentDistance_6 = value;
	}

	inline static int32_t get_offset_of_speedTouch0_7() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___speedTouch0_7)); }
	inline float get_speedTouch0_7() const { return ___speedTouch0_7; }
	inline float* get_address_of_speedTouch0_7() { return &___speedTouch0_7; }
	inline void set_speedTouch0_7(float value)
	{
		___speedTouch0_7 = value;
	}

	inline static int32_t get_offset_of_speedTouch1_8() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___speedTouch1_8)); }
	inline float get_speedTouch1_8() const { return ___speedTouch1_8; }
	inline float* get_address_of_speedTouch1_8() { return &___speedTouch1_8; }
	inline void set_speedTouch1_8(float value)
	{
		___speedTouch1_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___speed_9)); }
	inline int32_t get_speed_9() const { return ___speed_9; }
	inline int32_t* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(int32_t value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_maxOut_10() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___maxOut_10)); }
	inline int32_t get_maxOut_10() const { return ___maxOut_10; }
	inline int32_t* get_address_of_maxOut_10() { return &___maxOut_10; }
	inline void set_maxOut_10(int32_t value)
	{
		___maxOut_10 = value;
	}

	inline static int32_t get_offset_of_maxIn_11() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___maxIn_11)); }
	inline int32_t get_maxIn_11() const { return ___maxIn_11; }
	inline int32_t* get_address_of_maxIn_11() { return &___maxIn_11; }
	inline void set_maxIn_11(int32_t value)
	{
		___maxIn_11 = value;
	}

	inline static int32_t get_offset_of_showGUI_12() { return static_cast<int32_t>(offsetof(PinchZoom_t1518303117, ___showGUI_12)); }
	inline bool get_showGUI_12() const { return ___showGUI_12; }
	inline bool* get_address_of_showGUI_12() { return &___showGUI_12; }
	inline void set_showGUI_12(bool value)
	{
		___showGUI_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
