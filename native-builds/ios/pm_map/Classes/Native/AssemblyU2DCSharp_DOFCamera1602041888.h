#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DOFCamera
struct  DOFCamera_t1602041888  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera DOFCamera::srcCamera
	Camera_t2727095145 * ___srcCamera_2;
	// System.Single DOFCamera::sampleRadius
	float ___sampleRadius_3;
	// System.Single DOFCamera::alpha
	float ___alpha_4;
	// System.Single DOFCamera::focalDistance
	float ___focalDistance_5;
	// UnityEngine.Vector3 DOFCamera::tpos
	Vector3_t4282066566  ___tpos_6;

public:
	inline static int32_t get_offset_of_srcCamera_2() { return static_cast<int32_t>(offsetof(DOFCamera_t1602041888, ___srcCamera_2)); }
	inline Camera_t2727095145 * get_srcCamera_2() const { return ___srcCamera_2; }
	inline Camera_t2727095145 ** get_address_of_srcCamera_2() { return &___srcCamera_2; }
	inline void set_srcCamera_2(Camera_t2727095145 * value)
	{
		___srcCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___srcCamera_2, value);
	}

	inline static int32_t get_offset_of_sampleRadius_3() { return static_cast<int32_t>(offsetof(DOFCamera_t1602041888, ___sampleRadius_3)); }
	inline float get_sampleRadius_3() const { return ___sampleRadius_3; }
	inline float* get_address_of_sampleRadius_3() { return &___sampleRadius_3; }
	inline void set_sampleRadius_3(float value)
	{
		___sampleRadius_3 = value;
	}

	inline static int32_t get_offset_of_alpha_4() { return static_cast<int32_t>(offsetof(DOFCamera_t1602041888, ___alpha_4)); }
	inline float get_alpha_4() const { return ___alpha_4; }
	inline float* get_address_of_alpha_4() { return &___alpha_4; }
	inline void set_alpha_4(float value)
	{
		___alpha_4 = value;
	}

	inline static int32_t get_offset_of_focalDistance_5() { return static_cast<int32_t>(offsetof(DOFCamera_t1602041888, ___focalDistance_5)); }
	inline float get_focalDistance_5() const { return ___focalDistance_5; }
	inline float* get_address_of_focalDistance_5() { return &___focalDistance_5; }
	inline void set_focalDistance_5(float value)
	{
		___focalDistance_5 = value;
	}

	inline static int32_t get_offset_of_tpos_6() { return static_cast<int32_t>(offsetof(DOFCamera_t1602041888, ___tpos_6)); }
	inline Vector3_t4282066566  get_tpos_6() const { return ___tpos_6; }
	inline Vector3_t4282066566 * get_address_of_tpos_6() { return &___tpos_6; }
	inline void set_tpos_6(Vector3_t4282066566  value)
	{
		___tpos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
