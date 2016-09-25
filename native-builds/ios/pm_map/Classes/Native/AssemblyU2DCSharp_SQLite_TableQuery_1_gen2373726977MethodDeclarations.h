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

// SQLite.TableQuery`1<System.Object>
struct TableQuery_1_t2373726977;
// SQLite.SQLiteConnection
struct SQLiteConnection_t2649932624;
// SQLite.TableMapping
struct TableMapping_t2817029478;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Linq.Expressions.Expression`1<System.Func`2<System.Object,System.Boolean>>
struct Expression_1_t2101728800;
// System.Object
struct Il2CppObject;
// System.Linq.Expressions.Expression
struct Expression_t275615326;
// SQLite.SQLiteCommand
struct SQLiteCommand_t3677067489;
// System.String
struct String_t;
// SQLite.TableQuery`1/CompileResult<System.Object>
struct CompileResult_t3328293334;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;
// System.Type
struct Type_t;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t974710719;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1787714124;
// SQLite.BaseTableQuery/Ordering
struct Ordering_t4150661206;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection2649932624.h"
#include "AssemblyU2DCSharp_SQLite_TableMapping2817029478.h"
#include "System_Core_System_Linq_Expressions_Expression275615326.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Core_System_Linq_Expressions_BinaryExpressio974710719.h"
#include "AssemblyU2DCSharp_SQLite_BaseTableQuery_Ordering4150661206.h"

