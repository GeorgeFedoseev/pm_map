#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,ProBuilder2.Common.pb_CIE_Lab_Color>
struct Dictionary_2_t899694006;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_ColorUtil
struct  pb_ColorUtil_t783899656  : public Il2CppObject
{
public:

public:
};

struct pb_ColorUtil_t783899656_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,ProBuilder2.Common.pb_CIE_Lab_Color> ProBuilder2.Common.pb_ColorUtil::ColorNameLookup
	Dictionary_2_t899694006 * ___ColorNameLookup_0;

public:
	inline static int32_t get_offset_of_ColorNameLookup_0() { return static_cast<int32_t>(offsetof(pb_ColorUtil_t783899656_StaticFields, ___ColorNameLookup_0)); }
	inline Dictionary_2_t899694006 * get_ColorNameLookup_0() const { return ___ColorNameLookup_0; }
	inline Dictionary_2_t899694006 ** get_address_of_ColorNameLookup_0() { return &___ColorNameLookup_0; }
	inline void set_ColorNameLookup_0(Dictionary_2_t899694006 * value)
	{
		___ColorNameLookup_0 = value;
		Il2CppCodeGenWriteBarrier(&___ColorNameLookup_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
