#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Extents
struct  Extents_t2060714539 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t4282066565  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t4282066565  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_t2060714539, ___min_0)); }
	inline Vector2_t4282066565  get_min_0() const { return ___min_0; }
	inline Vector2_t4282066565 * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_t4282066565  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_t2060714539, ___max_1)); }
	inline Vector2_t4282066565  get_max_1() const { return ___max_1; }
	inline Vector2_t4282066565 * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_t4282066565  value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TMPro.Extents
struct Extents_t2060714539_marshaled_pinvoke
{
	Vector2_t4282066565_marshaled_pinvoke ___min_0;
	Vector2_t4282066565_marshaled_pinvoke ___max_1;
};
// Native definition for marshalling of: TMPro.Extents
struct Extents_t2060714539_marshaled_com
{
	Vector2_t4282066565_marshaled_com ___min_0;
	Vector2_t4282066565_marshaled_com ___max_1;
};
