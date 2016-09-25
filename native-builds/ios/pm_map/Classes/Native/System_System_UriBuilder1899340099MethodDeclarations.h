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

// System.UriBuilder
struct UriBuilder_t1899340099;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C"  void UriBuilder__ctor_m101958223 (UriBuilder_t1899340099 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C"  void UriBuilder_set_Host_m3163713877 (UriBuilder_t1899340099 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C"  Uri_t1116831938 * UriBuilder_get_Uri_m1652017167 (UriBuilder_t1899340099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C"  bool UriBuilder_Equals_m2032023843 (UriBuilder_t1899340099 * __this, Il2CppObject * ___rparam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C"  int32_t UriBuilder_GetHashCode_m615431547 (UriBuilder_t1899340099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C"  String_t* UriBuilder_ToString_m1248051345 (UriBuilder_t1899340099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
