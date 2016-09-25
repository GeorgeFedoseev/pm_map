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

// System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>
struct Dictionary_2_t98567416;
// System.Collections.Generic.IEqualityComparer`1<System.Boolean>
struct IEqualityComparer_1_t1267833122;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Boolean,System.Object>[]
struct KeyValuePair_2U5BU5D_t4253596991;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Boolean,System.Object>>
struct IEnumerator_1_t1909213171;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Boolean,System.Object>
struct KeyCollection_t1725326867;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Boolean,System.Object>
struct ValueCollection_t3094140425;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24292315418.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1415890808.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m892861110_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m892861110(__this, method) ((  void (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2__ctor_m892861110_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1711030829_gshared (Dictionary_2_t98567416 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1711030829(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t98567416 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1711030829_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3066384135_gshared (Dictionary_2_t98567416 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3066384135(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t98567416 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3066384135_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1864009558_gshared (Dictionary_2_t98567416 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1864009558(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t98567416 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1864009558_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m451444471_gshared (Dictionary_2_t98567416 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m451444471(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t98567416 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m451444471_gshared)(__this, ___info0, ___context1, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2319627892_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2319627892(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2319627892_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m2441932386_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m2441932386(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m2441932386_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3122661832_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3122661832(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3122661832_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1952283191_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1952283191(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t98567416 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1952283191_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m653589946_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m653589946(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t98567416 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m653589946_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3723768376_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3723768376(__this, ___key0, method) ((  bool (*) (Dictionary_2_t98567416 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3723768376_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2199994997_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2199994997(__this, ___key0, method) ((  void (*) (Dictionary_2_t98567416 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2199994997_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3849152540_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3849152540(__this, method) ((  bool (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3849152540_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3999063246_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3999063246(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3999063246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1226949984_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1226949984(__this, method) ((  bool (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1226949984_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2387439755_gshared (Dictionary_2_t98567416 * __this, KeyValuePair_2_t4292315418  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2387439755(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t98567416 *, KeyValuePair_2_t4292315418 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2387439755_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2648212955_gshared (Dictionary_2_t98567416 * __this, KeyValuePair_2_t4292315418  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2648212955(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t98567416 *, KeyValuePair_2_t4292315418 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2648212955_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2020701103_gshared (Dictionary_2_t98567416 * __this, KeyValuePair_2U5BU5D_t4253596991* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2020701103(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t98567416 *, KeyValuePair_2U5BU5D_t4253596991*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2020701103_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2448713664_gshared (Dictionary_2_t98567416 * __this, KeyValuePair_2_t4292315418  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2448713664(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t98567416 *, KeyValuePair_2_t4292315418 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2448713664_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3877163854_gshared (Dictionary_2_t98567416 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3877163854(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t98567416 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3877163854_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2059511901_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2059511901(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2059511901_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m717877268_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m717877268(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m717877268_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2400886689_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2400886689(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2400886689_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m979035350_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m979035350(__this, method) ((  int32_t (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_get_Count_m979035350_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m768392561_gshared (Dictionary_2_t98567416 * __this, bool ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m768392561(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, bool, const MethodInfo*))Dictionary_2_get_Item_m768392561_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1353464310_gshared (Dictionary_2_t98567416 * __this, bool ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1353464310(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t98567416 *, bool, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m1353464310_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2730238510_gshared (Dictionary_2_t98567416 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2730238510(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t98567416 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2730238510_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3165397833_gshared (Dictionary_2_t98567416 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3165397833(__this, ___size0, method) ((  void (*) (Dictionary_2_t98567416 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3165397833_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2319911813_gshared (Dictionary_2_t98567416 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2319911813(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t98567416 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2319911813_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t4292315418  Dictionary_2_make_pair_m3616963865_gshared (Il2CppObject * __this /* static, unused */, bool ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m3616963865(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t4292315418  (*) (Il2CppObject * /* static, unused */, bool, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m3616963865_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::pick_key(TKey,TValue)
extern "C"  bool Dictionary_2_pick_key_m137902469_gshared (Il2CppObject * __this /* static, unused */, bool ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m137902469(__this /* static, unused */, ___key0, ___value1, method) ((  bool (*) (Il2CppObject * /* static, unused */, bool, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m137902469_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m3162028577_gshared (Il2CppObject * __this /* static, unused */, bool ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3162028577(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, bool, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m3162028577_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2308607146_gshared (Dictionary_2_t98567416 * __this, KeyValuePair_2U5BU5D_t4253596991* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2308607146(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t98567416 *, KeyValuePair_2U5BU5D_t4253596991*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2308607146_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m1966687298_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1966687298(__this, method) ((  void (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_Resize_m1966687298_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2304698047_gshared (Dictionary_2_t98567416 * __this, bool ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2304698047(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t98567416 *, bool, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m2304698047_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m2593961697_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2593961697(__this, method) ((  void (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_Clear_m2593961697_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2695332043_gshared (Dictionary_2_t98567416 * __this, bool ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2695332043(__this, ___key0, method) ((  bool (*) (Dictionary_2_t98567416 *, bool, const MethodInfo*))Dictionary_2_ContainsKey_m2695332043_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m7305035_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m7305035(__this, ___value0, method) ((  bool (*) (Dictionary_2_t98567416 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m7305035_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m4023574356_gshared (Dictionary_2_t98567416 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m4023574356(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t98567416 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m4023574356_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1851408272_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1851408272(__this, ___sender0, method) ((  void (*) (Dictionary_2_t98567416 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1851408272_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m4107806021_gshared (Dictionary_2_t98567416 * __this, bool ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m4107806021(__this, ___key0, method) ((  bool (*) (Dictionary_2_t98567416 *, bool, const MethodInfo*))Dictionary_2_Remove_m4107806021_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3807895076_gshared (Dictionary_2_t98567416 * __this, bool ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3807895076(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t98567416 *, bool, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m3807895076_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::get_Keys()
extern "C"  KeyCollection_t1725326867 * Dictionary_2_get_Keys_m3598247543_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3598247543(__this, method) ((  KeyCollection_t1725326867 * (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_get_Keys_m3598247543_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::get_Values()
extern "C"  ValueCollection_t3094140425 * Dictionary_2_get_Values_m2344966227_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2344966227(__this, method) ((  ValueCollection_t3094140425 * (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_get_Values_m2344966227_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::ToTKey(System.Object)
extern "C"  bool Dictionary_2_ToTKey_m3882728672_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3882728672(__this, ___key0, method) ((  bool (*) (Dictionary_2_t98567416 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3882728672_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1474342716_gshared (Dictionary_2_t98567416 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1474342716(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t98567416 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1474342716_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m401386280_gshared (Dictionary_2_t98567416 * __this, KeyValuePair_2_t4292315418  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m401386280(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t98567416 *, KeyValuePair_2_t4292315418 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m401386280_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1415890808  Dictionary_2_GetEnumerator_m2755626241_gshared (Dictionary_2_t98567416 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2755626241(__this, method) ((  Enumerator_t1415890808  (*) (Dictionary_2_t98567416 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2755626241_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Boolean,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__2_m2558474102_gshared (Il2CppObject * __this /* static, unused */, bool ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m2558474102(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, bool, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m2558474102_gshared)(__this /* static, unused */, ___key0, ___value1, method)
