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

// SQLite.TableMapping
struct TableMapping_t2817029478;
// System.Type
struct Type_t;
// System.String
struct String_t;
// SQLite.TableMapping/Column[]
struct ColumnU5BU5D_t1660000434;
// SQLite.TableMapping/Column
struct Column_t1611479651;
// System.Object
struct Il2CppObject;
// SQLite.PreparedSqlLiteInsertCommand
struct PreparedSqlLiteInsertCommand_t1604881465;
// SQLite.SQLiteConnection
struct SQLiteConnection_t2649932624;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "AssemblyU2DCSharp_SQLite_CreateFlags971888045.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_SQLite_TableMapping_Column1611479651.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection2649932624.h"

// System.Void SQLite.TableMapping::.ctor(System.Type,SQLite.CreateFlags)
extern "C"  void TableMapping__ctor_m1499215981 (TableMapping_t2817029478 * __this, Type_t * ___type0, int32_t ___createFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type SQLite.TableMapping::get_MappedType()
extern "C"  Type_t * TableMapping_get_MappedType_m805330423 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::set_MappedType(System.Type)
extern "C"  void TableMapping_set_MappedType_m1598144276 (TableMapping_t2817029478 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.TableMapping::get_TableName()
extern "C"  String_t* TableMapping_get_TableName_m4119392122 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::set_TableName(System.String)
extern "C"  void TableMapping_set_TableName_m2799976959 (TableMapping_t2817029478 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.TableMapping/Column[] SQLite.TableMapping::get_Columns()
extern "C"  ColumnU5BU5D_t1660000434* TableMapping_get_Columns_m1865020243 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::set_Columns(SQLite.TableMapping/Column[])
extern "C"  void TableMapping_set_Columns_m590931490 (TableMapping_t2817029478 * __this, ColumnU5BU5D_t1660000434* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.TableMapping/Column SQLite.TableMapping::get_PK()
extern "C"  Column_t1611479651 * TableMapping_get_PK_m440796389 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::set_PK(SQLite.TableMapping/Column)
extern "C"  void TableMapping_set_PK_m4224040464 (TableMapping_t2817029478 * __this, Column_t1611479651 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.TableMapping::get_GetByPrimaryKeySql()
extern "C"  String_t* TableMapping_get_GetByPrimaryKeySql_m2760154373 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::set_GetByPrimaryKeySql(System.String)
extern "C"  void TableMapping_set_GetByPrimaryKeySql_m1426244550 (TableMapping_t2817029478 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.TableMapping::get_HasAutoIncPK()
extern "C"  bool TableMapping_get_HasAutoIncPK_m2671046272 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::set_HasAutoIncPK(System.Boolean)
extern "C"  void TableMapping_set_HasAutoIncPK_m2002741407 (TableMapping_t2817029478 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::SetAutoIncPK(System.Object,System.Int64)
extern "C"  void TableMapping_SetAutoIncPK_m3153620839 (TableMapping_t2817029478 * __this, Il2CppObject * ___obj0, int64_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.TableMapping/Column[] SQLite.TableMapping::get_InsertColumns()
extern "C"  ColumnU5BU5D_t1660000434* TableMapping_get_InsertColumns_m3958994138 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.TableMapping/Column[] SQLite.TableMapping::get_InsertOrReplaceColumns()
extern "C"  ColumnU5BU5D_t1660000434* TableMapping_get_InsertOrReplaceColumns_m868812177 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.TableMapping/Column SQLite.TableMapping::FindColumnWithPropertyName(System.String)
extern "C"  Column_t1611479651 * TableMapping_FindColumnWithPropertyName_m1833536268 (TableMapping_t2817029478 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.TableMapping/Column SQLite.TableMapping::FindColumn(System.String)
extern "C"  Column_t1611479651 * TableMapping_FindColumn_m528499666 (TableMapping_t2817029478 * __this, String_t* ___columnName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.PreparedSqlLiteInsertCommand SQLite.TableMapping::GetInsertCommand(SQLite.SQLiteConnection,System.String)
extern "C"  PreparedSqlLiteInsertCommand_t1604881465 * TableMapping_GetInsertCommand_m2801309993 (TableMapping_t2817029478 * __this, SQLiteConnection_t2649932624 * ___conn0, String_t* ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.PreparedSqlLiteInsertCommand SQLite.TableMapping::CreateInsertCommand(SQLite.SQLiteConnection,System.String)
extern "C"  PreparedSqlLiteInsertCommand_t1604881465 * TableMapping_CreateInsertCommand_m2918017543 (TableMapping_t2817029478 * __this, SQLiteConnection_t2649932624 * ___conn0, String_t* ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping::Dispose()
extern "C"  void TableMapping_Dispose_m100809702 (TableMapping_t2817029478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.TableMapping::<get_InsertColumns>m__6A(SQLite.TableMapping/Column)
extern "C"  bool TableMapping_U3Cget_InsertColumnsU3Em__6A_m801667485 (Il2CppObject * __this /* static, unused */, Column_t1611479651 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.TableMapping::<CreateInsertCommand>m__6D(SQLite.TableMapping/Column)
extern "C"  String_t* TableMapping_U3CCreateInsertCommandU3Em__6D_m3933305868 (Il2CppObject * __this /* static, unused */, Column_t1611479651 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.TableMapping::<CreateInsertCommand>m__6E(SQLite.TableMapping/Column)
extern "C"  String_t* TableMapping_U3CCreateInsertCommandU3Em__6E_m331440269 (Il2CppObject * __this /* static, unused */, Column_t1611479651 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
