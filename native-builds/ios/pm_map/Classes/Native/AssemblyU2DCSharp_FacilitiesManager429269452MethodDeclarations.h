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

// FacilitiesManager
struct FacilitiesManager_t429269452;
// System.Collections.Generic.List`1<FacilityScript>
struct List_1_t76155966;
// System.String
struct String_t;
// FacilityScript
struct FacilityScript_t3002937710;
// RoomScript
struct RoomScript_t2905000358;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_FacilityScript3002937710.h"

// System.Void FacilitiesManager::.ctor()
extern "C"  void FacilitiesManager__ctor_m152621343 (FacilitiesManager_t429269452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesManager::initFacilities()
extern "C"  void FacilitiesManager_initFacilities_m1470716566 (FacilitiesManager_t429269452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FacilityScript> FacilitiesManager::findFacilities(System.String)
extern "C"  List_1_t76155966 * FacilitiesManager_findFacilities_m970380452 (FacilitiesManager_t429269452 * __this, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesManager::focusFacility(FacilityScript,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void FacilitiesManager_focusFacility_m2618758163 (FacilitiesManager_t429269452 * __this, FacilityScript_t3002937710 * ___f0, bool ___flyTo1, bool ___showInfo2, bool ___switchFloor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesManager::switchToFloor(System.Int32)
extern "C"  void FacilitiesManager_switchToFloor_m690458091 (FacilitiesManager_t429269452 * __this, int32_t ___floor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FacilitiesManager::hasRoom(System.String)
extern "C"  bool FacilitiesManager_hasRoom_m456190812 (FacilitiesManager_t429269452 * __this, String_t* ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomScript FacilitiesManager::getRoom(System.String)
extern "C"  RoomScript_t2905000358 * FacilitiesManager_getRoom_m588971165 (FacilitiesManager_t429269452 * __this, String_t* ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesManager::goToRoom(System.String)
extern "C"  void FacilitiesManager_goToRoom_m2181107775 (FacilitiesManager_t429269452 * __this, String_t* ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesManager::clearFocus()
extern "C"  void FacilitiesManager_clearFocus_m3615884528 (FacilitiesManager_t429269452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacilitiesManager::dehighlightAll()
extern "C"  void FacilitiesManager_dehighlightAll_m232370931 (FacilitiesManager_t429269452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
