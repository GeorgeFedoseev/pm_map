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

// System.Linq.OrderedSequence`2<System.Object,System.Int32>
struct OrderedSequence_2_t3382100078;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3176762032;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t1462553450;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3728852542;
// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t2607138388;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t3120299472;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m1175215065_gshared (OrderedSequence_2_t3382100078 * __this, Il2CppObject* ___source0, Func_2_t1462553450 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m1175215065(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t3382100078 *, Il2CppObject*, Func_2_t1462553450 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m1175215065_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Void System.Linq.OrderedSequence`2<System.Object,System.Int32>::.ctor(System.Linq.OrderedEnumerable`1<TElement>,System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m505810526_gshared (OrderedSequence_2_t3382100078 * __this, OrderedEnumerable_1_t2607138388 * ___parent0, Il2CppObject* ___source1, Func_2_t1462553450 * ___keySelector2, Il2CppObject* ___comparer3, int32_t ___direction4, const MethodInfo* method);
#define OrderedSequence_2__ctor_m505810526(__this, ___parent0, ___source1, ___keySelector2, ___comparer3, ___direction4, method) ((  void (*) (OrderedSequence_2_t3382100078 *, OrderedEnumerable_1_t2607138388 *, Il2CppObject*, Func_2_t1462553450 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m505810526_gshared)(__this, ___parent0, ___source1, ___keySelector2, ___comparer3, ___direction4, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t3120299472 * OrderedSequence_2_CreateContext_m1322519273_gshared (OrderedSequence_2_t3382100078 * __this, SortContext_1_t3120299472 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m1322519273(__this, ___current0, method) ((  SortContext_1_t3120299472 * (*) (OrderedSequence_2_t3382100078 *, SortContext_1_t3120299472 *, const MethodInfo*))OrderedSequence_2_CreateContext_m1322519273_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m2503037792_gshared (OrderedSequence_2_t3382100078 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m2503037792(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t3382100078 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m2503037792_gshared)(__this, ___source0, method)
