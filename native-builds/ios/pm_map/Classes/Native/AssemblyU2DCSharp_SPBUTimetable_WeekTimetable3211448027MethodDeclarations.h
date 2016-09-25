#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SPBUTimetable.WeekTimetable
struct WeekTimetable_t3211448027;
// System.String
struct String_t;
// SPBUTimetable.DayTimetable
struct DayTimetable_t1053418317;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_DayOfWeek1779421117.h"

// System.Void SPBUTimetable.WeekTimetable::.ctor(System.DateTime)
extern "C"  void WeekTimetable__ctor_m2736870205 (WeekTimetable_t3211448027 * __this, DateTime_t4283661327  ____weekStartDay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.WeekTimetable SPBUTimetable.WeekTimetable::Clone()
extern "C"  WeekTimetable_t3211448027 * WeekTimetable_Clone_m476157721 (WeekTimetable_t3211448027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SPBUTimetable.WeekTimetable::GetIso8601WeekNumber(System.DateTime)
extern "C"  int32_t WeekTimetable_GetIso8601WeekNumber_m3449584242 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.WeekTimetable::ToString()
extern "C"  String_t* WeekTimetable_ToString_m2326621234 (WeekTimetable_t3211448027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPBUTimetable.WeekTimetable::hasDayOfWeek(System.DayOfWeek)
extern "C"  bool WeekTimetable_hasDayOfWeek_m1756423226 (WeekTimetable_t3211448027 * __this, int32_t ___dofw0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.DayTimetable SPBUTimetable.WeekTimetable::getDayTimetable(System.DayOfWeek)
extern "C"  DayTimetable_t1053418317 * WeekTimetable_getDayTimetable_m1667379335 (WeekTimetable_t3211448027 * __this, int32_t ___dofw0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
