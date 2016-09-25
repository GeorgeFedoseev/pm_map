#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Oid
struct  Oid_t2466812144  : public Il2CppObject
{
public:
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_20;
	// System.String System.Security.Cryptography.Oid::_name
	String_t* ____name_21;

public:
	inline static int32_t get_offset_of__value_20() { return static_cast<int32_t>(offsetof(Oid_t2466812144, ____value_20)); }
	inline String_t* get__value_20() const { return ____value_20; }
	inline String_t** get_address_of__value_20() { return &____value_20; }
	inline void set__value_20(String_t* value)
	{
		____value_20 = value;
		Il2CppCodeGenWriteBarrier(&____value_20, value);
	}

	inline static int32_t get_offset_of__name_21() { return static_cast<int32_t>(offsetof(Oid_t2466812144, ____name_21)); }
	inline String_t* get__name_21() const { return ____name_21; }
	inline String_t** get_address_of__name_21() { return &____name_21; }
	inline void set__name_21(String_t* value)
	{
		____name_21 = value;
		Il2CppCodeGenWriteBarrier(&____name_21, value);
	}
};

struct Oid_t2466812144_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Oid::<>f__switch$map14
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map14_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Oid::<>f__switch$map15
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map15_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_22() { return static_cast<int32_t>(offsetof(Oid_t2466812144_StaticFields, ___U3CU3Ef__switchU24map14_22)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map14_22() const { return ___U3CU3Ef__switchU24map14_22; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map14_22() { return &___U3CU3Ef__switchU24map14_22; }
	inline void set_U3CU3Ef__switchU24map14_22(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map14_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map14_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_23() { return static_cast<int32_t>(offsetof(Oid_t2466812144_StaticFields, ___U3CU3Ef__switchU24map15_23)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map15_23() const { return ___U3CU3Ef__switchU24map15_23; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map15_23() { return &___U3CU3Ef__switchU24map15_23; }
	inline void set_U3CU3Ef__switchU24map15_23(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map15_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map15_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
