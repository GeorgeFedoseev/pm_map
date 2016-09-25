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

// System.Linq.SortSequenceContext`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>
struct SortSequenceContext_2_t3136622975;
// System.Func`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>
struct Func_2_t1710275477;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3728852542;
// System.Linq.SortContext`1<SQLite.SQLiteConnection/IndexedColumn>
struct SortContext_1_t356507329;
// SQLite.SQLiteConnection/IndexedColumn[]
struct IndexedColumnU5BU5D_t1356378509;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection313822039.h"

// System.Void System.Linq.SortSequenceContext`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m2677175849_gshared (SortSequenceContext_2_t3136622975 * __this, Func_2_t1710275477 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t356507329 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m2677175849(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t3136622975 *, Func_2_t1710275477 *, Il2CppObject*, int32_t, SortContext_1_t356507329 *, const MethodInfo*))SortSequenceContext_2__ctor_m2677175849_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m2835620589_gshared (SortSequenceContext_2_t3136622975 * __this, IndexedColumnU5BU5D_t1356378509* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m2835620589(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t3136622975 *, IndexedColumnU5BU5D_t1356378509*, const MethodInfo*))SortSequenceContext_2_Initialize_m2835620589_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<SQLite.SQLiteConnection/IndexedColumn,System.Int32>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m4205817496_gshared (SortSequenceContext_2_t3136622975 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m4205817496(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t3136622975 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m4205817496_gshared)(__this, ___first_index0, ___second_index1, method)
