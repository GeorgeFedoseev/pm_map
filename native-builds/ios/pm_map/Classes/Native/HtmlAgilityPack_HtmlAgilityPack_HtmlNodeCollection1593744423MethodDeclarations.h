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

// HtmlAgilityPack.HtmlNodeCollection
struct HtmlNodeCollection_t1593744423;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// HtmlAgilityPack.HtmlNode[]
struct HtmlNodeU5BU5D_t4242756820;
// System.Collections.Generic.IEnumerator`1<HtmlAgilityPack.HtmlNode>
struct IEnumerator_1_t2828282434;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"

// System.Void HtmlAgilityPack.HtmlNodeCollection::.ctor(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNodeCollection__ctor_m1466786226 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___parentnode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HtmlAgilityPack.HtmlNodeCollection::get_Item(HtmlAgilityPack.HtmlNode)
extern "C"  int32_t HtmlNodeCollection_get_Item_m1279837206 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HtmlAgilityPack.HtmlNodeCollection::get_Count()
extern "C"  int32_t HtmlNodeCollection_get_Count_m3075898374 (HtmlNodeCollection_t1593744423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeCollection::get_IsReadOnly()
extern "C"  bool HtmlNodeCollection_get_IsReadOnly_m3009771549 (HtmlNodeCollection_t1593744423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNodeCollection::get_Item(System.Int32)
extern "C"  HtmlNode_t916417385 * HtmlNodeCollection_get_Item_m4183915990 (HtmlNodeCollection_t1593744423 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeCollection::set_Item(System.Int32,HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNodeCollection_set_Item_m2423909363 (HtmlNodeCollection_t1593744423 * __this, int32_t ___index0, HtmlNode_t916417385 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeCollection::Add(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNodeCollection_Add_m3096233969 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeCollection::Clear()
extern "C"  void HtmlNodeCollection_Clear_m2122692773 (HtmlNodeCollection_t1593744423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeCollection::Contains(HtmlAgilityPack.HtmlNode)
extern "C"  bool HtmlNodeCollection_Contains_m695186687 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeCollection::CopyTo(HtmlAgilityPack.HtmlNode[],System.Int32)
extern "C"  void HtmlNodeCollection_CopyTo_m2445298407 (HtmlNodeCollection_t1593744423 * __this, HtmlNodeU5BU5D_t4242756820* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<HtmlAgilityPack.HtmlNode> HtmlAgilityPack.HtmlNodeCollection::System.Collections.Generic.IEnumerable<HtmlAgilityPack.HtmlNode>.GetEnumerator()
extern "C"  Il2CppObject* HtmlNodeCollection_System_Collections_Generic_IEnumerableU3CHtmlAgilityPack_HtmlNodeU3E_GetEnumerator_m3018290832 (HtmlNodeCollection_t1593744423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HtmlAgilityPack.HtmlNodeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * HtmlNodeCollection_System_Collections_IEnumerable_GetEnumerator_m4038906337 (HtmlNodeCollection_t1593744423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HtmlAgilityPack.HtmlNodeCollection::IndexOf(HtmlAgilityPack.HtmlNode)
extern "C"  int32_t HtmlNodeCollection_IndexOf_m596033185 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeCollection::Insert(System.Int32,HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNodeCollection_Insert_m492712874 (HtmlNodeCollection_t1593744423 * __this, int32_t ___index0, HtmlNode_t916417385 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeCollection::Remove(HtmlAgilityPack.HtmlNode)
extern "C"  bool HtmlNodeCollection_Remove_m2031206628 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeCollection::RemoveAt(System.Int32)
extern "C"  void HtmlNodeCollection_RemoveAt_m57290482 (HtmlNodeCollection_t1593744423 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeCollection::Append(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNodeCollection_Append_m2935223068 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HtmlAgilityPack.HtmlNodeCollection::GetNodeIndex(HtmlAgilityPack.HtmlNode)
extern "C"  int32_t HtmlNodeCollection_GetNodeIndex_m1544140020 (HtmlNodeCollection_t1593744423 * __this, HtmlNode_t916417385 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeCollection::Remove(System.Int32)
extern "C"  bool HtmlNodeCollection_Remove_m1474946301 (HtmlNodeCollection_t1593744423 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
