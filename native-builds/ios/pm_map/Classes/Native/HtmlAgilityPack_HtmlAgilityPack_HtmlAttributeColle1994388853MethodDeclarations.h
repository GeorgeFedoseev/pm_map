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

// HtmlAgilityPack.HtmlAttributeCollection
struct HtmlAttributeCollection_t1994388853;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// HtmlAgilityPack.HtmlAttribute
struct HtmlAttribute_t1980984887;
// System.String
struct String_t;
// HtmlAgilityPack.HtmlAttribute[]
struct HtmlAttributeU5BU5D_t4094957326;
// System.Collections.Generic.IEnumerator`1<HtmlAgilityPack.HtmlAttribute>
struct IEnumerator_1_t3892849936;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"
#include "mscorlib_System_String7231557.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlAttribute1980984887.h"

// System.Void HtmlAgilityPack.HtmlAttributeCollection::.ctor(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlAttributeCollection__ctor_m1217317066 (HtmlAttributeCollection_t1994388853 * __this, HtmlNode_t916417385 * ___ownernode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlAttribute HtmlAgilityPack.HtmlAttributeCollection::get_Item(System.String)
extern "C"  HtmlAttribute_t1980984887 * HtmlAttributeCollection_get_Item_m3664846001 (HtmlAttributeCollection_t1994388853 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HtmlAgilityPack.HtmlAttributeCollection::get_Count()
extern "C"  int32_t HtmlAttributeCollection_get_Count_m564194062 (HtmlAttributeCollection_t1994388853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlAttributeCollection::get_IsReadOnly()
extern "C"  bool HtmlAttributeCollection_get_IsReadOnly_m2694626569 (HtmlAttributeCollection_t1994388853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlAttribute HtmlAgilityPack.HtmlAttributeCollection::get_Item(System.Int32)
extern "C"  HtmlAttribute_t1980984887 * HtmlAttributeCollection_get_Item_m2597340610 (HtmlAttributeCollection_t1994388853 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlAttributeCollection::set_Item(System.Int32,HtmlAgilityPack.HtmlAttribute)
extern "C"  void HtmlAttributeCollection_set_Item_m3136970473 (HtmlAttributeCollection_t1994388853 * __this, int32_t ___index0, HtmlAttribute_t1980984887 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlAttributeCollection::Add(HtmlAgilityPack.HtmlAttribute)
extern "C"  void HtmlAttributeCollection_Add_m2867133355 (HtmlAttributeCollection_t1994388853 * __this, HtmlAttribute_t1980984887 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlAttributeCollection::System.Collections.Generic.ICollection<HtmlAgilityPack.HtmlAttribute>.Clear()
extern "C"  void HtmlAttributeCollection_System_Collections_Generic_ICollectionU3CHtmlAgilityPack_HtmlAttributeU3E_Clear_m1052350395 (HtmlAttributeCollection_t1994388853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlAttributeCollection::Contains(HtmlAgilityPack.HtmlAttribute)
extern "C"  bool HtmlAttributeCollection_Contains_m1038210825 (HtmlAttributeCollection_t1994388853 * __this, HtmlAttribute_t1980984887 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlAttributeCollection::CopyTo(HtmlAgilityPack.HtmlAttribute[],System.Int32)
extern "C"  void HtmlAttributeCollection_CopyTo_m12980511 (HtmlAttributeCollection_t1994388853 * __this, HtmlAttributeU5BU5D_t4094957326* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<HtmlAgilityPack.HtmlAttribute> HtmlAgilityPack.HtmlAttributeCollection::System.Collections.Generic.IEnumerable<HtmlAgilityPack.HtmlAttribute>.GetEnumerator()
extern "C"  Il2CppObject* HtmlAttributeCollection_System_Collections_Generic_IEnumerableU3CHtmlAgilityPack_HtmlAttributeU3E_GetEnumerator_m4043001948 (HtmlAttributeCollection_t1994388853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HtmlAgilityPack.HtmlAttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * HtmlAttributeCollection_System_Collections_IEnumerable_GetEnumerator_m3347143973 (HtmlAttributeCollection_t1994388853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HtmlAgilityPack.HtmlAttributeCollection::IndexOf(HtmlAgilityPack.HtmlAttribute)
extern "C"  int32_t HtmlAttributeCollection_IndexOf_m706608395 (HtmlAttributeCollection_t1994388853 * __this, HtmlAttribute_t1980984887 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlAttributeCollection::Insert(System.Int32,HtmlAgilityPack.HtmlAttribute)
extern "C"  void HtmlAttributeCollection_Insert_m3128830866 (HtmlAttributeCollection_t1994388853 * __this, int32_t ___index0, HtmlAttribute_t1980984887 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlAttributeCollection::System.Collections.Generic.ICollection<HtmlAgilityPack.HtmlAttribute>.Remove(HtmlAgilityPack.HtmlAttribute)
extern "C"  bool HtmlAttributeCollection_System_Collections_Generic_ICollectionU3CHtmlAgilityPack_HtmlAttributeU3E_Remove_m1747023938 (HtmlAttributeCollection_t1994388853 * __this, HtmlAttribute_t1980984887 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlAttributeCollection::RemoveAt(System.Int32)
extern "C"  void HtmlAttributeCollection_RemoveAt_m3497782490 (HtmlAttributeCollection_t1994388853 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlAttribute HtmlAgilityPack.HtmlAttributeCollection::Append(HtmlAgilityPack.HtmlAttribute)
extern "C"  HtmlAttribute_t1980984887 * HtmlAttributeCollection_Append_m89383181 (HtmlAttributeCollection_t1994388853 * __this, HtmlAttribute_t1980984887 * ___newAttribute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HtmlAgilityPack.HtmlAttributeCollection::GetAttributeIndex(System.String)
extern "C"  int32_t HtmlAttributeCollection_GetAttributeIndex_m3405238094 (HtmlAttributeCollection_t1994388853 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
