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

// TimetableManger
struct TimetableManger_t3141655579;
// System.String
struct String_t;
// SPBUTimetable.Pair
struct Pair_t3945686594;
// SPBUTimetable.WeekTimetable
struct WeekTimetable_t3211448027;
// SQLite.SQLiteConnection/ColumnInfo
struct ColumnInfo_t4283098503;
// SPBUTimetable.DayTimetable
struct DayTimetable_t1053418317;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_SPBUTimetable_Pair3945686594.h"
#include "AssemblyU2DCSharp_SPBUTimetable_WeekTimetable3211448027.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection_ColumnIn4283098503.h"
#include "AssemblyU2DCSharp_SPBUTimetable_DayTimetable1053418317.h"

// System.Void TimetableManger::.ctor()
extern "C"  void TimetableManger__ctor_m284973488 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::MigrateTo_v1_3_IdNeeded()
extern "C"  bool TimetableManger_MigrateTo_v1_3_IdNeeded_m395162153 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::MigrateTo_v1_2_IfNeeded()
extern "C"  bool TimetableManger_MigrateTo_v1_2_IfNeeded_m946137804 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::initTimetable(System.Boolean,System.Boolean)
extern "C"  bool TimetableManger_initTimetable_m2485135283 (TimetableManger_t3141655579 * __this, bool ___forceUpdateFromInternet0, bool ___preserveEdits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::getTimetableFromInternet(System.Boolean,System.String)
extern "C"  bool TimetableManger_getTimetableFromInternet_m1024725193 (TimetableManger_t3141655579 * __this, bool ___preserveEdits0, String_t* ____timetable_link1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::hasTimetableLink()
extern "C"  bool TimetableManger_hasTimetableLink_m2365635009 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.Pair TimetableManger::getCurrentPair()
extern "C"  Pair_t3945686594 * TimetableManger_getCurrentPair_m1796478923 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.Pair TimetableManger::getSoonPair()
extern "C"  Pair_t3945686594 * TimetableManger_getSoonPair_m1926843967 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::updatePair(SPBUTimetable.Pair,SPBUTimetable.Pair)
extern "C"  void TimetableManger_updatePair_m1481289999 (TimetableManger_t3141655579 * __this, Pair_t3945686594 * ___oldPair0, Pair_t3945686594 * ___newPair1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::setPairDeleted(SPBUTimetable.Pair)
extern "C"  void TimetableManger_setPairDeleted_m3175279162 (TimetableManger_t3141655579 * __this, Pair_t3945686594 * ___pair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::removePair(SPBUTimetable.Pair,System.Boolean)
extern "C"  void TimetableManger_removePair_m988705154 (TimetableManger_t3141655579 * __this, Pair_t3945686594 * ___pair0, bool ___immediateSaveToDB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::addPair(SPBUTimetable.Pair,System.Boolean)
extern "C"  void TimetableManger_addPair_m3792003467 (TimetableManger_t3141655579 * __this, Pair_t3945686594 * ___pair0, bool ___saveState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::restoreTimetableFromDatabase(System.Boolean)
extern "C"  void TimetableManger_restoreTimetableFromDatabase_m3332539395 (TimetableManger_t3141655579 * __this, bool ___saveState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::sortEverything()
extern "C"  void TimetableManger_sortEverything_m3239801957 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::saveTimetableToDatabase(SPBUTimetable.WeekTimetable,SPBUTimetable.WeekTimetable,System.Boolean)
extern "C"  bool TimetableManger_saveTimetableToDatabase_m2835242747 (TimetableManger_t3141655579 * __this, WeekTimetable_t3211448027 * ___w10, WeekTimetable_t3211448027 * ___w21, bool ___preserveEdits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::saveCurrentState()
extern "C"  void TimetableManger_saveCurrentState_m1081237609 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::undo()
extern "C"  void TimetableManger_undo_m3298468184 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::historyHasPrevState()
extern "C"  bool TimetableManger_historyHasPrevState_m3599828282 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::hasTimetable()
extern "C"  bool TimetableManger_hasTimetable_m2582034215 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimetableManger::clearDb()
extern "C"  void TimetableManger_clearDb_m3943596185 (TimetableManger_t3141655579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::<MigrateTo_v1_3_IdNeeded>m__F(SQLite.SQLiteConnection/ColumnInfo)
extern "C"  bool TimetableManger_U3CMigrateTo_v1_3_IdNeededU3Em__F_m1299505639 (Il2CppObject * __this /* static, unused */, ColumnInfo_t4283098503 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableManger::<sortEverything>m__11(SPBUTimetable.DayTimetable,SPBUTimetable.DayTimetable)
extern "C"  int32_t TimetableManger_U3CsortEverythingU3Em__11_m3914911854 (Il2CppObject * __this /* static, unused */, DayTimetable_t1053418317 * ___d10, DayTimetable_t1053418317 * ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableManger::<sortEverything>m__12(SPBUTimetable.DayTimetable,SPBUTimetable.DayTimetable)
extern "C"  int32_t TimetableManger_U3CsortEverythingU3Em__12_m3935249229 (Il2CppObject * __this /* static, unused */, DayTimetable_t1053418317 * ___d10, DayTimetable_t1053418317 * ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableManger::<sortEverything>m__13(SPBUTimetable.Pair,SPBUTimetable.Pair)
extern "C"  int32_t TimetableManger_U3CsortEverythingU3Em__13_m1084390476 (Il2CppObject * __this /* static, unused */, Pair_t3945686594 * ___p10, Pair_t3945686594 * ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableManger::<sortEverything>m__14(SPBUTimetable.Pair,SPBUTimetable.Pair)
extern "C"  int32_t TimetableManger_U3CsortEverythingU3Em__14_m2545970475 (Il2CppObject * __this /* static, unused */, Pair_t3945686594 * ___p10, Pair_t3945686594 * ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableManger::<sortEverything>m__15(SPBUTimetable.Pair,SPBUTimetable.Pair)
extern "C"  int32_t TimetableManger_U3CsortEverythingU3Em__15_m4007550474 (Il2CppObject * __this /* static, unused */, Pair_t3945686594 * ___p10, Pair_t3945686594 * ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TimetableManger::<sortEverything>m__16(SPBUTimetable.Pair,SPBUTimetable.Pair)
extern "C"  int32_t TimetableManger_U3CsortEverythingU3Em__16_m1174163177 (Il2CppObject * __this /* static, unused */, Pair_t3945686594 * ___p10, Pair_t3945686594 * ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimetableManger::<saveTimetableToDatabase>m__17(SPBUTimetable.Pair)
extern "C"  bool TimetableManger_U3CsaveTimetableToDatabaseU3Em__17_m4041986172 (Il2CppObject * __this /* static, unused */, Pair_t3945686594 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
