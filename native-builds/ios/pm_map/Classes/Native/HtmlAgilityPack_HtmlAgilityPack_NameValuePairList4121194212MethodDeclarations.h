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

// HtmlAgilityPack.NameValuePairList
struct NameValuePairList_t4121194212;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t2094616185;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void HtmlAgilityPack.NameValuePairList::.ctor(System.String)
extern "C"  void NameValuePairList__ctor_m856268447 (NameValuePairList_t4121194212 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.NameValuePairList::GetNameValuePairsValue(System.String,System.String)
extern "C"  String_t* NameValuePairList_GetNameValuePairsValue_m2572478584 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> HtmlAgilityPack.NameValuePairList::GetNameValuePairs(System.String)
extern "C"  List_1_t2094616185 * NameValuePairList_GetNameValuePairs_m457327820 (NameValuePairList_t4121194212 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.NameValuePairList::GetNameValuePairValue(System.String)
extern "C"  String_t* NameValuePairList_GetNameValuePairValue_m1623553271 (NameValuePairList_t4121194212 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.NameValuePairList::Parse(System.String)
extern "C"  void NameValuePairList_Parse_m2689516334 (NameValuePairList_t4121194212 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
