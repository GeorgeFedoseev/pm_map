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

// ProBuilder2.Common.pb_Bounds2D
struct  pb_Bounds2D_t1869484338  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::center
	Vector2_t4282066565  ___center_0;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::_size
	Vector2_t4282066565  ____size_1;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Bounds2D::<extents>k__BackingField
	Vector2_t4282066565  ___U3CextentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(pb_Bounds2D_t1869484338, ___center_0)); }
	inline Vector2_t4282066565  get_center_0() const { return ___center_0; }
	inline Vector2_t4282066565 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_t4282066565  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(pb_Bounds2D_t1869484338, ____size_1)); }
	inline Vector2_t4282066565  get__size_1() const { return ____size_1; }
	inline Vector2_t4282066565 * get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(Vector2_t4282066565  value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of_U3CextentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(pb_Bounds2D_t1869484338, ___U3CextentsU3Ek__BackingField_2)); }
	inline Vector2_t4282066565  get_U3CextentsU3Ek__BackingField_2() const { return ___U3CextentsU3Ek__BackingField_2; }
	inline Vector2_t4282066565 * get_address_of_U3CextentsU3Ek__BackingField_2() { return &___U3CextentsU3Ek__BackingField_2; }
	inline void set_U3CextentsU3Ek__BackingField_2(Vector2_t4282066565  value)
	{
		___U3CextentsU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
