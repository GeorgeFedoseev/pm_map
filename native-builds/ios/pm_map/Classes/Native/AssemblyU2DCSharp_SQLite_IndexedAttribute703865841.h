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

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.IndexedAttribute
struct  IndexedAttribute_t703865841  : public Attribute_t2523058482
{
public:
	// System.String SQLite.IndexedAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 SQLite.IndexedAttribute::<Order>k__BackingField
	int32_t ___U3COrderU3Ek__BackingField_1;
	// System.Boolean SQLite.IndexedAttribute::<Unique>k__BackingField
	bool ___U3CUniqueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(IndexedAttribute_t703865841, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(IndexedAttribute_t703865841, ___U3COrderU3Ek__BackingField_1)); }
	inline int32_t get_U3COrderU3Ek__BackingField_1() const { return ___U3COrderU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3COrderU3Ek__BackingField_1() { return &___U3COrderU3Ek__BackingField_1; }
	inline void set_U3COrderU3Ek__BackingField_1(int32_t value)
	{
		___U3COrderU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUniqueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IndexedAttribute_t703865841, ___U3CUniqueU3Ek__BackingField_2)); }
	inline bool get_U3CUniqueU3Ek__BackingField_2() const { return ___U3CUniqueU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CUniqueU3Ek__BackingField_2() { return &___U3CUniqueU3Ek__BackingField_2; }
	inline void set_U3CUniqueU3Ek__BackingField_2(bool value)
	{
		___U3CUniqueU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
