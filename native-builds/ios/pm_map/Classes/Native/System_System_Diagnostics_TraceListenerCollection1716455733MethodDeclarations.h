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

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t1716455733;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Diagnostics.TraceListener
struct TraceListener_t964863095;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t251944998;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Diagnostics_TraceListener964863095.h"
#include "System_System_Diagnostics_TraceImplSettings251944998.h"

// System.Void System.Diagnostics.TraceListenerCollection::.ctor()
extern "C"  void TraceListenerCollection__ctor_m2527480358 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::.ctor(System.Boolean)
extern "C"  void TraceListenerCollection__ctor_m3251979549 (TraceListenerCollection_t1716455733 * __this, bool ___addDefault0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * TraceListenerCollection_System_Collections_IList_get_Item_m2646743931 (TraceListenerCollection_t1716455733 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_set_Item_m3374610642 (TraceListenerCollection_t1716455733 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool TraceListenerCollection_System_Collections_ICollection_get_IsSynchronized_m3727383476 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m3085440756 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m1554049047 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m2997991426 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void TraceListenerCollection_System_Collections_ICollection_CopyTo_m1732739550 (TraceListenerCollection_t1716455733 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t TraceListenerCollection_System_Collections_IList_Add_m3085919652 (TraceListenerCollection_t1716455733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool TraceListenerCollection_System_Collections_IList_Contains_m3689290408 (TraceListenerCollection_t1716455733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t TraceListenerCollection_System_Collections_IList_IndexOf_m1878796796 (TraceListenerCollection_t1716455733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_Insert_m128012219 (TraceListenerCollection_t1716455733 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_Remove_m2177131917 (TraceListenerCollection_t1716455733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::get_Count()
extern "C"  int32_t TraceListenerCollection_get_Count_m4233412858 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.String)
extern "C"  TraceListener_t964863095 * TraceListenerCollection_get_Item_m1422885249 (TraceListenerCollection_t1716455733 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::set_Item(System.Int32,System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_set_Item_m2374932783 (TraceListenerCollection_t1716455733 * __this, int32_t ___index0, TraceListener_t964863095 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener)
extern "C"  int32_t TraceListenerCollection_Add_m860190717 (TraceListenerCollection_t1716455733 * __this, TraceListener_t964863095 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener,System.Diagnostics.TraceImplSettings)
extern "C"  void TraceListenerCollection_Add_m710021106 (TraceListenerCollection_t1716455733 * __this, TraceListener_t964863095 * ___listener0, TraceImplSettings_t251944998 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeListener(System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_InitializeListener_m1025063114 (TraceListenerCollection_t1716455733 * __this, TraceListener_t964863095 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Clear()
extern "C"  void TraceListenerCollection_Clear_m4228580945 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Diagnostics.TraceListenerCollection::GetEnumerator()
extern "C"  Il2CppObject * TraceListenerCollection_GetEnumerator_m1087376660 (TraceListenerCollection_t1716455733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Insert(System.Int32,System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_Insert_m2738140390 (TraceListenerCollection_t1716455733 * __this, int32_t ___index0, TraceListener_t964863095 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.String)
extern "C"  void TraceListenerCollection_Remove_m1610673056 (TraceListenerCollection_t1716455733 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::RemoveAt(System.Int32)
extern "C"  void TraceListenerCollection_RemoveAt_m2567066566 (TraceListenerCollection_t1716455733 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
