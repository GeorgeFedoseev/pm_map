#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SPBUTimetable.Pair>
struct List_1_t1018904850;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SPBUTimetable.DayTimetable
struct  DayTimetable_t1053418317  : public Il2CppObject
{
public:
	// System.DateTime SPBUTimetable.DayTimetable::day
	DateTime_t4283661327  ___day_0;
	// System.Collections.Generic.List`1<SPBUTimetable.Pair> SPBUTimetable.DayTimetable::pairs
	List_1_t1018904850 * ___pairs_1;

public:
	inline static int32_t get_offset_of_day_0() { return static_cast<int32_t>(offsetof(DayTimetable_t1053418317, ___day_0)); }
	inline DateTime_t4283661327  get_day_0() const { return ___day_0; }
	inline DateTime_t4283661327 * get_address_of_day_0() { return &___day_0; }
	inline void set_day_0(DateTime_t4283661327  value)
	{
		___day_0 = value;
	}

	inline static int32_t get_offset_of_pairs_1() { return static_cast<int32_t>(offsetof(DayTimetable_t1053418317, ___pairs_1)); }
	inline List_1_t1018904850 * get_pairs_1() const { return ___pairs_1; }
	inline List_1_t1018904850 ** get_address_of_pairs_1() { return &___pairs_1; }
	inline void set_pairs_1(List_1_t1018904850 * value)
	{
		___pairs_1 = value;
		Il2CppCodeGenWriteBarrier(&___pairs_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
