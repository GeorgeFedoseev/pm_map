#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppScript
struct AppScript_t3488119340;
// System.String
struct String_t;
// SPBUTimetable.WeekTimetable
struct WeekTimetable_t3211448027;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,SPBUTimetable.WeekTimetable>>
struct List_1_t1105084653;
// System.Func`2<SQLite.SQLiteConnection/ColumnInfo,System.Boolean>
struct Func_2_t2699363296;
// System.Comparison`1<SPBUTimetable.DayTimetable>
struct Comparison_1_t4064746800;
// System.Comparison`1<SPBUTimetable.Pair>
struct Comparison_1_t2662047781;
// System.Func`2<SPBUTimetable.Pair,System.Boolean>
struct Func_2_t2392357337;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimetableManger
struct  TimetableManger_t3141655579  : public Il2CppObject
{
public:
	// AppScript TimetableManger::app
	AppScript_t3488119340 * ___app_0;
	// System.String TimetableManger::db_path
	String_t* ___db_path_1;
	// SPBUTimetable.WeekTimetable TimetableManger::currentWeek
	WeekTimetable_t3211448027 * ___currentWeek_2;
	// SPBUTimetable.WeekTimetable TimetableManger::nextWeek
	WeekTimetable_t3211448027 * ___nextWeek_3;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,SPBUTimetable.WeekTimetable>> TimetableManger::history
	List_1_t1105084653 * ___history_4;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579, ___app_0)); }
	inline AppScript_t3488119340 * get_app_0() const { return ___app_0; }
	inline AppScript_t3488119340 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(AppScript_t3488119340 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier(&___app_0, value);
	}

	inline static int32_t get_offset_of_db_path_1() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579, ___db_path_1)); }
	inline String_t* get_db_path_1() const { return ___db_path_1; }
	inline String_t** get_address_of_db_path_1() { return &___db_path_1; }
	inline void set_db_path_1(String_t* value)
	{
		___db_path_1 = value;
		Il2CppCodeGenWriteBarrier(&___db_path_1, value);
	}

	inline static int32_t get_offset_of_currentWeek_2() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579, ___currentWeek_2)); }
	inline WeekTimetable_t3211448027 * get_currentWeek_2() const { return ___currentWeek_2; }
	inline WeekTimetable_t3211448027 ** get_address_of_currentWeek_2() { return &___currentWeek_2; }
	inline void set_currentWeek_2(WeekTimetable_t3211448027 * value)
	{
		___currentWeek_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentWeek_2, value);
	}

	inline static int32_t get_offset_of_nextWeek_3() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579, ___nextWeek_3)); }
	inline WeekTimetable_t3211448027 * get_nextWeek_3() const { return ___nextWeek_3; }
	inline WeekTimetable_t3211448027 ** get_address_of_nextWeek_3() { return &___nextWeek_3; }
	inline void set_nextWeek_3(WeekTimetable_t3211448027 * value)
	{
		___nextWeek_3 = value;
		Il2CppCodeGenWriteBarrier(&___nextWeek_3, value);
	}

	inline static int32_t get_offset_of_history_4() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579, ___history_4)); }
	inline List_1_t1105084653 * get_history_4() const { return ___history_4; }
	inline List_1_t1105084653 ** get_address_of_history_4() { return &___history_4; }
	inline void set_history_4(List_1_t1105084653 * value)
	{
		___history_4 = value;
		Il2CppCodeGenWriteBarrier(&___history_4, value);
	}
};

struct TimetableManger_t3141655579_StaticFields
{
public:
	// System.Func`2<SQLite.SQLiteConnection/ColumnInfo,System.Boolean> TimetableManger::<>f__am$cache5
	Func_2_t2699363296 * ___U3CU3Ef__amU24cache5_5;
	// System.Comparison`1<SPBUTimetable.DayTimetable> TimetableManger::<>f__am$cache6
	Comparison_1_t4064746800 * ___U3CU3Ef__amU24cache6_6;
	// System.Comparison`1<SPBUTimetable.DayTimetable> TimetableManger::<>f__am$cache7
	Comparison_1_t4064746800 * ___U3CU3Ef__amU24cache7_7;
	// System.Comparison`1<SPBUTimetable.Pair> TimetableManger::<>f__am$cache8
	Comparison_1_t2662047781 * ___U3CU3Ef__amU24cache8_8;
	// System.Comparison`1<SPBUTimetable.Pair> TimetableManger::<>f__am$cache9
	Comparison_1_t2662047781 * ___U3CU3Ef__amU24cache9_9;
	// System.Comparison`1<SPBUTimetable.Pair> TimetableManger::<>f__am$cacheA
	Comparison_1_t2662047781 * ___U3CU3Ef__amU24cacheA_10;
	// System.Comparison`1<SPBUTimetable.Pair> TimetableManger::<>f__am$cacheB
	Comparison_1_t2662047781 * ___U3CU3Ef__amU24cacheB_11;
	// System.Func`2<SPBUTimetable.Pair,System.Boolean> TimetableManger::<>f__am$cacheC
	Func_2_t2392357337 * ___U3CU3Ef__amU24cacheC_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t2699363296 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t2699363296 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t2699363296 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Comparison_1_t4064746800 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Comparison_1_t4064746800 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Comparison_1_t4064746800 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Comparison_1_t4064746800 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Comparison_1_t4064746800 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Comparison_1_t4064746800 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_8() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cache8_8)); }
	inline Comparison_1_t2662047781 * get_U3CU3Ef__amU24cache8_8() const { return ___U3CU3Ef__amU24cache8_8; }
	inline Comparison_1_t2662047781 ** get_address_of_U3CU3Ef__amU24cache8_8() { return &___U3CU3Ef__amU24cache8_8; }
	inline void set_U3CU3Ef__amU24cache8_8(Comparison_1_t2662047781 * value)
	{
		___U3CU3Ef__amU24cache8_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_9() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cache9_9)); }
	inline Comparison_1_t2662047781 * get_U3CU3Ef__amU24cache9_9() const { return ___U3CU3Ef__amU24cache9_9; }
	inline Comparison_1_t2662047781 ** get_address_of_U3CU3Ef__amU24cache9_9() { return &___U3CU3Ef__amU24cache9_9; }
	inline void set_U3CU3Ef__amU24cache9_9(Comparison_1_t2662047781 * value)
	{
		___U3CU3Ef__amU24cache9_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_10() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cacheA_10)); }
	inline Comparison_1_t2662047781 * get_U3CU3Ef__amU24cacheA_10() const { return ___U3CU3Ef__amU24cacheA_10; }
	inline Comparison_1_t2662047781 ** get_address_of_U3CU3Ef__amU24cacheA_10() { return &___U3CU3Ef__amU24cacheA_10; }
	inline void set_U3CU3Ef__amU24cacheA_10(Comparison_1_t2662047781 * value)
	{
		___U3CU3Ef__amU24cacheA_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Comparison_1_t2662047781 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Comparison_1_t2662047781 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Comparison_1_t2662047781 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_12() { return static_cast<int32_t>(offsetof(TimetableManger_t3141655579_StaticFields, ___U3CU3Ef__amU24cacheC_12)); }
	inline Func_2_t2392357337 * get_U3CU3Ef__amU24cacheC_12() const { return ___U3CU3Ef__amU24cacheC_12; }
	inline Func_2_t2392357337 ** get_address_of_U3CU3Ef__amU24cacheC_12() { return &___U3CU3Ef__amU24cacheC_12; }
	inline void set_U3CU3Ef__amU24cacheC_12(Func_2_t2392357337 * value)
	{
		___U3CU3Ef__amU24cacheC_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
