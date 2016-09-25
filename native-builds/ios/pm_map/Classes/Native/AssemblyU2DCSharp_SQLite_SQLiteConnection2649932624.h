#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,SQLite.TableMapping>
struct Dictionary_2_t3637447848;
// System.Diagnostics.Stopwatch
struct Stopwatch_t3420517611;
// System.Random
struct Random_t4255898871;
// System.String
struct String_t;
// System.Func`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>
struct Func_2_t1710275477;
// System.Func`2<SQLite.SQLiteConnection/IndexedColumn,System.String>
struct Func_2_t563668534;
// System.Func`2<SQLite.TableMapping/Column,System.String>
struct Func_2_t867290459;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.SQLiteConnection
struct  SQLiteConnection_t2649932624  : public Il2CppObject
{
public:
	// System.Boolean SQLite.SQLiteConnection::_open
	bool ____open_0;
	// System.TimeSpan SQLite.SQLiteConnection::_busyTimeout
	TimeSpan_t413522987  ____busyTimeout_1;
	// System.Collections.Generic.Dictionary`2<System.String,SQLite.TableMapping> SQLite.SQLiteConnection::_mappings
	Dictionary_2_t3637447848 * ____mappings_2;
	// System.Collections.Generic.Dictionary`2<System.String,SQLite.TableMapping> SQLite.SQLiteConnection::_tables
	Dictionary_2_t3637447848 * ____tables_3;
	// System.Diagnostics.Stopwatch SQLite.SQLiteConnection::_sw
	Stopwatch_t3420517611 * ____sw_4;
	// System.Int64 SQLite.SQLiteConnection::_elapsedMilliseconds
	int64_t ____elapsedMilliseconds_5;
	// System.Int32 SQLite.SQLiteConnection::_transactionDepth
	int32_t ____transactionDepth_6;
	// System.Random SQLite.SQLiteConnection::_rand
	Random_t4255898871 * ____rand_7;
	// System.IntPtr SQLite.SQLiteConnection::<Handle>k__BackingField
	IntPtr_t ___U3CHandleU3Ek__BackingField_9;
	// System.String SQLite.SQLiteConnection::<DatabasePath>k__BackingField
	String_t* ___U3CDatabasePathU3Ek__BackingField_10;
	// System.Boolean SQLite.SQLiteConnection::<TimeExecution>k__BackingField
	bool ___U3CTimeExecutionU3Ek__BackingField_11;
	// System.Boolean SQLite.SQLiteConnection::<Trace>k__BackingField
	bool ___U3CTraceU3Ek__BackingField_12;
	// System.Boolean SQLite.SQLiteConnection::<StoreDateTimeAsTicks>k__BackingField
	bool ___U3CStoreDateTimeAsTicksU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__open_0() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____open_0)); }
	inline bool get__open_0() const { return ____open_0; }
	inline bool* get_address_of__open_0() { return &____open_0; }
	inline void set__open_0(bool value)
	{
		____open_0 = value;
	}

	inline static int32_t get_offset_of__busyTimeout_1() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____busyTimeout_1)); }
	inline TimeSpan_t413522987  get__busyTimeout_1() const { return ____busyTimeout_1; }
	inline TimeSpan_t413522987 * get_address_of__busyTimeout_1() { return &____busyTimeout_1; }
	inline void set__busyTimeout_1(TimeSpan_t413522987  value)
	{
		____busyTimeout_1 = value;
	}

	inline static int32_t get_offset_of__mappings_2() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____mappings_2)); }
	inline Dictionary_2_t3637447848 * get__mappings_2() const { return ____mappings_2; }
	inline Dictionary_2_t3637447848 ** get_address_of__mappings_2() { return &____mappings_2; }
	inline void set__mappings_2(Dictionary_2_t3637447848 * value)
	{
		____mappings_2 = value;
		Il2CppCodeGenWriteBarrier(&____mappings_2, value);
	}

	inline static int32_t get_offset_of__tables_3() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____tables_3)); }
	inline Dictionary_2_t3637447848 * get__tables_3() const { return ____tables_3; }
	inline Dictionary_2_t3637447848 ** get_address_of__tables_3() { return &____tables_3; }
	inline void set__tables_3(Dictionary_2_t3637447848 * value)
	{
		____tables_3 = value;
		Il2CppCodeGenWriteBarrier(&____tables_3, value);
	}

	inline static int32_t get_offset_of__sw_4() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____sw_4)); }
	inline Stopwatch_t3420517611 * get__sw_4() const { return ____sw_4; }
	inline Stopwatch_t3420517611 ** get_address_of__sw_4() { return &____sw_4; }
	inline void set__sw_4(Stopwatch_t3420517611 * value)
	{
		____sw_4 = value;
		Il2CppCodeGenWriteBarrier(&____sw_4, value);
	}

	inline static int32_t get_offset_of__elapsedMilliseconds_5() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____elapsedMilliseconds_5)); }
	inline int64_t get__elapsedMilliseconds_5() const { return ____elapsedMilliseconds_5; }
	inline int64_t* get_address_of__elapsedMilliseconds_5() { return &____elapsedMilliseconds_5; }
	inline void set__elapsedMilliseconds_5(int64_t value)
	{
		____elapsedMilliseconds_5 = value;
	}

	inline static int32_t get_offset_of__transactionDepth_6() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____transactionDepth_6)); }
	inline int32_t get__transactionDepth_6() const { return ____transactionDepth_6; }
	inline int32_t* get_address_of__transactionDepth_6() { return &____transactionDepth_6; }
	inline void set__transactionDepth_6(int32_t value)
	{
		____transactionDepth_6 = value;
	}

	inline static int32_t get_offset_of__rand_7() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ____rand_7)); }
	inline Random_t4255898871 * get__rand_7() const { return ____rand_7; }
	inline Random_t4255898871 ** get_address_of__rand_7() { return &____rand_7; }
	inline void set__rand_7(Random_t4255898871 * value)
	{
		____rand_7 = value;
		Il2CppCodeGenWriteBarrier(&____rand_7, value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ___U3CHandleU3Ek__BackingField_9)); }
	inline IntPtr_t get_U3CHandleU3Ek__BackingField_9() const { return ___U3CHandleU3Ek__BackingField_9; }
	inline IntPtr_t* get_address_of_U3CHandleU3Ek__BackingField_9() { return &___U3CHandleU3Ek__BackingField_9; }
	inline void set_U3CHandleU3Ek__BackingField_9(IntPtr_t value)
	{
		___U3CHandleU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CDatabasePathU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ___U3CDatabasePathU3Ek__BackingField_10)); }
	inline String_t* get_U3CDatabasePathU3Ek__BackingField_10() const { return ___U3CDatabasePathU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CDatabasePathU3Ek__BackingField_10() { return &___U3CDatabasePathU3Ek__BackingField_10; }
	inline void set_U3CDatabasePathU3Ek__BackingField_10(String_t* value)
	{
		___U3CDatabasePathU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDatabasePathU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CTimeExecutionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ___U3CTimeExecutionU3Ek__BackingField_11)); }
	inline bool get_U3CTimeExecutionU3Ek__BackingField_11() const { return ___U3CTimeExecutionU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CTimeExecutionU3Ek__BackingField_11() { return &___U3CTimeExecutionU3Ek__BackingField_11; }
	inline void set_U3CTimeExecutionU3Ek__BackingField_11(bool value)
	{
		___U3CTimeExecutionU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTraceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ___U3CTraceU3Ek__BackingField_12)); }
	inline bool get_U3CTraceU3Ek__BackingField_12() const { return ___U3CTraceU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CTraceU3Ek__BackingField_12() { return &___U3CTraceU3Ek__BackingField_12; }
	inline void set_U3CTraceU3Ek__BackingField_12(bool value)
	{
		___U3CTraceU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624, ___U3CStoreDateTimeAsTicksU3Ek__BackingField_13)); }
	inline bool get_U3CStoreDateTimeAsTicksU3Ek__BackingField_13() const { return ___U3CStoreDateTimeAsTicksU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_13() { return &___U3CStoreDateTimeAsTicksU3Ek__BackingField_13; }
	inline void set_U3CStoreDateTimeAsTicksU3Ek__BackingField_13(bool value)
	{
		___U3CStoreDateTimeAsTicksU3Ek__BackingField_13 = value;
	}
};

