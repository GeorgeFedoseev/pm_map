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
// System.Collections.Generic.List`1<SQLite.SQLiteCommand/Binding>
struct List_1_t2355723363;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.SQLiteCommand
struct  SQLiteCommand_t3677067489  : public Il2CppObject
{
public:
	// SQLite.SQLiteConnection SQLite.SQLiteCommand::_conn
	SQLiteConnection_t2649932624 * ____conn_0;
	// System.Collections.Generic.List`1<SQLite.SQLiteCommand/Binding> SQLite.SQLiteCommand::_bindings
	List_1_t2355723363 * ____bindings_1;
	// System.String SQLite.SQLiteCommand::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__conn_0() { return static_cast<int32_t>(offsetof(SQLiteCommand_t3677067489, ____conn_0)); }
	inline SQLiteConnection_t2649932624 * get__conn_0() const { return ____conn_0; }
	inline SQLiteConnection_t2649932624 ** get_address_of__conn_0() { return &____conn_0; }
	inline void set__conn_0(SQLiteConnection_t2649932624 * value)
	{
		____conn_0 = value;
		Il2CppCodeGenWriteBarrier(&____conn_0, value);
	}

	inline static int32_t get_offset_of__bindings_1() { return static_cast<int32_t>(offsetof(SQLiteCommand_t3677067489, ____bindings_1)); }
	inline List_1_t2355723363 * get__bindings_1() const { return ____bindings_1; }
	inline List_1_t2355723363 ** get_address_of__bindings_1() { return &____bindings_1; }
	inline void set__bindings_1(List_1_t2355723363 * value)
	{
		____bindings_1 = value;
		Il2CppCodeGenWriteBarrier(&____bindings_1, value);
	}

	inline static int32_t get_offset_of_U3CCommandTextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SQLiteCommand_t3677067489, ___U3CCommandTextU3Ek__BackingField_3)); }
	inline String_t* get_U3CCommandTextU3Ek__BackingField_3() const { return ___U3CCommandTextU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCommandTextU3Ek__BackingField_3() { return &___U3CCommandTextU3Ek__BackingField_3; }
	inline void set_U3CCommandTextU3Ek__BackingField_3(String_t* value)
	{
		___U3CCommandTextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCommandTextU3Ek__BackingField_3, value);
	}
};

struct SQLiteCommand_t3677067489_StaticFields
{
public:
	// System.IntPtr SQLite.SQLiteCommand::NegativePointer
	IntPtr_t ___NegativePointer_2;

public:
	inline static int32_t get_offset_of_NegativePointer_2() { return static_cast<int32_t>(offsetof(SQLiteCommand_t3677067489_StaticFields, ___NegativePointer_2)); }
	inline IntPtr_t get_NegativePointer_2() const { return ___NegativePointer_2; }
	inline IntPtr_t* get_address_of_NegativePointer_2() { return &___NegativePointer_2; }
	inline void set_NegativePointer_2(IntPtr_t value)
	{
		___NegativePointer_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
