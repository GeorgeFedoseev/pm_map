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

// System.Diagnostics.TraceListener
struct TraceListener_t964863095;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1159596143;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Diagnostics_TraceOptions122930393.h"

// System.Void System.Diagnostics.TraceListener::.ctor(System.String)
extern "C"  void TraceListener__ctor_m1786092830 (TraceListener_t964863095 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentLevel(System.Int32)
extern "C"  void TraceListener_set_IndentLevel_m1540755758 (TraceListener_t964863095 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentSize(System.Int32)
extern "C"  void TraceListener_set_IndentSize_m4263380027 (TraceListener_t964863095 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::get_Name()
extern "C"  String_t* TraceListener_get_Name_m3769692055 (TraceListener_t964863095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_Name(System.String)
extern "C"  void TraceListener_set_Name_m3862755546 (TraceListener_t964863095 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose()
extern "C"  void TraceListener_Dispose_m2599266209 (TraceListener_t964863095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose(System.Boolean)
extern "C"  void TraceListener_Dispose_m534900568 (TraceListener_t964863095 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.TraceListener::GetSupportedAttributes()
extern "C"  StringU5BU5D_t4054002952* TraceListener_GetSupportedAttributes_m2024753616 (TraceListener_t964863095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::get_Attributes()
extern "C"  StringDictionary_t1159596143 * TraceListener_get_Attributes_m182139119 (TraceListener_t964863095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_TraceOutputOptions(System.Diagnostics.TraceOptions)
extern "C"  void TraceListener_set_TraceOutputOptions_m217665283 (TraceListener_t964863095 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
