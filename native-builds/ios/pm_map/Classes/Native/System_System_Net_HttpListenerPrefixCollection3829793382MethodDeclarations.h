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

// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3829793382;
// System.Net.HttpListener
struct HttpListener_t1617405814;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1919096606;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_HttpListener1617405814.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.HttpListenerPrefixCollection::.ctor(System.Net.HttpListener)
extern "C"  void HttpListenerPrefixCollection__ctor_m2658307928 (HttpListenerPrefixCollection_t3829793382 * __this, HttpListener_t1617405814 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.HttpListenerPrefixCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_m1874079921 (HttpListenerPrefixCollection_t3829793382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerPrefixCollection::get_Count()
extern "C"  int32_t HttpListenerPrefixCollection_get_Count_m3315024386 (HttpListenerPrefixCollection_t3829793382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::get_IsReadOnly()
extern "C"  bool HttpListenerPrefixCollection_get_IsReadOnly_m3649525141 (HttpListenerPrefixCollection_t3829793382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
extern "C"  void HttpListenerPrefixCollection_Add_m734663445 (HttpListenerPrefixCollection_t3829793382 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::Clear()
extern "C"  void HttpListenerPrefixCollection_Clear_m2106830073 (HttpListenerPrefixCollection_t3829793382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::Contains(System.String)
extern "C"  bool HttpListenerPrefixCollection_Contains_m4244995875 (HttpListenerPrefixCollection_t3829793382 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::CopyTo(System.String[],System.Int32)
extern "C"  void HttpListenerPrefixCollection_CopyTo_m2516753533 (HttpListenerPrefixCollection_t3829793382 * __this, StringU5BU5D_t4054002952* ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.String> System.Net.HttpListenerPrefixCollection::GetEnumerator()
extern "C"  Il2CppObject* HttpListenerPrefixCollection_GetEnumerator_m3454844190 (HttpListenerPrefixCollection_t3829793382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::Remove(System.String)
extern "C"  bool HttpListenerPrefixCollection_Remove_m852570718 (HttpListenerPrefixCollection_t3829793382 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
