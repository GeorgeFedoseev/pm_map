#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SQLite.SQLiteConnection
struct SQLiteConnection_t2649932624;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.PreparedSqlLiteInsertCommand
struct  PreparedSqlLiteInsertCommand_t1604881465  : public Il2CppObject
{
public:
	// System.Boolean SQLite.PreparedSqlLiteInsertCommand::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_1;
	// SQLite.SQLiteConnection SQLite.PreparedSqlLiteInsertCommand::<Connection>k__BackingField
	SQLiteConnection_t2649932624 * ___U3CConnectionU3Ek__BackingField_2;
	// System.String SQLite.PreparedSqlLiteInsertCommand::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_3;
	// System.IntPtr SQLite.PreparedSqlLiteInsertCommand::<Statement>k__BackingField
	IntPtr_t ___U3CStatementU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t1604881465, ___U3CInitializedU3Ek__BackingField_1)); }
	inline bool get_U3CInitializedU3Ek__BackingField_1() const { return ___U3CInitializedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_1() { return &___U3CInitializedU3Ek__BackingField_1; }
	inline void set_U3CInitializedU3Ek__BackingField_1(bool value)
	{
		___U3CInitializedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t1604881465, ___U3CConnectionU3Ek__BackingField_2)); }
	inline SQLiteConnection_t2649932624 * get_U3CConnectionU3Ek__BackingField_2() const { return ___U3CConnectionU3Ek__BackingField_2; }
	inline SQLiteConnection_t2649932624 ** get_address_of_U3CConnectionU3Ek__BackingField_2() { return &___U3CConnectionU3Ek__BackingField_2; }
	inline void set_U3CConnectionU3Ek__BackingField_2(SQLiteConnection_t2649932624 * value)
	{
		___U3CConnectionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConnectionU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CCommandTextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t1604881465, ___U3CCommandTextU3Ek__BackingField_3)); }
	inline String_t* get_U3CCommandTextU3Ek__BackingField_3() const { return ___U3CCommandTextU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCommandTextU3Ek__BackingField_3() { return &___U3CCommandTextU3Ek__BackingField_3; }
	inline void set_U3CCommandTextU3Ek__BackingField_3(String_t* value)
	{
		___U3CCommandTextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCommandTextU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CStatementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t1604881465, ___U3CStatementU3Ek__BackingField_4)); }
	inline IntPtr_t get_U3CStatementU3Ek__BackingField_4() const { return ___U3CStatementU3Ek__BackingField_4; }
	inline IntPtr_t* get_address_of_U3CStatementU3Ek__BackingField_4() { return &___U3CStatementU3Ek__BackingField_4; }
	inline void set_U3CStatementU3Ek__BackingField_4(IntPtr_t value)
	{
		___U3CStatementU3Ek__BackingField_4 = value;
	}
};

struct PreparedSqlLiteInsertCommand_t1604881465_StaticFields
{
public:
	// System.IntPtr SQLite.PreparedSqlLiteInsertCommand::NullStatement
	IntPtr_t ___NullStatement_0;

public:
	inline static int32_t get_offset_of_NullStatement_0() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t1604881465_StaticFields, ___NullStatement_0)); }
	inline IntPtr_t get_NullStatement_0() const { return ___NullStatement_0; }
	inline IntPtr_t* get_address_of_NullStatement_0() { return &___NullStatement_0; }
	inline void set_NullStatement_0(IntPtr_t value)
	{
		___NullStatement_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
