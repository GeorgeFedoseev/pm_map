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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTAddPairButtonScript
struct  TTAddPairButtonScript_t1281654456  : public MonoBehaviour_t667441552
{
public:
	// SPBUTimetable.WeekTimetable TTAddPairButtonScript::week
	WeekTimetable_t3211448027 * ___week_2;

public:
	inline static int32_t get_offset_of_week_2() { return static_cast<int32_t>(offsetof(TTAddPairButtonScript_t1281654456, ___week_2)); }
	inline WeekTimetable_t3211448027 * get_week_2() const { return ___week_2; }
	inline WeekTimetable_t3211448027 ** get_address_of_week_2() { return &___week_2; }
	inline void set_week_2(WeekTimetable_t3211448027 * value)
	{
		___week_2 = value;
		Il2CppCodeGenWriteBarrier(&___week_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
