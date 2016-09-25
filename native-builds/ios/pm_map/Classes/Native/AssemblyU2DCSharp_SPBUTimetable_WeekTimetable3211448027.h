#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SPBUTimetable.DayTimetable>
struct List_1_t2421603869;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "AssemblyU2DCSharp_SPBUTimetable_WeekType1706497590.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SPBUTimetable.WeekTimetable
struct  WeekTimetable_t3211448027  : public Il2CppObject
{
public:
	// System.DateTime SPBUTimetable.WeekTimetable::weekStartDay
	DateTime_t4283661327  ___weekStartDay_0;
	// System.Collections.Generic.List`1<SPBUTimetable.DayTimetable> SPBUTimetable.WeekTimetable::days
	List_1_t2421603869 * ___days_1;
	// SPBUTimetable.WeekType SPBUTimetable.WeekTimetable::weekType
	int32_t ___weekType_2;

public:
	inline static int32_t get_offset_of_weekStartDay_0() { return static_cast<int32_t>(offsetof(WeekTimetable_t3211448027, ___weekStartDay_0)); }
	inline DateTime_t4283661327  get_weekStartDay_0() const { return ___weekStartDay_0; }
	inline DateTime_t4283661327 * get_address_of_weekStartDay_0() { return &___weekStartDay_0; }
	inline void set_weekStartDay_0(DateTime_t4283661327  value)
	{
		___weekStartDay_0 = value;
	}

	inline static int32_t get_offset_of_days_1() { return static_cast<int32_t>(offsetof(WeekTimetable_t3211448027, ___days_1)); }
	inline List_1_t2421603869 * get_days_1() const { return ___days_1; }
	inline List_1_t2421603869 ** get_address_of_days_1() { return &___days_1; }
	inline void set_days_1(List_1_t2421603869 * value)
	{
		___days_1 = value;
		Il2CppCodeGenWriteBarrier(&___days_1, value);
	}

	inline static int32_t get_offset_of_weekType_2() { return static_cast<int32_t>(offsetof(WeekTimetable_t3211448027, ___weekType_2)); }
	inline int32_t get_weekType_2() const { return ___weekType_2; }
	inline int32_t* get_address_of_weekType_2() { return &___weekType_2; }
	inline void set_weekType_2(int32_t value)
	{
		___weekType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
