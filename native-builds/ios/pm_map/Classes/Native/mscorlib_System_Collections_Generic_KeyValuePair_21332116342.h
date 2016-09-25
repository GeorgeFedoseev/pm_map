#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FacilityScript
struct FacilityScript_t3002937710;
// ArrowPointerScript
struct ArrowPointerScript_t1893640191;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<FacilityScript,ArrowPointerScript>
struct  KeyValuePair_2_t1332116342 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	FacilityScript_t3002937710 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ArrowPointerScript_t1893640191 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1332116342, ___key_0)); }
	inline FacilityScript_t3002937710 * get_key_0() const { return ___key_0; }
	inline FacilityScript_t3002937710 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(FacilityScript_t3002937710 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1332116342, ___value_1)); }
	inline ArrowPointerScript_t1893640191 * get_value_1() const { return ___value_1; }
	inline ArrowPointerScript_t1893640191 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ArrowPointerScript_t1893640191 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
