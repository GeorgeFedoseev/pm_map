#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_IntArray
struct  pb_IntArray_t226981141  : public Il2CppObject
{
public:
	// System.Int32[] ProBuilder2.Common.pb_IntArray::array
	Int32U5BU5D_t3230847821* ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(pb_IntArray_t226981141, ___array_0)); }
	inline Int32U5BU5D_t3230847821* get_array_0() const { return ___array_0; }
	inline Int32U5BU5D_t3230847821** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Int32U5BU5D_t3230847821* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
