#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SPBUTimetable.WeekTimetable
struct WeekTimetable_t3211448027;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// System.Func`2<SPBUTimetable.Pair,System.Boolean>
struct Func_2_t2392357337;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTWeekScript
struct  TTWeekScript_t2426821759  : public MonoBehaviour_t667441552
{
public:
	// SPBUTimetable.WeekTimetable TTWeekScript::_week
	WeekTimetable_t3211448027 * ____week_2;
	// UnityEngine.Transform TTWeekScript::daysContainer
	Transform_t1659122786 * ___daysContainer_3;
	// UnityEngine.UI.ScrollRect TTWeekScript::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_4;

public:
	inline static int32_t get_offset_of__week_2() { return static_cast<int32_t>(offsetof(TTWeekScript_t2426821759, ____week_2)); }
	inline WeekTimetable_t3211448027 * get__week_2() const { return ____week_2; }
	inline WeekTimetable_t3211448027 ** get_address_of__week_2() { return &____week_2; }
	inline void set__week_2(WeekTimetable_t3211448027 * value)
	{
		____week_2 = value;
		Il2CppCodeGenWriteBarrier(&____week_2, value);
	}

	inline static int32_t get_offset_of_daysContainer_3() { return static_cast<int32_t>(offsetof(TTWeekScript_t2426821759, ___daysContainer_3)); }
	inline Transform_t1659122786 * get_daysContainer_3() const { return ___daysContainer_3; }
	inline Transform_t1659122786 ** get_address_of_daysContainer_3() { return &___daysContainer_3; }
	inline void set_daysContainer_3(Transform_t1659122786 * value)
	{
		___daysContainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___daysContainer_3, value);
	}

	inline static int32_t get_offset_of_scrollRect_4() { return static_cast<int32_t>(offsetof(TTWeekScript_t2426821759, ___scrollRect_4)); }
	inline ScrollRect_t3606982749 * get_scrollRect_4() const { return ___scrollRect_4; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_4() { return &___scrollRect_4; }
	inline void set_scrollRect_4(ScrollRect_t3606982749 * value)
	{
		___scrollRect_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_4, value);
	}
};

struct TTWeekScript_t2426821759_StaticFields
{
public:
	// System.Func`2<SPBUTimetable.Pair,System.Boolean> TTWeekScript::<>f__am$cache3
	Func_2_t2392357337 * ___U3CU3Ef__amU24cache3_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_5() { return static_cast<int32_t>(offsetof(TTWeekScript_t2426821759_StaticFields, ___U3CU3Ef__amU24cache3_5)); }
	inline Func_2_t2392357337 * get_U3CU3Ef__amU24cache3_5() const { return ___U3CU3Ef__amU24cache3_5; }
	inline Func_2_t2392357337 ** get_address_of_U3CU3Ef__amU24cache3_5() { return &___U3CU3Ef__amU24cache3_5; }
	inline void set_U3CU3Ef__amU24cache3_5(Func_2_t2392357337 * value)
	{
		___U3CU3Ef__amU24cache3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