struct SQLiteConnection_t2649932624_StaticFields
{
public:
	// System.IntPtr SQLite.SQLiteConnection::NullHandle
	IntPtr_t ___NullHandle_8;
	// System.Func`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32> SQLite.SQLiteConnection::<>f__am$cacheE
	Func_2_t1710275477 * ___U3CU3Ef__amU24cacheE_14;
	// System.Func`2<SQLite.SQLiteConnection/IndexedColumn,System.String> SQLite.SQLiteConnection::<>f__am$cacheF
	Func_2_t563668534 * ___U3CU3Ef__amU24cacheF_15;
	// System.Func`2<SQLite.TableMapping/Column,System.String> SQLite.SQLiteConnection::<>f__am$cache10
	Func_2_t867290459 * ___U3CU3Ef__amU24cache10_16;

public:
	inline static int32_t get_offset_of_NullHandle_8() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624_StaticFields, ___NullHandle_8)); }
	inline IntPtr_t get_NullHandle_8() const { return ___NullHandle_8; }
	inline IntPtr_t* get_address_of_NullHandle_8() { return &___NullHandle_8; }
	inline void set_NullHandle_8(IntPtr_t value)
	{
		___NullHandle_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_14() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624_StaticFields, ___U3CU3Ef__amU24cacheE_14)); }
	inline Func_2_t1710275477 * get_U3CU3Ef__amU24cacheE_14() const { return ___U3CU3Ef__amU24cacheE_14; }
	inline Func_2_t1710275477 ** get_address_of_U3CU3Ef__amU24cacheE_14() { return &___U3CU3Ef__amU24cacheE_14; }
	inline void set_U3CU3Ef__amU24cacheE_14(Func_2_t1710275477 * value)
	{
		___U3CU3Ef__amU24cacheE_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_15() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624_StaticFields, ___U3CU3Ef__amU24cacheF_15)); }
	inline Func_2_t563668534 * get_U3CU3Ef__amU24cacheF_15() const { return ___U3CU3Ef__amU24cacheF_15; }
	inline Func_2_t563668534 ** get_address_of_U3CU3Ef__amU24cacheF_15() { return &___U3CU3Ef__amU24cacheF_15; }
	inline void set_U3CU3Ef__amU24cacheF_15(Func_2_t563668534 * value)
	{
		___U3CU3Ef__amU24cacheF_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_16() { return static_cast<int32_t>(offsetof(SQLiteConnection_t2649932624_StaticFields, ___U3CU3Ef__amU24cache10_16)); }
	inline Func_2_t867290459 * get_U3CU3Ef__amU24cache10_16() const { return ___U3CU3Ef__amU24cache10_16; }
	inline Func_2_t867290459 ** get_address_of_U3CU3Ef__amU24cache10_16() { return &___U3CU3Ef__amU24cache10_16; }
	inline void set_U3CU3Ef__amU24cache10_16(Func_2_t867290459 * value)
	{
		___U3CU3Ef__amU24cache10_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
