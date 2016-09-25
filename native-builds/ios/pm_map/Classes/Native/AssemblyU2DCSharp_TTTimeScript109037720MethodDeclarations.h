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

// TTTimeScript
struct TTTimeScript_t109037720;
// SPBUTimetable.Pair
struct Pair_t3945686594;
// TTPairScript
struct TTPairScript_t2741164773;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SPBUTimetable_Pair3945686594.h"
#include "AssemblyU2DCSharp_TTPairScript2741164773.h"

// System.Void TTTimeScript::.ctor()
extern "C"  void TTTimeScript__ctor_m3424933123 (TTTimeScript_t109037720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTTimeScript::Awake()
extern "C"  void TTTimeScript_Awake_m3662538342 (TTTimeScript_t109037720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTTimeScript::clear()
extern "C"  void TTTimeScript_clear_m3461380430 (TTTimeScript_t109037720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTTimeScript::addPair(SPBUTimetable.Pair,System.Boolean,System.Boolean)
extern "C"  void TTTimeScript_addPair_m3448646437 (TTTimeScript_t109037720 * __this, Pair_t3945686594 * ___pair0, bool ___lastPair1, bool ___editMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTTimeScript::DeletePairFromTime(TTPairScript)
extern "C"  void TTTimeScript_DeletePairFromTime_m2856736888 (TTTimeScript_t109037720 * __this, TTPairScript_t2741164773 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TTTimeScript::UpdateLayout()
extern "C"  void TTTimeScript_UpdateLayout_m896460916 (TTTimeScript_t109037720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
