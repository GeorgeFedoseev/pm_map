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

// SPBUTimetable.Pair
struct Pair_t3945686594;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_SPBUTimetable_Pair3945686594.h"

// System.Void SPBUTimetable.Pair::.ctor(System.DateTime,System.String,System.String,System.String,System.String,System.Boolean,System.Boolean,System.String)
extern "C"  void Pair__ctor_m538417664 (Pair_t3945686594 * __this, DateTime_t4283661327  ____day0, String_t* ____name1, String_t* ____time2, String_t* ____location3, String_t* ____lecturer4, bool ____edited5, bool ____deleted6, String_t* ____hash7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.Pair SPBUTimetable.Pair::Clone()
extern "C"  Pair_t3945686594 * Pair_Clone_m1451635865 (Pair_t3945686594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPBUTimetable.Pair::CopyTo(SPBUTimetable.Pair)
extern "C"  void Pair_CopyTo_m1392794233 (Pair_t3945686594 * __this, Pair_t3945686594 * ___to0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPBUTimetable.Pair::now()
extern "C"  bool Pair_now_m2783118820 (Pair_t3945686594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPBUTimetable.Pair::soon()
extern "C"  bool Pair_soon_m520312207 (Pair_t3945686594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPBUTimetable.Pair::parseRoom()
extern "C"  void Pair_parseRoom_m2146798256 (Pair_t3945686594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPBUTimetable.Pair::parseTime()
extern "C"  void Pair_parseTime_m2198448162 (Pair_t3945686594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
