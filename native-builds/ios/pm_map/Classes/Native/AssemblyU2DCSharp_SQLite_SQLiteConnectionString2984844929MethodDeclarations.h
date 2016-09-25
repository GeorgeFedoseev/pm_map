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

// SQLite.SQLiteConnectionString
struct SQLiteConnectionString_t2984844929;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void SQLite.SQLiteConnectionString::.ctor(System.String,System.Boolean)
extern "C"  void SQLiteConnectionString__ctor_m1122117737 (SQLiteConnectionString_t2984844929 * __this, String_t* ___databasePath0, bool ___storeDateTimeAsTicks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteConnectionString::get_ConnectionString()
extern "C"  String_t* SQLiteConnectionString_get_ConnectionString_m4249911915 (SQLiteConnectionString_t2984844929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnectionString::set_ConnectionString(System.String)
extern "C"  void SQLiteConnectionString_set_ConnectionString_m1297971744 (SQLiteConnectionString_t2984844929 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLiteConnectionString::get_DatabasePath()
extern "C"  String_t* SQLiteConnectionString_get_DatabasePath_m68413276 (SQLiteConnectionString_t2984844929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnectionString::set_DatabasePath(System.String)
extern "C"  void SQLiteConnectionString_set_DatabasePath_m2196742479 (SQLiteConnectionString_t2984844929 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.SQLiteConnectionString::get_StoreDateTimeAsTicks()
extern "C"  bool SQLiteConnectionString_get_StoreDateTimeAsTicks_m1219271891 (SQLiteConnectionString_t2984844929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.SQLiteConnectionString::set_StoreDateTimeAsTicks(System.Boolean)
extern "C"  void SQLiteConnectionString_set_StoreDateTimeAsTicks_m1412739250 (SQLiteConnectionString_t2984844929 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
