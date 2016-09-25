#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Transform2D
struct  pb_Transform2D_t1780565441  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Transform2D::position
	Vector2_t4282066565  ___position_0;
	// System.Single ProBuilder2.Common.pb_Transform2D::rotation
	float ___rotation_1;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Transform2D::scale
	Vector2_t4282066565  ___scale_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(pb_Transform2D_t1780565441, ___position_0)); }
	inline Vector2_t4282066565  get_position_0() const { return ___position_0; }
	inline Vector2_t4282066565 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector2_t4282066565  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(pb_Transform2D_t1780565441, ___rotation_1)); }
	inline float get_rotation_1() const { return ___rotation_1; }
	inline float* get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(float value)
	{
		___rotation_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(pb_Transform2D_t1780565441, ___scale_2)); }
	inline Vector2_t4282066565  get_scale_2() const { return ___scale_2; }
	inline Vector2_t4282066565 * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector2_t4282066565  value)
	{
		___scale_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
