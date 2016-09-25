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
// System.Collections.Generic.List`1<SQLite.SQLiteConnection/IndexedColumn>
struct List_1_t2775209780;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.SQLiteConnection/IndexInfo
struct  IndexInfo_t1199365085 
{
public:
	// System.String SQLite.SQLiteConnection/IndexInfo::IndexName
	String_t* ___IndexName_0;
	// System.String SQLite.SQLiteConnection/IndexInfo::TableName
	String_t* ___TableName_1;
	// System.Boolean SQLite.SQLiteConnection/IndexInfo::Unique
	bool ___Unique_2;
	// System.Collections.Generic.List`1<SQLite.SQLiteConnection/IndexedColumn> SQLite.SQLiteConnection/IndexInfo::Columns
	List_1_t2775209780 * ___Columns_3;

public:
	inline static int32_t get_offset_of_IndexName_0() { return static_cast<int32_t>(offsetof(IndexInfo_t1199365085, ___IndexName_0)); }
	inline String_t* get_IndexName_0() const { return ___IndexName_0; }
	inline String_t** get_address_of_IndexName_0() { return &___IndexName_0; }
	inline void set_IndexName_0(String_t* value)
	{
		___IndexName_0 = value;
		Il2CppCodeGenWriteBarrier(&___IndexName_0, value);
	}

	inline static int32_t get_offset_of_TableName_1() { return static_cast<int32_t>(offsetof(IndexInfo_t1199365085, ___TableName_1)); }
	inline String_t* get_TableName_1() const { return ___TableName_1; }
	inline String_t** get_address_of_TableName_1() { return &___TableName_1; }
	inline void set_TableName_1(String_t* value)
	{
		___TableName_1 = value;
		Il2CppCodeGenWriteBarrier(&___TableName_1, value);
	}

	inline static int32_t get_offset_of_Unique_2() { return static_cast<int32_t>(offsetof(IndexInfo_t1199365085, ___Unique_2)); }
	inline bool get_Unique_2() const { return ___Unique_2; }
	inline bool* get_address_of_Unique_2() { return &___Unique_2; }
	inline void set_Unique_2(bool value)
	{
		___Unique_2 = value;
	}

	inline static int32_t get_offset_of_Columns_3() { return static_cast<int32_t>(offsetof(IndexInfo_t1199365085, ___Columns_3)); }
	inline List_1_t2775209780 * get_Columns_3() const { return ___Columns_3; }
	inline List_1_t2775209780 ** get_address_of_Columns_3() { return &___Columns_3; }
	inline void set_Columns_3(List_1_t2775209780 * value)
	{
		___Columns_3 = value;
		Il2CppCodeGenWriteBarrier(&___Columns_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: SQLite.SQLiteConnection/IndexInfo
struct IndexInfo_t1199365085_marshaled_pinvoke
{
	char* ___IndexName_0;
	char* ___TableName_1;
	int32_t ___Unique_2;
	List_1_t2775209780 * ___Columns_3;
};
// Native definition for marshalling of: SQLite.SQLiteConnection/IndexInfo
struct IndexInfo_t1199365085_marshaled_com
{
	Il2CppChar* ___IndexName_0;
	Il2CppChar* ___TableName_1;
	int32_t ___Unique_2;
	List_1_t2775209780 * ___Columns_3;
};
