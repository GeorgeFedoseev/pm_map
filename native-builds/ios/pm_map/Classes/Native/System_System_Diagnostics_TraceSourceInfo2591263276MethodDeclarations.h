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

// System.Diagnostics.TraceSourceInfo
struct TraceSourceInfo_t2591263276;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t251944998;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t1716455733;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Diagnostics_SourceLevels2222852266.h"
#include "System_System_Diagnostics_TraceImplSettings251944998.h"

// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels,System.Diagnostics.TraceImplSettings)
extern "C"  void TraceSourceInfo__ctor_m886015755 (TraceSourceInfo_t2591263276 * __this, String_t* ___name0, int32_t ___levels1, TraceImplSettings_t251944998 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSourceInfo::get_Name()
extern "C"  String_t* TraceSourceInfo_get_Name_m3892202316 (TraceSourceInfo_t2591263276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::get_Listeners()
extern "C"  TraceListenerCollection_t1716455733 * TraceSourceInfo_get_Listeners_m3279267578 (TraceSourceInfo_t2591263276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
