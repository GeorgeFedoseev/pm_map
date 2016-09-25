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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.SQLiteConnectionString
struct  SQLiteConnectionString_t2984844929  : public Il2CppObject
{
public:
	// System.String SQLite.SQLiteConnectionString::<ConnectionString>k__BackingField
	String_t* ___U3CConnectionStringU3Ek__BackingField_0;
	// System.String SQLite.SQLiteConnectionString::<DatabasePath>k__BackingField
	String_t* ___U3CDatabasePathU3Ek__BackingField_1;
	// System.Boolean SQLite.SQLiteConnectionString::<StoreDateTimeAsTicks>k__BackingField
	bool ___U3CStoreDateTimeAsTicksU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SQLiteConnectionString_t2984844929, ___U3CConnectionStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CConnectionStringU3Ek__BackingField_0() const { return ___U3CConnectionStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CConnectionStringU3Ek__BackingField_0() { return &___U3CConnectionStringU3Ek__BackingField_0; }
	inline void set_U3CConnectionStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CConnectionStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConnectionStringU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CDatabasePathU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SQLiteConnectionString_t2984844929, ___U3CDatabasePathU3Ek__BackingField_1)); }
	inline String_t* get_U3CDatabasePathU3Ek__BackingField_1() const { return ___U3CDatabasePathU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDatabasePathU3Ek__BackingField_1() { return &___U3CDatabasePathU3Ek__BackingField_1; }
	inline void set_U3CDatabasePathU3Ek__BackingField_1(String_t* value)
	{
		___U3CDatabasePathU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDatabasePathU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SQLiteConnectionString_t2984844929, ___U3CStoreDateTimeAsTicksU3Ek__BackingField_2)); }
	inline bool get_U3CStoreDateTimeAsTicksU3Ek__BackingField_2() const { return ___U3CStoreDateTimeAsTicksU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_2() { return &___U3CStoreDateTimeAsTicksU3Ek__BackingField_2; }
	inline void set_U3CStoreDateTimeAsTicksU3Ek__BackingField_2(bool value)
	{
		___U3CStoreDateTimeAsTicksU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
