#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ArrowPointerScript
struct ArrowPointerScript_t1893640191;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchResults3d/<UpdateArrows>c__AnonStorey1D
struct  U3CUpdateArrowsU3Ec__AnonStorey1D_t514513947  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 SearchResults3d/<UpdateArrows>c__AnonStorey1D::targetPosition
	Vector3_t4282066566  ___targetPosition_0;
	// ArrowPointerScript SearchResults3d/<UpdateArrows>c__AnonStorey1D::arrow
	ArrowPointerScript_t1893640191 * ___arrow_1;

public:
	inline static int32_t get_offset_of_targetPosition_0() { return static_cast<int32_t>(offsetof(U3CUpdateArrowsU3Ec__AnonStorey1D_t514513947, ___targetPosition_0)); }
	inline Vector3_t4282066566  get_targetPosition_0() const { return ___targetPosition_0; }
	inline Vector3_t4282066566 * get_address_of_targetPosition_0() { return &___targetPosition_0; }
	inline void set_targetPosition_0(Vector3_t4282066566  value)
	{
		___targetPosition_0 = value;
	}

	inline static int32_t get_offset_of_arrow_1() { return static_cast<int32_t>(offsetof(U3CUpdateArrowsU3Ec__AnonStorey1D_t514513947, ___arrow_1)); }
	inline ArrowPointerScript_t1893640191 * get_arrow_1() const { return ___arrow_1; }
	inline ArrowPointerScript_t1893640191 ** get_address_of_arrow_1() { return &___arrow_1; }
	inline void set_arrow_1(ArrowPointerScript_t1893640191 * value)
	{
		___arrow_1 = value;
		Il2CppCodeGenWriteBarrier(&___arrow_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
