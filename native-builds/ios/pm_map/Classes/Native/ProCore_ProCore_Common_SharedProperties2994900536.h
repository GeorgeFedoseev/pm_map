#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProCore.Common.SharedProperties
struct  SharedProperties_t2994900536  : public Il2CppObject
{
public:

public:
};

struct SharedProperties_t2994900536_StaticFields
{
public:
	// System.Boolean ProCore.Common.SharedProperties::snapEnabled
	bool ___snapEnabled_0;
	// System.Single ProCore.Common.SharedProperties::snapValue
	float ___snapValue_1;
	// System.Boolean ProCore.Common.SharedProperties::useAxisConstraints
	bool ___useAxisConstraints_2;

public:
	inline static int32_t get_offset_of_snapEnabled_0() { return static_cast<int32_t>(offsetof(SharedProperties_t2994900536_StaticFields, ___snapEnabled_0)); }
	inline bool get_snapEnabled_0() const { return ___snapEnabled_0; }
	inline bool* get_address_of_snapEnabled_0() { return &___snapEnabled_0; }
	inline void set_snapEnabled_0(bool value)
	{
		___snapEnabled_0 = value;
	}

	inline static int32_t get_offset_of_snapValue_1() { return static_cast<int32_t>(offsetof(SharedProperties_t2994900536_StaticFields, ___snapValue_1)); }
	inline float get_snapValue_1() const { return ___snapValue_1; }
	inline float* get_address_of_snapValue_1() { return &___snapValue_1; }
	inline void set_snapValue_1(float value)
	{
		___snapValue_1 = value;
	}

	inline static int32_t get_offset_of_useAxisConstraints_2() { return static_cast<int32_t>(offsetof(SharedProperties_t2994900536_StaticFields, ___useAxisConstraints_2)); }
	inline bool get_useAxisConstraints_2() const { return ___useAxisConstraints_2; }
	inline bool* get_address_of_useAxisConstraints_2() { return &___useAxisConstraints_2; }
	inline void set_useAxisConstraints_2(bool value)
	{
		___useAxisConstraints_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
