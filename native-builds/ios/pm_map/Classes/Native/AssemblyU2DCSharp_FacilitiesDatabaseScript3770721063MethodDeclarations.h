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

// FacilitiesDatabaseScript
struct FacilitiesDatabaseScript_t3770721063;
// System.String
struct String_t;
// System.Collections.Generic.List`1<FacilityRecord>
struct List_1_t48932804;
// FacilityRecord
struct FacilityRecord_t2975714548;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void FacilitiesDatabaseScript::.ctor()
extern "C"  void FacilitiesDatabaseScript__ctor_m1924695892 (FacilitiesDatabaseScript_t3770721063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesDatabaseScript::addFacility(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Int32)
extern "C"  void FacilitiesDatabaseScript_addFacility_m3724540771 (FacilitiesDatabaseScript_t3770721063 * __this, String_t* ___name0, String_t* ___desc1, String_t* ___info2, String_t* ___people3, String_t* ___aliases4, String_t* ___room5, String_t* ___icon6, int32_t ___gameObjectID7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesDatabaseScript::clearDb()
extern "C"  void FacilitiesDatabaseScript_clearDb_m3463828797 (FacilitiesDatabaseScript_t3770721063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FacilityRecord> FacilitiesDatabaseScript::findFacilities(System.String)
extern "C"  List_1_t48932804 * FacilitiesDatabaseScript_findFacilities_m1693284145 (FacilitiesDatabaseScript_t3770721063 * __this, String_t* ___search_query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FacilityRecord FacilitiesDatabaseScript::getRoom(System.String)
extern "C"  FacilityRecord_t2975714548 * FacilitiesDatabaseScript_getRoom_m3890780936 (FacilitiesDatabaseScript_t3770721063 * __this, String_t* ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesDatabaseScript::traceAllFacilities()
extern "C"  void FacilitiesDatabaseScript_traceAllFacilities_m4231309197 (FacilitiesDatabaseScript_t3770721063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
