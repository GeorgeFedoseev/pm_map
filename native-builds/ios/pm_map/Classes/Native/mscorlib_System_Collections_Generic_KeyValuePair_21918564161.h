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

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection_IndexInf1199365085.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,SQLite.SQLiteConnection/IndexInfo>
struct  KeyValuePair_2_t1918564161 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	IndexInfo_t1199365085  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1918564161, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1918564161, ___value_1)); }
	inline IndexInfo_t1199365085  get_value_1() const { return ___value_1; }
	inline IndexInfo_t1199365085 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(IndexInfo_t1199365085  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
