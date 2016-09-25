#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Edge/pb_Range
struct  pb_Range_t3520127022 
{
public:
	// System.Int32 ProBuilder2.Common.pb_Edge/pb_Range::min
	int32_t ___min_0;
	// System.Int32 ProBuilder2.Common.pb_Edge/pb_Range::max
	int32_t ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(pb_Range_t3520127022, ___min_0)); }
	inline int32_t get_min_0() const { return ___min_0; }
	inline int32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(int32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(pb_Range_t3520127022, ___max_1)); }
	inline int32_t get_max_1() const { return ___max_1; }
	inline int32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(int32_t value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ProBuilder2.Common.pb_Edge/pb_Range
struct pb_Range_t3520127022_marshaled_pinvoke
{
	int32_t ___min_0;
	int32_t ___max_1;
};
// Native definition for marshalling of: ProBuilder2.Common.pb_Edge/pb_Range
struct pb_Range_t3520127022_marshaled_com
{
	int32_t ___min_0;
	int32_t ___max_1;
};
