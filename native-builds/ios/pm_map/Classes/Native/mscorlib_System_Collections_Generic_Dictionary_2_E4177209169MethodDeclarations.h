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
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E4177209169.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22758666483.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m3703578599_gshared (Enumerator_t4177209169 * __this, Dictionary_2_t2859885777 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m3703578599(__this, ___dictionary0, method) ((  void (*) (Enumerator_t4177209169 *, Dictionary_2_t2859885777 *, const MethodInfo*))Enumerator__ctor_m3703578599_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m348036644_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m348036644(__this, method) ((  Il2CppObject * (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m348036644_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m380726894_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m380726894(__this, method) ((  void (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m380726894_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t1751606614  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3084550757_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3084550757(__this, method) ((  DictionaryEntry_t1751606614  (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3084550757_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1690284032_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1690284032(__this, method) ((  Il2CppObject * (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1690284032_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1913753234_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1913753234(__this, method) ((  Il2CppObject * (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1913753234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m611224990_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m611224990(__this, method) ((  bool (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_MoveNext_m611224990_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::get_Current()
extern "C"  KeyValuePair_2_t2758666483  Enumerator_get_Current_m3579252702_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m3579252702(__this, method) ((  KeyValuePair_2_t2758666483  (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_get_Current_m3579252702_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::get_CurrentKey()
extern "C"  int32_t Enumerator_get_CurrentKey_m103939367_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m103939367(__this, method) ((  int32_t (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_get_CurrentKey_m103939367_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::get_CurrentValue()
extern "C"  Il2CppChar Enumerator_get_CurrentValue_m773779751_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m773779751(__this, method) ((  Il2CppChar (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_get_CurrentValue_m773779751_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::Reset()
extern "C"  void Enumerator_Reset_m3027750841_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_Reset_m3027750841(__this, method) ((  void (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_Reset_m3027750841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::VerifyState()
extern "C"  void Enumerator_VerifyState_m3583291650_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m3583291650(__this, method) ((  void (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_VerifyState_m3583291650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m1724376042_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1724376042(__this, method) ((  void (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_VerifyCurrent_m1724376042_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Char>::Dispose()
extern "C"  void Enumerator_Dispose_m204160585_gshared (Enumerator_t4177209169 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m204160585(__this, method) ((  void (*) (Enumerator_t4177209169 *, const MethodInfo*))Enumerator_Dispose_m204160585_gshared)(__this, method)
