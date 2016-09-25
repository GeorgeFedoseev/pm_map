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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Char>
struct Dictionary_2_t2859885777;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1944872904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>[]
struct KeyValuePair_2U5BU5D_t1220414946;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>
struct IEnumerator_1_t375564236;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Char>
struct KeyCollection_t191677932;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>
struct ValueCollection_t1560491490;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22758666483.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E4177209169.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::.ctor()
extern "C"  void Dictionary_2__ctor_m480263658_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m480263658(__this, method) ((  void (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2__ctor_m480263658_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2765999402_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m2765999402(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2859885777 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2765999402_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m797137668_gshared (Dictionary_2_t2859885777 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m797137668(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2859885777 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m797137668_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3971579769_gshared (Dictionary_2_t2859885777 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3971579769(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t2859885777 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3971579769_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1984071924_gshared (Dictionary_2_t2859885777 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1984071924(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2859885777 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m1984071924_gshared)(__this, ___info0, ___context1, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m1900598449_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1900598449(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1900598449_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m3481563487_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m3481563487(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m3481563487_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1037066795_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1037066795(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2859885777 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1037066795_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1714158554_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1714158554(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2859885777 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1714158554_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3018768951_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3018768951(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2859885777 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3018768951_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1340787739_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1340787739(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2859885777 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1340787739_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1609919000_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1609919000(__this, ___key0, method) ((  void (*) (Dictionary_2_t2859885777 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1609919000_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m340840729_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m340840729(__this, method) ((  bool (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m340840729_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2842425611_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2842425611(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2842425611_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3843983389_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3843983389(__this, method) ((  bool (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3843983389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1540565678_gshared (Dictionary_2_t2859885777 * __this, KeyValuePair_2_t2758666483  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1540565678(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2859885777 *, KeyValuePair_2_t2758666483 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1540565678_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3240098456_gshared (Dictionary_2_t2859885777 * __this, KeyValuePair_2_t2758666483  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3240098456(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2859885777 *, KeyValuePair_2_t2758666483 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3240098456_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3087534866_gshared (Dictionary_2_t2859885777 * __this, KeyValuePair_2U5BU5D_t1220414946* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3087534866(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2859885777 *, KeyValuePair_2U5BU5D_t1220414946*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3087534866_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3776702397_gshared (Dictionary_2_t2859885777 * __this, KeyValuePair_2_t2758666483  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3776702397(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2859885777 *, KeyValuePair_2_t2758666483 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3776702397_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m4183268977_gshared (Dictionary_2_t2859885777 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m4183268977(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2859885777 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m4183268977_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3164351296_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3164351296(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3164351296_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1302967863_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1302967863(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1302967863_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m57593220_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m57593220(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m57593220_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2137664467_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2137664467(__this, method) ((  int32_t (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_get_Count_m2137664467_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::get_Item(TKey)
extern "C"  Il2CppChar Dictionary_2_get_Item_m527949908_gshared (Dictionary_2_t2859885777 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m527949908(__this, ___key0, method) ((  Il2CppChar (*) (Dictionary_2_t2859885777 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m527949908_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2450995891_gshared (Dictionary_2_t2859885777 * __this, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2450995891(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2859885777 *, int32_t, Il2CppChar, const MethodInfo*))Dictionary_2_set_Item_m2450995891_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m4045150635_gshared (Dictionary_2_t2859885777 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m4045150635(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2859885777 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m4045150635_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2142702956_gshared (Dictionary_2_t2859885777 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2142702956(__this, ___size0, method) ((  void (*) (Dictionary_2_t2859885777 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2142702956_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m200277096_gshared (Dictionary_2_t2859885777 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m200277096(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2859885777 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m200277096_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2758666483  Dictionary_2_make_pair_m4157220348_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m4157220348(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2758666483  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppChar, const MethodInfo*))Dictionary_2_make_pair_m4157220348_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m1099258434_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m1099258434(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppChar, const MethodInfo*))Dictionary_2_pick_key_m1099258434_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::pick_value(TKey,TValue)
extern "C"  Il2CppChar Dictionary_2_pick_value_m3646105246_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3646105246(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppChar (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppChar, const MethodInfo*))Dictionary_2_pick_value_m3646105246_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1280324199_gshared (Dictionary_2_t2859885777 * __this, KeyValuePair_2U5BU5D_t1220414946* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1280324199(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2859885777 *, KeyValuePair_2U5BU5D_t1220414946*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1280324199_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::Resize()
extern "C"  void Dictionary_2_Resize_m2787824741_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2787824741(__this, method) ((  void (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_Resize_m2787824741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1032432124_gshared (Dictionary_2_t2859885777 * __this, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1032432124(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2859885777 *, int32_t, Il2CppChar, const MethodInfo*))Dictionary_2_Add_m1032432124_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::Clear()
extern "C"  void Dictionary_2_Clear_m3036091998_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3036091998(__this, method) ((  void (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_Clear_m3036091998_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m234555693_gshared (Dictionary_2_t2859885777 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m234555693(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2859885777 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m234555693_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1163577608_gshared (Dictionary_2_t2859885777 * __this, Il2CppChar ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1163577608(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2859885777 *, Il2CppChar, const MethodInfo*))Dictionary_2_ContainsValue_m1163577608_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1085643857_gshared (Dictionary_2_t2859885777 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1085643857(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2859885777 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m1085643857_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1513510579_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1513510579(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2859885777 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1513510579_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m4246698728_gshared (Dictionary_2_t2859885777 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m4246698728(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2859885777 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m4246698728_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m976882017_gshared (Dictionary_2_t2859885777 * __this, int32_t ___key0, Il2CppChar* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m976882017(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2859885777 *, int32_t, Il2CppChar*, const MethodInfo*))Dictionary_2_TryGetValue_m976882017_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::get_Keys()
extern "C"  KeyCollection_t191677932 * Dictionary_2_get_Keys_m978153434_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m978153434(__this, method) ((  KeyCollection_t191677932 * (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_get_Keys_m978153434_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::get_Values()
extern "C"  ValueCollection_t1560491490 * Dictionary_2_get_Values_m4201356278_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m4201356278(__this, method) ((  ValueCollection_t1560491490 * (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_get_Values_m4201356278_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m549117341_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m549117341(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t2859885777 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m549117341_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::ToTValue(System.Object)
extern "C"  Il2CppChar Dictionary_2_ToTValue_m1958419385_gshared (Dictionary_2_t2859885777 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1958419385(__this, ___value0, method) ((  Il2CppChar (*) (Dictionary_2_t2859885777 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1958419385_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2079680715_gshared (Dictionary_2_t2859885777 * __this, KeyValuePair_2_t2758666483  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2079680715(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2859885777 *, KeyValuePair_2_t2758666483 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2079680715_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::GetEnumerator()
extern "C"  Enumerator_t4177209169  Dictionary_2_GetEnumerator_m3936913662_gshared (Dictionary_2_t2859885777 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3936913662(__this, method) ((  Enumerator_t4177209169  (*) (Dictionary_2_t2859885777 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3936913662_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Char>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__2_m669560115_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m669560115(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppChar, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m669560115_gshared)(__this /* static, unused */, ___key0, ___value1, method)
