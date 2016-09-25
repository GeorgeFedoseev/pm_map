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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.SQLiteConnection/IndexedColumn
struct  IndexedColumn_t1407024228 
{
public:
	// System.Int32 SQLite.SQLiteConnection/IndexedColumn::Order
	int32_t ___Order_0;
	// System.String SQLite.SQLiteConnection/IndexedColumn::ColumnName
	String_t* ___ColumnName_1;

public:
	inline static int32_t get_offset_of_Order_0() { return static_cast<int32_t>(offsetof(IndexedColumn_t1407024228, ___Order_0)); }
	inline int32_t get_Order_0() const { return ___Order_0; }
	inline int32_t* get_address_of_Order_0() { return &___Order_0; }
	inline void set_Order_0(int32_t value)
	{
		___Order_0 = value;
	}

	inline static int32_t get_offset_of_ColumnName_1() { return static_cast<int32_t>(offsetof(IndexedColumn_t1407024228, ___ColumnName_1)); }
	inline String_t* get_ColumnName_1() const { return ___ColumnName_1; }
	inline String_t** get_address_of_ColumnName_1() { return &___ColumnName_1; }
	inline void set_ColumnName_1(String_t* value)
	{
		___ColumnName_1 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: SQLite.SQLiteConnection/IndexedColumn
struct IndexedColumn_t1407024228_marshaled_pinvoke
{
	int32_t ___Order_0;
	char* ___ColumnName_1;
};
// Native definition for marshalling of: SQLite.SQLiteConnection/IndexedColumn
struct IndexedColumn_t1407024228_marshaled_com
{
	int32_t ___Order_0;
	Il2CppChar* ___ColumnName_1;
};
