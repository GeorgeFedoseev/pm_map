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

// TTWeekScript
struct TTWeekScript_t2426821759;
// TTDayScript
struct TTDayScript_t1438646503;
// SPBUTimetable.DayTimetable
struct DayTimetable_t1053418317;
// SPBUTimetable.Pair
struct Pair_t3945686594;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TTDayScript1438646503.h"
#include "AssemblyU2DCSharp_SPBUTimetable_DayTimetable1053418317.h"
#include "AssemblyU2DCSharp_SPBUTimetable_Pair3945686594.h"

// System.Void TTWeekScript::.ctor()
extern "C"  void TTWeekScript__ctor_m3875026172 (TTWeekScript_t2426821759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTWeekScript::Awake()
extern "C"  void TTWeekScript_Awake_m4112631391 (TTWeekScript_t2426821759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTWeekScript::clear()
extern "C"  void TTWeekScript_clear_m3911473479 (TTWeekScript_t2426821759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTWeekScript::ReloadDay(TTDayScript,System.Boolean)
extern "C"  void TTWeekScript_ReloadDay_m2955050511 (TTWeekScript_t2426821759 * __this, TTDayScript_t1438646503 * ___day_el0, bool ___edit_mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTWeekScript::addDay(SPBUTimetable.DayTimetable,System.Boolean,System.Int32)
extern "C"  void TTWeekScript_addDay_m1174807515 (TTWeekScript_t2426821759 * __this, DayTimetable_t1053418317 * ___day0, bool ___editMode1, int32_t ___sibling_index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTWeekScript::addAddPairButton()
extern "C"  void TTWeekScript_addAddPairButton_m2405553716 (TTWeekScript_t2426821759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTWeekScript::UpdateLayout(System.Boolean)
extern "C"  void TTWeekScript_UpdateLayout_m4223387794 (TTWeekScript_t2426821759 * __this, bool ___editMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TTWeekScript::<addDay>m__4C(SPBUTimetable.Pair)
extern "C"  bool TTWeekScript_U3CaddDayU3Em__4C_m191460612 (Il2CppObject * __this /* static, unused */, Pair_t3945686594 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
