#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_RaycastHit
struct  pb_RaycastHit_t2199226581  : public Il2CppObject
{
public:
	// System.Single ProBuilder2.Common.pb_RaycastHit::Distance
	float ___Distance_0;
	// UnityEngine.Vector3 ProBuilder2.Common.pb_RaycastHit::Point
	Vector3_t4282066566  ___Point_1;
	// UnityEngine.Vector3 ProBuilder2.Common.pb_RaycastHit::Normal
	Vector3_t4282066566  ___Normal_2;
	// System.Int32 ProBuilder2.Common.pb_RaycastHit::FaceIndex
	int32_t ___FaceIndex_3;

public:
	inline static int32_t get_offset_of_Distance_0() { return static_cast<int32_t>(offsetof(pb_RaycastHit_t2199226581, ___Distance_0)); }
	inline float get_Distance_0() const { return ___Distance_0; }
	inline float* get_address_of_Distance_0() { return &___Distance_0; }
	inline void set_Distance_0(float value)
	{
		___Distance_0 = value;
	}

	inline static int32_t get_offset_of_Point_1() { return static_cast<int32_t>(offsetof(pb_RaycastHit_t2199226581, ___Point_1)); }
	inline Vector3_t4282066566  get_Point_1() const { return ___Point_1; }
	inline Vector3_t4282066566 * get_address_of_Point_1() { return &___Point_1; }
	inline void set_Point_1(Vector3_t4282066566  value)
	{
		___Point_1 = value;
	}

	inline static int32_t get_offset_of_Normal_2() { return static_cast<int32_t>(offsetof(pb_RaycastHit_t2199226581, ___Normal_2)); }
	inline Vector3_t4282066566  get_Normal_2() const { return ___Normal_2; }
	inline Vector3_t4282066566 * get_address_of_Normal_2() { return &___Normal_2; }
	inline void set_Normal_2(Vector3_t4282066566  value)
	{
		___Normal_2 = value;
	}

	inline static int32_t get_offset_of_FaceIndex_3() { return static_cast<int32_t>(offsetof(pb_RaycastHit_t2199226581, ___FaceIndex_3)); }
	inline int32_t get_FaceIndex_3() const { return ___FaceIndex_3; }
	inline int32_t* get_address_of_FaceIndex_3() { return &___FaceIndex_3; }
	inline void set_FaceIndex_3(int32_t value)
	{
		___FaceIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
