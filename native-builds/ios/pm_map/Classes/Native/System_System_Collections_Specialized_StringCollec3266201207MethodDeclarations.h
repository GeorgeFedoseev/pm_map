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

// System.Collections.Specialized.StringCollection
struct StringCollection_t3266201207;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t4086853533;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern "C"  void StringCollection__ctor_m915846517 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool StringCollection_System_Collections_IList_get_IsReadOnly_m2315349158 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool StringCollection_System_Collections_IList_get_IsFixedSize_m1866975219 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * StringCollection_System_Collections_IList_get_Item_m2697350461 (StringCollection_t3266201207 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_set_Item_m3949246858 (StringCollection_t3266201207 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_Add_m1069392572 (StringCollection_t3266201207 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool StringCollection_System_Collections_IList_Contains_m3716457860 (StringCollection_t3266201207 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_IndexOf_m3182828308 (StringCollection_t3266201207 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_Insert_m401235571 (StringCollection_t3266201207 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void StringCollection_System_Collections_IList_Remove_m55692245 (StringCollection_t3266201207 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void StringCollection_System_Collections_ICollection_CopyTo_m980608550 (StringCollection_t3266201207 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * StringCollection_System_Collections_IEnumerable_GetEnumerator_m1161950369 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern "C"  String_t* StringCollection_get_Item_m458216537 (StringCollection_t3266201207 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C"  void StringCollection_set_Item_m646958915 (StringCollection_t3266201207 * __this, int32_t ___index0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C"  int32_t StringCollection_get_Count_m1158755291 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C"  int32_t StringCollection_Add_m1734005996 (StringCollection_t3266201207 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C"  void StringCollection_Clear_m1854767369 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C"  bool StringCollection_Contains_m716685116 (StringCollection_t3266201207 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern "C"  StringEnumerator_t4086853533 * StringCollection_GetEnumerator_m355537934 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C"  int32_t StringCollection_IndexOf_m183974317 (StringCollection_t3266201207 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C"  void StringCollection_Insert_m466422508 (StringCollection_t3266201207 * __this, int32_t ___index0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsReadOnly()
extern "C"  bool StringCollection_get_IsReadOnly_m3024701829 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern "C"  bool StringCollection_get_IsSynchronized_m1486263991 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C"  void StringCollection_Remove_m1834632280 (StringCollection_t3266201207 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C"  void StringCollection_RemoveAt_m919867918 (StringCollection_t3266201207 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C"  Il2CppObject * StringCollection_get_SyncRoot_m3145314167 (StringCollection_t3266201207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
