#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VertPivot
struct  VertPivot_t602236273  : public MonoBehaviour_t667441552
{
public:
	// System.Single VertPivot::cameraTopLimit
	float ___cameraTopLimit_2;
	// System.Single VertPivot::cameraBottomLimit
	float ___cameraBottomLimit_3;
	// System.Single VertPivot::thresholdTop
	float ___thresholdTop_4;
	// System.Single VertPivot::thresholdBottom
	float ___thresholdBottom_5;
	// System.Single VertPivot::moveSpeed
	float ___moveSpeed_6;
	// System.Single VertPivot::rotationSpeed
	float ___rotationSpeed_7;
	// System.Single VertPivot::lerpSpeed
	float ___lerpSpeed_8;
	// System.Boolean VertPivot::showGUI
	bool ___showGUI_9;
	// System.Single VertPivot::holdTimer
	float ___holdTimer_10;
	// System.Single VertPivot::yaxis
	float ___yaxis_11;
	// System.Single VertPivot::speed
	float ___speed_12;
	// System.Single VertPivot::minimumTilt
	float ___minimumTilt_13;
	// System.Single VertPivot::maximumTilt
	float ___maximumTilt_14;
	// System.Single VertPivot::rotationY
	float ___rotationY_15;
	// UnityEngine.Quaternion VertPivot::originalRotation
	Quaternion_t1553702882  ___originalRotation_16;
	// System.Single VertPivot::originalXRot
	float ___originalXRot_17;
	// System.Single VertPivot::originalYRot
	float ___originalYRot_18;
	// System.Int32 VertPivot::lastTouch
	int32_t ___lastTouch_19;

public:
	inline static int32_t get_offset_of_cameraTopLimit_2() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___cameraTopLimit_2)); }
	inline float get_cameraTopLimit_2() const { return ___cameraTopLimit_2; }
	inline float* get_address_of_cameraTopLimit_2() { return &___cameraTopLimit_2; }
	inline void set_cameraTopLimit_2(float value)
	{
		___cameraTopLimit_2 = value;
	}

	inline static int32_t get_offset_of_cameraBottomLimit_3() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___cameraBottomLimit_3)); }
	inline float get_cameraBottomLimit_3() const { return ___cameraBottomLimit_3; }
	inline float* get_address_of_cameraBottomLimit_3() { return &___cameraBottomLimit_3; }
	inline void set_cameraBottomLimit_3(float value)
	{
		___cameraBottomLimit_3 = value;
	}

	inline static int32_t get_offset_of_thresholdTop_4() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___thresholdTop_4)); }
	inline float get_thresholdTop_4() const { return ___thresholdTop_4; }
	inline float* get_address_of_thresholdTop_4() { return &___thresholdTop_4; }
	inline void set_thresholdTop_4(float value)
	{
		___thresholdTop_4 = value;
	}

	inline static int32_t get_offset_of_thresholdBottom_5() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___thresholdBottom_5)); }
	inline float get_thresholdBottom_5() const { return ___thresholdBottom_5; }
	inline float* get_address_of_thresholdBottom_5() { return &___thresholdBottom_5; }
	inline void set_thresholdBottom_5(float value)
	{
		___thresholdBottom_5 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_7() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___rotationSpeed_7)); }
	inline float get_rotationSpeed_7() const { return ___rotationSpeed_7; }
	inline float* get_address_of_rotationSpeed_7() { return &___rotationSpeed_7; }
	inline void set_rotationSpeed_7(float value)
	{
		___rotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_lerpSpeed_8() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___lerpSpeed_8)); }
	inline float get_lerpSpeed_8() const { return ___lerpSpeed_8; }
	inline float* get_address_of_lerpSpeed_8() { return &___lerpSpeed_8; }
	inline void set_lerpSpeed_8(float value)
	{
		___lerpSpeed_8 = value;
	}

	inline static int32_t get_offset_of_showGUI_9() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___showGUI_9)); }
	inline bool get_showGUI_9() const { return ___showGUI_9; }
	inline bool* get_address_of_showGUI_9() { return &___showGUI_9; }
	inline void set_showGUI_9(bool value)
	{
		___showGUI_9 = value;
	}

	inline static int32_t get_offset_of_holdTimer_10() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___holdTimer_10)); }
	inline float get_holdTimer_10() const { return ___holdTimer_10; }
	inline float* get_address_of_holdTimer_10() { return &___holdTimer_10; }
	inline void set_holdTimer_10(float value)
	{
		___holdTimer_10 = value;
	}

	inline static int32_t get_offset_of_yaxis_11() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___yaxis_11)); }
	inline float get_yaxis_11() const { return ___yaxis_11; }
	inline float* get_address_of_yaxis_11() { return &___yaxis_11; }
	inline void set_yaxis_11(float value)
	{
		___yaxis_11 = value;
	}

	inline static int32_t get_offset_of_speed_12() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___speed_12)); }
	inline float get_speed_12() const { return ___speed_12; }
	inline float* get_address_of_speed_12() { return &___speed_12; }
	inline void set_speed_12(float value)
	{
		___speed_12 = value;
	}

	inline static int32_t get_offset_of_minimumTilt_13() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___minimumTilt_13)); }
	inline float get_minimumTilt_13() const { return ___minimumTilt_13; }
	inline float* get_address_of_minimumTilt_13() { return &___minimumTilt_13; }
	inline void set_minimumTilt_13(float value)
	{
		___minimumTilt_13 = value;
	}

	inline static int32_t get_offset_of_maximumTilt_14() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___maximumTilt_14)); }
	inline float get_maximumTilt_14() const { return ___maximumTilt_14; }
	inline float* get_address_of_maximumTilt_14() { return &___maximumTilt_14; }
	inline void set_maximumTilt_14(float value)
	{
		___maximumTilt_14 = value;
	}

	inline static int32_t get_offset_of_rotationY_15() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___rotationY_15)); }
	inline float get_rotationY_15() const { return ___rotationY_15; }
	inline float* get_address_of_rotationY_15() { return &___rotationY_15; }
	inline void set_rotationY_15(float value)
	{
		___rotationY_15 = value;
	}

	inline static int32_t get_offset_of_originalRotation_16() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___originalRotation_16)); }
	inline Quaternion_t1553702882  get_originalRotation_16() const { return ___originalRotation_16; }
	inline Quaternion_t1553702882 * get_address_of_originalRotation_16() { return &___originalRotation_16; }
	inline void set_originalRotation_16(Quaternion_t1553702882  value)
	{
		___originalRotation_16 = value;
	}

	inline static int32_t get_offset_of_originalXRot_17() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___originalXRot_17)); }
	inline float get_originalXRot_17() const { return ___originalXRot_17; }
	inline float* get_address_of_originalXRot_17() { return &___originalXRot_17; }
	inline void set_originalXRot_17(float value)
	{
		___originalXRot_17 = value;
	}

	inline static int32_t get_offset_of_originalYRot_18() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___originalYRot_18)); }
	inline float get_originalYRot_18() const { return ___originalYRot_18; }
	inline float* get_address_of_originalYRot_18() { return &___originalYRot_18; }
	inline void set_originalYRot_18(float value)
	{
		___originalYRot_18 = value;
	}

	inline static int32_t get_offset_of_lastTouch_19() { return static_cast<int32_t>(offsetof(VertPivot_t602236273, ___lastTouch_19)); }
	inline int32_t get_lastTouch_19() const { return ___lastTouch_19; }
	inline int32_t* get_address_of_lastTouch_19() { return &___lastTouch_19; }
	inline void set_lastTouch_19(int32_t value)
	{
		___lastTouch_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