// System.Void SQLite.TableQuery`1<System.Object>::.ctor(SQLite.SQLiteConnection,SQLite.TableMapping)
extern "C"  void TableQuery_1__ctor_m821856676_gshared (TableQuery_1_t2373726977 * __this, SQLiteConnection_t2649932624 * ___conn0, TableMapping_t2817029478 * ___table1, const MethodInfo* method);
#define TableQuery_1__ctor_m821856676(__this, ___conn0, ___table1, method) ((  void (*) (TableQuery_1_t2373726977 *, SQLiteConnection_t2649932624 *, TableMapping_t2817029478 *, const MethodInfo*))TableQuery_1__ctor_m821856676_gshared)(__this, ___conn0, ___table1, method)
// System.Void SQLite.TableQuery`1<System.Object>::.ctor(SQLite.SQLiteConnection)
extern "C"  void TableQuery_1__ctor_m3309025658_gshared (TableQuery_1_t2373726977 * __this, SQLiteConnection_t2649932624 * ___conn0, const MethodInfo* method);
#define TableQuery_1__ctor_m3309025658(__this, ___conn0, method) ((  void (*) (TableQuery_1_t2373726977 *, SQLiteConnection_t2649932624 *, const MethodInfo*))TableQuery_1__ctor_m3309025658_gshared)(__this, ___conn0, method)
// System.Collections.IEnumerator SQLite.TableQuery`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * TableQuery_1_System_Collections_IEnumerable_GetEnumerator_m215757349_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_System_Collections_IEnumerable_GetEnumerator_m215757349(__this, method) ((  Il2CppObject * (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_System_Collections_IEnumerable_GetEnumerator_m215757349_gshared)(__this, method)
// SQLite.SQLiteConnection SQLite.TableQuery`1<System.Object>::get_Connection()
extern "C"  SQLiteConnection_t2649932624 * TableQuery_1_get_Connection_m2770712262_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_get_Connection_m2770712262(__this, method) ((  SQLiteConnection_t2649932624 * (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_get_Connection_m2770712262_gshared)(__this, method)
// System.Void SQLite.TableQuery`1<System.Object>::set_Connection(SQLite.SQLiteConnection)
extern "C"  void TableQuery_1_set_Connection_m970594579_gshared (TableQuery_1_t2373726977 * __this, SQLiteConnection_t2649932624 * ___value0, const MethodInfo* method);
#define TableQuery_1_set_Connection_m970594579(__this, ___value0, method) ((  void (*) (TableQuery_1_t2373726977 *, SQLiteConnection_t2649932624 *, const MethodInfo*))TableQuery_1_set_Connection_m970594579_gshared)(__this, ___value0, method)
// SQLite.TableMapping SQLite.TableQuery`1<System.Object>::get_Table()
extern "C"  TableMapping_t2817029478 * TableQuery_1_get_Table_m3534948126_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_get_Table_m3534948126(__this, method) ((  TableMapping_t2817029478 * (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_get_Table_m3534948126_gshared)(__this, method)
// System.Void SQLite.TableQuery`1<System.Object>::set_Table(SQLite.TableMapping)
extern "C"  void TableQuery_1_set_Table_m3985442357_gshared (TableQuery_1_t2373726977 * __this, TableMapping_t2817029478 * ___value0, const MethodInfo* method);
#define TableQuery_1_set_Table_m3985442357(__this, ___value0, method) ((  void (*) (TableQuery_1_t2373726977 *, TableMapping_t2817029478 *, const MethodInfo*))TableQuery_1_set_Table_m3985442357_gshared)(__this, ___value0, method)
// SQLite.TableQuery`1<T> SQLite.TableQuery`1<System.Object>::Where(System.Linq.Expressions.Expression`1<System.Func`2<T,System.Boolean>>)
extern "C"  TableQuery_1_t2373726977 * TableQuery_1_Where_m843057356_gshared (TableQuery_1_t2373726977 * __this, Expression_1_t2101728800 * ___predExpr0, const MethodInfo* method);
#define TableQuery_1_Where_m843057356(__this, ___predExpr0, method) ((  TableQuery_1_t2373726977 * (*) (TableQuery_1_t2373726977 *, Expression_1_t2101728800 *, const MethodInfo*))TableQuery_1_Where_m843057356_gshared)(__this, ___predExpr0, method)
// SQLite.TableQuery`1<T> SQLite.TableQuery`1<System.Object>::Take(System.Int32)
extern "C"  TableQuery_1_t2373726977 * TableQuery_1_Take_m2108939060_gshared (TableQuery_1_t2373726977 * __this, int32_t ___n0, const MethodInfo* method);
#define TableQuery_1_Take_m2108939060(__this, ___n0, method) ((  TableQuery_1_t2373726977 * (*) (TableQuery_1_t2373726977 *, int32_t, const MethodInfo*))TableQuery_1_Take_m2108939060_gshared)(__this, ___n0, method)
// SQLite.TableQuery`1<T> SQLite.TableQuery`1<System.Object>::Skip(System.Int32)
extern "C"  TableQuery_1_t2373726977 * TableQuery_1_Skip_m4178475564_gshared (TableQuery_1_t2373726977 * __this, int32_t ___n0, const MethodInfo* method);
#define TableQuery_1_Skip_m4178475564(__this, ___n0, method) ((  TableQuery_1_t2373726977 * (*) (TableQuery_1_t2373726977 *, int32_t, const MethodInfo*))TableQuery_1_Skip_m4178475564_gshared)(__this, ___n0, method)
// T SQLite.TableQuery`1<System.Object>::ElementAt(System.Int32)
extern "C"  Il2CppObject * TableQuery_1_ElementAt_m1989704043_gshared (TableQuery_1_t2373726977 * __this, int32_t ___index0, const MethodInfo* method);
#define TableQuery_1_ElementAt_m1989704043(__this, ___index0, method) ((  Il2CppObject * (*) (TableQuery_1_t2373726977 *, int32_t, const MethodInfo*))TableQuery_1_ElementAt_m1989704043_gshared)(__this, ___index0, method)
// SQLite.TableQuery`1<T> SQLite.TableQuery`1<System.Object>::Deferred()
extern "C"  TableQuery_1_t2373726977 * TableQuery_1_Deferred_m1698642491_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_Deferred_m1698642491(__this, method) ((  TableQuery_1_t2373726977 * (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_Deferred_m1698642491_gshared)(__this, method)
// System.Void SQLite.TableQuery`1<System.Object>::AddWhere(System.Linq.Expressions.Expression)
extern "C"  void TableQuery_1_AddWhere_m3817177604_gshared (TableQuery_1_t2373726977 * __this, Expression_t275615326 * ___pred0, const MethodInfo* method);
#define TableQuery_1_AddWhere_m3817177604(__this, ___pred0, method) ((  void (*) (TableQuery_1_t2373726977 *, Expression_t275615326 *, const MethodInfo*))TableQuery_1_AddWhere_m3817177604_gshared)(__this, ___pred0, method)
// SQLite.SQLiteCommand SQLite.TableQuery`1<System.Object>::GenerateCommand(System.String)
extern "C"  SQLiteCommand_t3677067489 * TableQuery_1_GenerateCommand_m3928145122_gshared (TableQuery_1_t2373726977 * __this, String_t* ___selectionList0, const MethodInfo* method);
#define TableQuery_1_GenerateCommand_m3928145122(__this, ___selectionList0, method) ((  SQLiteCommand_t3677067489 * (*) (TableQuery_1_t2373726977 *, String_t*, const MethodInfo*))TableQuery_1_GenerateCommand_m3928145122_gshared)(__this, ___selectionList0, method)
// SQLite.TableQuery`1/CompileResult<T> SQLite.TableQuery`1<System.Object>::CompileExpr(System.Linq.Expressions.Expression,System.Collections.Generic.List`1<System.Object>)
extern "C"  CompileResult_t3328293334 * TableQuery_1_CompileExpr_m3205030421_gshared (TableQuery_1_t2373726977 * __this, Expression_t275615326 * ___expr0, List_1_t1244034627 * ___queryArgs1, const MethodInfo* method);
#define TableQuery_1_CompileExpr_m3205030421(__this, ___expr0, ___queryArgs1, method) ((  CompileResult_t3328293334 * (*) (TableQuery_1_t2373726977 *, Expression_t275615326 *, List_1_t1244034627 *, const MethodInfo*))TableQuery_1_CompileExpr_m3205030421_gshared)(__this, ___expr0, ___queryArgs1, method)
// System.Object SQLite.TableQuery`1<System.Object>::ConvertTo(System.Object,System.Type)
extern "C"  Il2CppObject * TableQuery_1_ConvertTo_m3608507780_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___t1, const MethodInfo* method);
#define TableQuery_1_ConvertTo_m3608507780(__this /* static, unused */, ___obj0, ___t1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Type_t *, const MethodInfo*))TableQuery_1_ConvertTo_m3608507780_gshared)(__this /* static, unused */, ___obj0, ___t1, method)
// System.String SQLite.TableQuery`1<System.Object>::CompileNullBinaryExpression(System.Linq.Expressions.BinaryExpression,SQLite.TableQuery`1/CompileResult<T>)
extern "C"  String_t* TableQuery_1_CompileNullBinaryExpression_m1481023663_gshared (TableQuery_1_t2373726977 * __this, BinaryExpression_t974710719 * ___expression0, CompileResult_t3328293334 * ___parameter1, const MethodInfo* method);
#define TableQuery_1_CompileNullBinaryExpression_m1481023663(__this, ___expression0, ___parameter1, method) ((  String_t* (*) (TableQuery_1_t2373726977 *, BinaryExpression_t974710719 *, CompileResult_t3328293334 *, const MethodInfo*))TableQuery_1_CompileNullBinaryExpression_m1481023663_gshared)(__this, ___expression0, ___parameter1, method)
// System.String SQLite.TableQuery`1<System.Object>::GetSqlName(System.Linq.Expressions.Expression)
extern "C"  String_t* TableQuery_1_GetSqlName_m3966948772_gshared (TableQuery_1_t2373726977 * __this, Expression_t275615326 * ___expr0, const MethodInfo* method);
#define TableQuery_1_GetSqlName_m3966948772(__this, ___expr0, method) ((  String_t* (*) (TableQuery_1_t2373726977 *, Expression_t275615326 *, const MethodInfo*))TableQuery_1_GetSqlName_m3966948772_gshared)(__this, ___expr0, method)
// System.Int32 SQLite.TableQuery`1<System.Object>::Count()
extern "C"  int32_t TableQuery_1_Count_m1969020651_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_Count_m1969020651(__this, method) ((  int32_t (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_Count_m1969020651_gshared)(__this, method)
// System.Int32 SQLite.TableQuery`1<System.Object>::Count(System.Linq.Expressions.Expression`1<System.Func`2<T,System.Boolean>>)
extern "C"  int32_t TableQuery_1_Count_m1260761486_gshared (TableQuery_1_t2373726977 * __this, Expression_1_t2101728800 * ___predExpr0, const MethodInfo* method);
#define TableQuery_1_Count_m1260761486(__this, ___predExpr0, method) ((  int32_t (*) (TableQuery_1_t2373726977 *, Expression_1_t2101728800 *, const MethodInfo*))TableQuery_1_Count_m1260761486_gshared)(__this, ___predExpr0, method)
// System.Collections.Generic.IEnumerator`1<T> SQLite.TableQuery`1<System.Object>::GetEnumerator()
extern "C"  Il2CppObject* TableQuery_1_GetEnumerator_m2679329800_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_GetEnumerator_m2679329800(__this, method) ((  Il2CppObject* (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_GetEnumerator_m2679329800_gshared)(__this, method)
// T SQLite.TableQuery`1<System.Object>::First()
extern "C"  Il2CppObject * TableQuery_1_First_m2260424251_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_First_m2260424251(__this, method) ((  Il2CppObject * (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_First_m2260424251_gshared)(__this, method)
// T SQLite.TableQuery`1<System.Object>::FirstOrDefault()
extern "C"  Il2CppObject * TableQuery_1_FirstOrDefault_m1245997125_gshared (TableQuery_1_t2373726977 * __this, const MethodInfo* method);
#define TableQuery_1_FirstOrDefault_m1245997125(__this, method) ((  Il2CppObject * (*) (TableQuery_1_t2373726977 *, const MethodInfo*))TableQuery_1_FirstOrDefault_m1245997125_gshared)(__this, method)
// System.String SQLite.TableQuery`1<System.Object>::<GenerateCommand>m__6C(SQLite.BaseTableQuery/Ordering)
extern "C"  String_t* TableQuery_1_U3CGenerateCommandU3Em__6C_m2225188603_gshared (Il2CppObject * __this /* static, unused */, Ordering_t4150661206 * ___o0, const MethodInfo* method);
#define TableQuery_1_U3CGenerateCommandU3Em__6C_m2225188603(__this /* static, unused */, ___o0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, Ordering_t4150661206 *, const MethodInfo*))TableQuery_1_U3CGenerateCommandU3Em__6C_m2225188603_gshared)(__this /* static, unused */, ___o0, method)
// System.String SQLite.TableQuery`1<System.Object>::<CompileExpr>m__6D(SQLite.TableQuery`1/CompileResult<T>)
extern "C"  String_t* TableQuery_1_U3CCompileExprU3Em__6D_m7075244_gshared (Il2CppObject * __this /* static, unused */, CompileResult_t3328293334 * ___a0, const MethodInfo* method);
#define TableQuery_1_U3CCompileExprU3Em__6D_m7075244(__this /* static, unused */, ___a0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, CompileResult_t3328293334 *, const MethodInfo*))TableQuery_1_U3CCompileExprU3Em__6D_m7075244_gshared)(__this /* static, unused */, ___a0, method)
