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

// TimetableRecord
struct TimetableRecord_t3288175794;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SPBUTimetable_WeekType1706497590.h"
#include "mscorlib_System_DayOfWeek1779421117.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_String7231557.h"

// System.Void TimetableRecord::.ctor()
extern "C"  void TimetableRecord__ctor_m2336316153 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableRecord::get_id()
extern "C"  int32_t TimetableRecord_get_id_m4148065249 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_id(System.Int32)
extern "C"  void TimetableRecord_set_id_m3091709300 (TimetableRecord_t3288175794 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.WeekType TimetableRecord::get_weekType()
extern "C"  int32_t TimetableRecord_get_weekType_m1635988208 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_weekType(SPBUTimetable.WeekType)
extern "C"  void TimetableRecord_set_weekType_m913809739 (TimetableRecord_t3288175794 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek TimetableRecord::get_day()
extern "C"  int32_t TimetableRecord_get_day_m3958788479 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_day(System.DayOfWeek)
extern "C"  void TimetableRecord_set_day_m1793963022 (TimetableRecord_t3288175794 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime TimetableRecord::get_startTime()
extern "C"  DateTime_t4283661327  TimetableRecord_get_startTime_m454578742 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_startTime(System.DateTime)
extern "C"  void TimetableRecord_set_startTime_m243849903 (TimetableRecord_t3288175794 * __this, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime TimetableRecord::get_endTime()
extern "C"  DateTime_t4283661327  TimetableRecord_get_endTime_m3685779823 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_endTime(System.DateTime)
extern "C"  void TimetableRecord_set_endTime_m3878396310 (TimetableRecord_t3288175794 * __this, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TimetableRecord::get_name()
extern "C"  String_t* TimetableRecord_get_name_m2724412124 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_name(System.String)
extern "C"  void TimetableRecord_set_name_m2944368015 (TimetableRecord_t3288175794 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TimetableRecord::get_lecturer()
extern "C"  String_t* TimetableRecord_get_lecturer_m4045173957 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_lecturer(System.String)
extern "C"  void TimetableRecord_set_lecturer_m435767750 (TimetableRecord_t3288175794 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TimetableRecord::get_location()
extern "C"  String_t* TimetableRecord_get_location_m3431150982 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_location(System.String)
extern "C"  void TimetableRecord_set_location_m331319973 (TimetableRecord_t3288175794 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TimetableRecord::get_room()
extern "C"  String_t* TimetableRecord_get_room_m2851925292 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_room(System.String)
extern "C"  void TimetableRecord_set_room_m1409682751 (TimetableRecord_t3288175794 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableRecord::get_edited()
extern "C"  int32_t TimetableRecord_get_edited_m1558589679 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_edited(System.Int32)
extern "C"  void TimetableRecord_set_edited_m1075684482 (TimetableRecord_t3288175794 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableRecord::get_deleted()
extern "C"  int32_t TimetableRecord_get_deleted_m2573951349 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_deleted(System.Int32)
extern "C"  void TimetableRecord_set_deleted_m3666377412 (TimetableRecord_t3288175794 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TimetableRecord::get_initial_hash()
extern "C"  String_t* TimetableRecord_get_initial_hash_m1784450554 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_initial_hash(System.String)
extern "C"  void TimetableRecord_set_initial_hash_m2575872561 (TimetableRecord_t3288175794 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TimetableRecord::get_hash()
extern "C"  String_t* TimetableRecord_get_hash_m2552818847 (TimetableRecord_t3288175794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableRecord::set_hash(System.String)
extern "C"  void TimetableRecord_set_hash_m1714553004 (TimetableRecord_t3288175794 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
