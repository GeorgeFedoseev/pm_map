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

// SQLite.SQLiteCommand
struct SQLiteCommand_t3677067489;
// SQLite.SQLiteConnection
struct SQLiteConnection_t2649932624;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection2649932624.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_SQLite_SQLite3_ColType3329240688.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void SQLite.SQLiteCommand::.ctor(SQLite.SQLiteConnection)
extern "C"  void SQLiteCommand__ctor_m1198742664 (SQLiteCommand_t3677067489 * __this, SQLiteConnection_t2649932624 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::.cctor()
extern "C"  void SQLiteCommand__cctor_m2371372911 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteCommand::get_CommandText()
extern "C"  String_t* SQLiteCommand_get_CommandText_m723816392 (SQLiteCommand_t3677067489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::set_CommandText(System.String)
extern "C"  void SQLiteCommand_set_CommandText_m4050125067 (SQLiteCommand_t3677067489 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLiteCommand::ExecuteNonQuery()
extern "C"  int32_t SQLiteCommand_ExecuteNonQuery_m3398923806 (SQLiteCommand_t3677067489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::OnInstanceCreated(System.Object)
extern "C"  void SQLiteCommand_OnInstanceCreated_m1593513796 (SQLiteCommand_t3677067489 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::Bind(System.String,System.Object)
extern "C"  void SQLiteCommand_Bind_m3925002733 (SQLiteCommand_t3677067489 * __this, String_t* ___name0, Il2CppObject * ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::Bind(System.Object)
extern "C"  void SQLiteCommand_Bind_m3775853553 (SQLiteCommand_t3677067489 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteCommand::ToString()
extern "C"  String_t* SQLiteCommand_ToString_m3860479125 (SQLiteCommand_t3677067489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLiteCommand::Prepare()
extern "C"  IntPtr_t SQLiteCommand_Prepare_m954713998 (SQLiteCommand_t3677067489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::Finalize(System.IntPtr)
extern "C"  void SQLiteCommand_Finalize_m608598832 (SQLiteCommand_t3677067489 * __this, IntPtr_t ___stmt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::BindAll(System.IntPtr)
extern "C"  void SQLiteCommand_BindAll_m1303881428 (SQLiteCommand_t3677067489 * __this, IntPtr_t ___stmt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteCommand::BindParameter(System.IntPtr,System.Int32,System.Object,System.Boolean)
extern "C"  void SQLiteCommand_BindParameter_m2793018564 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, Il2CppObject * ___value2, bool ___storeDateTimeAsTicks3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SQLite.SQLiteCommand::ReadCol(System.IntPtr,System.Int32,SQLite.SQLite3/ColType,System.Type)
extern "C"  Il2CppObject * SQLiteCommand_ReadCol_m2101586869 (SQLiteCommand_t3677067489 * __this, IntPtr_t ___stmt0, int32_t ___index1, int32_t ___type2, Type_t * ___clrType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
