﻿#pragma once

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

// SQLite.BaseTableQuery/Ordering
struct  Ordering_t4150661206  : public Il2CppObject
{
public:
	// System.String SQLite.BaseTableQuery/Ordering::<ColumnName>k__BackingField
	String_t* ___U3CColumnNameU3Ek__BackingField_0;
	// System.Boolean SQLite.BaseTableQuery/Ordering::<Ascending>k__BackingField
	bool ___U3CAscendingU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CColumnNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Ordering_t4150661206, ___U3CColumnNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CColumnNameU3Ek__BackingField_0() const { return ___U3CColumnNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CColumnNameU3Ek__BackingField_0() { return &___U3CColumnNameU3Ek__BackingField_0; }
	inline void set_U3CColumnNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CColumnNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CColumnNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CAscendingU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Ordering_t4150661206, ___U3CAscendingU3Ek__BackingField_1)); }
	inline bool get_U3CAscendingU3Ek__BackingField_1() const { return ___U3CAscendingU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAscendingU3Ek__BackingField_1() { return &___U3CAscendingU3Ek__BackingField_1; }
	inline void set_U3CAscendingU3Ek__BackingField_1(bool value)
	{
		___U3CAscendingU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
