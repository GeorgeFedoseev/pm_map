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

// SPBUTimetable.DayTimetable
struct DayTimetable_t1053418317;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Void SPBUTimetable.DayTimetable::.ctor(System.DateTime)
extern "C"  void DayTimetable__ctor_m4239322751 (DayTimetable_t1053418317 * __this, DateTime_t4283661327  ____day0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.DayTimetable SPBUTimetable.DayTimetable::Clone()
extern "C"  DayTimetable_t1053418317 * DayTimetable_Clone_m3658558073 (DayTimetable_t1053418317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.DayTimetable::getTranslatedDay()
extern "C"  String_t* DayTimetable_getTranslatedDay_m2336446590 (DayTimetable_t1053418317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.DayTimetable::getTranslatedDay(System.DateTime)
extern "C"  String_t* DayTimetable_getTranslatedDay_m280400378 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___day0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
