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

// System.Linq.OrderedSequence`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>
struct OrderedSequence_2_t3629822105;
// System.Collections.Generic.IEnumerable`1<SQLite.SQLiteConnection/IndexedColumn>
struct IEnumerable_1_t412969889;
// System.Func`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>
struct Func_2_t1710275477;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3728852542;
// System.Linq.OrderedEnumerable`1<SQLite.SQLiteConnection/IndexedColumn>
struct OrderedEnumerable_1_t4138313541;
// System.Linq.SortContext`1<SQLite.SQLiteConnection/IndexedColumn>
struct SortContext_1_t356507329;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.OrderedSequence`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m1190991891_gshared (OrderedSequence_2_t3629822105 * __this, Il2CppObject* ___source0, Func_2_t1710275477 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m1190991891(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t3629822105 *, Il2CppObject*, Func_2_t1710275477 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m1190991891_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Void System.Linq.OrderedSequence`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>::.ctor(System.Linq.OrderedEnumerable`1<TElement>,System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m4047430168_gshared (OrderedSequence_2_t3629822105 * __this, OrderedEnumerable_1_t4138313541 * ___parent0, Il2CppObject* ___source1, Func_2_t1710275477 * ___keySelector2, Il2CppObject* ___comparer3, int32_t ___direction4, const MethodInfo* method);
#define OrderedSequence_2__ctor_m4047430168(__this, ___parent0, ___source1, ___keySelector2, ___comparer3, ___direction4, method) ((  void (*) (OrderedSequence_2_t3629822105 *, OrderedEnumerable_1_t4138313541 *, Il2CppObject*, Func_2_t1710275477 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m4047430168_gshared)(__this, ___parent0, ___source1, ___keySelector2, ___comparer3, ___direction4, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t356507329 * OrderedSequence_2_CreateContext_m1413597423_gshared (OrderedSequence_2_t3629822105 * __this, SortContext_1_t356507329 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m1413597423(__this, ___current0, method) ((  SortContext_1_t356507329 * (*) (OrderedSequence_2_t3629822105 *, SortContext_1_t356507329 *, const MethodInfo*))OrderedSequence_2_CreateContext_m1413597423_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m235999974_gshared (OrderedSequence_2_t3629822105 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m235999974(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t3629822105 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m235999974_gshared)(__this, ___source0, method)
