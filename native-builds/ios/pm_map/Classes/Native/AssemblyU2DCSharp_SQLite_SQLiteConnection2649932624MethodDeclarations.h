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

// SQLite.SQLiteConnection
struct SQLiteConnection_t2649932624;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.IEnumerable`1<SQLite.TableMapping>
struct IEnumerable_1_t1822975139;
// SQLite.TableMapping
struct TableMapping_t2817029478;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<SQLite.SQLiteConnection/ColumnInfo>
struct List_1_t1356316759;
// SQLite.SQLiteCommand
struct SQLiteCommand_t3677067489;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3176762032;
// System.Object
struct Il2CppObject;
// System.Action
struct Action_t3771233898;
// System.Collections.IEnumerable
struct IEnumerable_t3464557803;
// SQLite.TableMapping/Column
struct Column_t1611479651;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteOpenFlags1858714483.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_Type2863145774.h"
#include "AssemblyU2DCSharp_SQLite_CreateFlags971888045.h"
#include "AssemblyU2DCSharp_SQLite_TableMapping2817029478.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Core_System_Action3771233898.h"
#include "AssemblyU2DCSharp_SQLite_TableMapping_Column1611479651.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection_IndexedC1407024228.h"

// System.Void SQLite.SQLiteConnection::.ctor(System.String,System.Boolean)
extern "C"  void SQLiteConnection__ctor_m831354618 (SQLiteConnection_t2649932624 * __this, String_t* ___databasePath0, bool ___storeDateTimeAsTicks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::.ctor(System.String,SQLite.SQLiteOpenFlags,System.Boolean)
extern "C"  void SQLiteConnection__ctor_m1778995625 (SQLiteConnection_t2649932624 * __this, String_t* ___databasePath0, int32_t ___openFlags1, bool ___storeDateTimeAsTicks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::.cctor()
extern "C"  void SQLiteConnection__cctor_m364316750 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLiteConnection::get_Handle()
extern "C"  IntPtr_t SQLiteConnection_get_Handle_m44564417 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::set_Handle(System.IntPtr)
extern "C"  void SQLiteConnection_set_Handle_m1433143818 (SQLiteConnection_t2649932624 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteConnection::get_DatabasePath()
extern "C"  String_t* SQLiteConnection_get_DatabasePath_m1150268011 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::set_DatabasePath(System.String)
extern "C"  void SQLiteConnection_set_DatabasePath_m3932348512 (SQLiteConnection_t2649932624 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.SQLiteConnection::get_TimeExecution()
extern "C"  bool SQLiteConnection_get_TimeExecution_m3186993203 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::set_TimeExecution(System.Boolean)
extern "C"  void SQLiteConnection_set_TimeExecution_m1502147266 (SQLiteConnection_t2649932624 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.SQLiteConnection::get_Trace()
extern "C"  bool SQLiteConnection_get_Trace_m4027271981 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::set_Trace(System.Boolean)
extern "C"  void SQLiteConnection_set_Trace_m2554114108 (SQLiteConnection_t2649932624 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.SQLiteConnection::get_StoreDateTimeAsTicks()
extern "C"  bool SQLiteConnection_get_StoreDateTimeAsTicks_m3644735522 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::set_StoreDateTimeAsTicks(System.Boolean)
extern "C"  void SQLiteConnection_set_StoreDateTimeAsTicks_m3923301569 (SQLiteConnection_t2649932624 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::EnableLoadExtension(System.Int32)
extern "C"  void SQLiteConnection_EnableLoadExtension_m2348854244 (SQLiteConnection_t2649932624 * __this, int32_t ___onoff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SQLite.SQLiteConnection::GetNullTerminatedUtf8(System.String)
extern "C"  ByteU5BU5D_t4260760469* SQLiteConnection_GetNullTerminatedUtf8_m697506666 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan SQLite.SQLiteConnection::get_BusyTimeout()
extern "C"  TimeSpan_t413522987  SQLiteConnection_get_BusyTimeout_m211409753 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::set_BusyTimeout(System.TimeSpan)
extern "C"  void SQLiteConnection_set_BusyTimeout_m201258292 (SQLiteConnection_t2649932624 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SQLite.TableMapping> SQLite.SQLiteConnection::get_TableMappings()
extern "C"  Il2CppObject* SQLiteConnection_get_TableMappings_m2820832405 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.TableMapping SQLite.SQLiteConnection::GetMapping(System.Type,SQLite.CreateFlags)
extern "C"  TableMapping_t2817029478 * SQLiteConnection_GetMapping_m1465756304 (SQLiteConnection_t2649932624 * __this, Type_t * ___type0, int32_t ___createFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::CreateTable(System.Type,SQLite.CreateFlags)
extern "C"  int32_t SQLiteConnection_CreateTable_m4196550177 (SQLiteConnection_t2649932624 * __this, Type_t * ___ty0, int32_t ___createFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::CreateIndex(System.String,System.String,System.String,System.Boolean)
extern "C"  int32_t SQLiteConnection_CreateIndex_m1480121444 (SQLiteConnection_t2649932624 * __this, String_t* ___indexName0, String_t* ___tableName1, String_t* ___columnName2, bool ___unique3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::CreateIndex(System.String,System.String,System.Boolean)
extern "C"  int32_t SQLiteConnection_CreateIndex_m1392479584 (SQLiteConnection_t2649932624 * __this, String_t* ___tableName0, String_t* ___columnName1, bool ___unique2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SQLite.SQLiteConnection/ColumnInfo> SQLite.SQLiteConnection::GetTableInfo(System.String)
extern "C"  List_1_t1356316759 * SQLiteConnection_GetTableInfo_m1466730161 (SQLiteConnection_t2649932624 * __this, String_t* ___tableName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::MigrateTable(SQLite.TableMapping)
extern "C"  void SQLiteConnection_MigrateTable_m909955112 (SQLiteConnection_t2649932624 * __this, TableMapping_t2817029478 * ___map0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLiteCommand SQLite.SQLiteConnection::NewCommand()
extern "C"  SQLiteCommand_t3677067489 * SQLiteConnection_NewCommand_m2011426896 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLiteCommand SQLite.SQLiteConnection::CreateCommand(System.String,System.Object[])
extern "C"  SQLiteCommand_t3677067489 * SQLiteConnection_CreateCommand_m1676441602 (SQLiteConnection_t2649932624 * __this, String_t* ___cmdText0, ObjectU5BU5D_t1108656482* ___ps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Execute(System.String,System.Object[])
extern "C"  int32_t SQLiteConnection_Execute_m2347888462 (SQLiteConnection_t2649932624 * __this, String_t* ___query0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> SQLite.SQLiteConnection::Query(SQLite.TableMapping,System.String,System.Object[])
extern "C"  List_1_t1244034627 * SQLiteConnection_Query_m3400705492 (SQLiteConnection_t2649932624 * __this, TableMapping_t2817029478 * ___map0, String_t* ___query1, ObjectU5BU5D_t1108656482* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> SQLite.SQLiteConnection::DeferredQuery(SQLite.TableMapping,System.String,System.Object[])
extern "C"  Il2CppObject* SQLiteConnection_DeferredQuery_m1886459304 (SQLiteConnection_t2649932624 * __this, TableMapping_t2817029478 * ___map0, String_t* ___query1, ObjectU5BU5D_t1108656482* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SQLite.SQLiteConnection::Find(System.Object,SQLite.TableMapping)
extern "C"  Il2CppObject * SQLiteConnection_Find_m3161479061 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___pk0, TableMapping_t2817029478 * ___map1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.SQLiteConnection::get_IsInTransaction()
extern "C"  bool SQLiteConnection_get_IsInTransaction_m2707078679 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::BeginTransaction()
extern "C"  void SQLiteConnection_BeginTransaction_m3968626010 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteConnection::SaveTransactionPoint()
extern "C"  String_t* SQLiteConnection_SaveTransactionPoint_m3881998033 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::Rollback()
extern "C"  void SQLiteConnection_Rollback_m3126149641 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::RollbackTo(System.String)
extern "C"  void SQLiteConnection_RollbackTo_m3533939102 (SQLiteConnection_t2649932624 * __this, String_t* ___savepoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::RollbackTo(System.String,System.Boolean)
extern "C"  void SQLiteConnection_RollbackTo_m852328991 (SQLiteConnection_t2649932624 * __this, String_t* ___savepoint0, bool ___noThrow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::Release(System.String)
extern "C"  void SQLiteConnection_Release_m2597666270 (SQLiteConnection_t2649932624 * __this, String_t* ___savepoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::DoSavePointExecute(System.String,System.String)
extern "C"  void SQLiteConnection_DoSavePointExecute_m1885720588 (SQLiteConnection_t2649932624 * __this, String_t* ___savepoint0, String_t* ___cmd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::Commit()
extern "C"  void SQLiteConnection_Commit_m648387740 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::RunInTransaction(System.Action)
extern "C"  void SQLiteConnection_RunInTransaction_m259419146 (SQLiteConnection_t2649932624 * __this, Action_t3771233898 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::InsertAll(System.Collections.IEnumerable)
extern "C"  int32_t SQLiteConnection_InsertAll_m3221145050 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___objects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::InsertAll(System.Collections.IEnumerable,System.String)
extern "C"  int32_t SQLiteConnection_InsertAll_m1502849174 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___objects0, String_t* ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::InsertAll(System.Collections.IEnumerable,System.Type)
extern "C"  int32_t SQLiteConnection_InsertAll_m235036173 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___objects0, Type_t * ___objType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Insert(System.Object)
extern "C"  int32_t SQLiteConnection_Insert_m2600414788 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::InsertOrReplace(System.Object)
extern "C"  int32_t SQLiteConnection_InsertOrReplace_m4278628849 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Insert(System.Object,System.Type)
extern "C"  int32_t SQLiteConnection_Insert_m1709668215 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, Type_t * ___objType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::InsertOrReplace(System.Object,System.Type)
extern "C"  int32_t SQLiteConnection_InsertOrReplace_m843964324 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, Type_t * ___objType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Insert(System.Object,System.String)
extern "C"  int32_t SQLiteConnection_Insert_m1285033856 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, String_t* ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Insert(System.Object,System.String,System.Type)
extern "C"  int32_t SQLiteConnection_Insert_m2196528819 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, String_t* ___extra1, Type_t * ___objType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Update(System.Object)
extern "C"  int32_t SQLiteConnection_Update_m1274205748 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Update(System.Object,System.Type)
extern "C"  int32_t SQLiteConnection_Update_m1450096487 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___obj0, Type_t * ___objType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::UpdateAll(System.Collections.IEnumerable)
extern "C"  int32_t SQLiteConnection_UpdateAll_m285152714 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___objects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::Delete(System.Object)
extern "C"  int32_t SQLiteConnection_Delete_m24176914 (SQLiteConnection_t2649932624 * __this, Il2CppObject * ___objectToDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::DeleteAll(System.String)
extern "C"  int32_t SQLiteConnection_DeleteAll_m3494841537 (SQLiteConnection_t2649932624 * __this, String_t* ___tableName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::Finalize()
extern "C"  void SQLiteConnection_Finalize_m1756543171 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::Dispose()
extern "C"  void SQLiteConnection_Dispose_m367281084 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::Dispose(System.Boolean)
extern "C"  void SQLiteConnection_Dispose_m1664860211 (SQLiteConnection_t2649932624 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnection::Close()
extern "C"  void SQLiteConnection_Close_m768331861 (SQLiteConnection_t2649932624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteConnection::<CreateTable>m__60(SQLite.TableMapping/Column)
extern "C"  String_t* SQLiteConnection_U3CCreateTableU3Em__60_m2086546142 (SQLiteConnection_t2649932624 * __this, Column_t1611479651 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteConnection::<CreateTable>m__61(SQLite.SQLiteConnection/IndexedColumn)
extern "C"  int32_t SQLiteConnection_U3CCreateTableU3Em__61_m3105247383 (Il2CppObject * __this /* static, unused */, IndexedColumn_t1407024228  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteConnection::<CreateTable>m__62(SQLite.SQLiteConnection/IndexedColumn)
extern "C"  String_t* SQLiteConnection_U3CCreateTableU3Em__62_m2281289291 (Il2CppObject * __this /* static, unused */, IndexedColumn_t1407024228  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteConnection::<Update>m__68(SQLite.TableMapping/Column)
extern "C"  String_t* SQLiteConnection_U3CUpdateU3Em__68_m2613899603 (Il2CppObject * __this /* static, unused */, Column_t1611479651 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
