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

// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>
struct Queue_1_t281839975;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<CUDLR.QueuedCommand>
struct IEnumerator_1_t4252429891;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// CUDLR.QueuedCommand[]
struct QueuedCommandU5BU5D_t2682495919;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_CUDLR_QueuedCommand2340564842.h"
#include "System_System_Collections_Generic_Queue_1_Enumerat1570925487.h"

// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::.ctor()
extern "C"  void Queue_1__ctor_m1141815302_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1__ctor_m1141815302(__this, method) ((  void (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1__ctor_m1141815302_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Queue_1_System_Collections_ICollection_CopyTo_m1254177279_gshared (Queue_1_t281839975 * __this, Il2CppArray * ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m1254177279(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t281839975 *, Il2CppArray *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m1254177279_gshared)(__this, ___array0, ___idx1, method)
// System.Boolean System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m271187167_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m271187167(__this, method) ((  bool (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m271187167_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m855383293_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m855383293(__this, method) ((  Il2CppObject * (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m855383293_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2618845615_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2618845615(__this, method) ((  Il2CppObject* (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2618845615_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Queue_1_System_Collections_IEnumerable_GetEnumerator_m2335426234_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m2335426234(__this, method) ((  Il2CppObject * (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m2335426234_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::CopyTo(T[],System.Int32)
extern "C"  void Queue_1_CopyTo_m963058282_gshared (Queue_1_t281839975 * __this, QueuedCommandU5BU5D_t2682495919* ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_CopyTo_m963058282(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t281839975 *, QueuedCommandU5BU5D_t2682495919*, int32_t, const MethodInfo*))Queue_1_CopyTo_m963058282_gshared)(__this, ___array0, ___idx1, method)
// T System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::Dequeue()
extern "C"  QueuedCommand_t2340564842  Queue_1_Dequeue_m1477049410_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m1477049410(__this, method) ((  QueuedCommand_t2340564842  (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_Dequeue_m1477049410_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::Peek()
extern "C"  QueuedCommand_t2340564842  Queue_1_Peek_m3528834619_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_Peek_m3528834619(__this, method) ((  QueuedCommand_t2340564842  (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_Peek_m3528834619_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::Enqueue(T)
extern "C"  void Queue_1_Enqueue_m394873181_gshared (Queue_1_t281839975 * __this, QueuedCommand_t2340564842  ___item0, const MethodInfo* method);
#define Queue_1_Enqueue_m394873181(__this, ___item0, method) ((  void (*) (Queue_1_t281839975 *, QueuedCommand_t2340564842 , const MethodInfo*))Queue_1_Enqueue_m394873181_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::SetCapacity(System.Int32)
extern "C"  void Queue_1_SetCapacity_m1657524624_gshared (Queue_1_t281839975 * __this, int32_t ___new_size0, const MethodInfo* method);
#define Queue_1_SetCapacity_m1657524624(__this, ___new_size0, method) ((  void (*) (Queue_1_t281839975 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m1657524624_gshared)(__this, ___new_size0, method)
// System.Int32 System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m486606872_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m486606872(__this, method) ((  int32_t (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_get_Count_m486606872_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>::GetEnumerator()
extern "C"  Enumerator_t1570925487  Queue_1_GetEnumerator_m2806460022_gshared (Queue_1_t281839975 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m2806460022(__this, method) ((  Enumerator_t1570925487  (*) (Queue_1_t281839975 *, const MethodInfo*))Queue_1_GetEnumerator_m2806460022_gshared)(__this, method)
