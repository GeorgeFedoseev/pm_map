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

// System.String
struct String_t;
// SQLite.TableMapping/Column
struct Column_t1611479651;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Generic.IEnumerable`1<SQLite.IndexedAttribute>
struct IEnumerable_1_t4004778798;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SQLite_TableMapping_Column1611479651.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725.h"

// System.String SQLite.Orm::SqlDecl(SQLite.TableMapping/Column,System.Boolean)
extern "C"  String_t* Orm_SqlDecl_m2361618778 (Il2CppObject * __this /* static, unused */, Column_t1611479651 * ___p0, bool ___storeDateTimeAsTicks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.Orm::SqlType(SQLite.TableMapping/Column,System.Boolean)
extern "C"  String_t* Orm_SqlType_m3882869962 (Il2CppObject * __this /* static, unused */, Column_t1611479651 * ___p0, bool ___storeDateTimeAsTicks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.Orm::IsPK(System.Reflection.MemberInfo)
extern "C"  bool Orm_IsPK_m1676111038 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.Orm::Collation(System.Reflection.MemberInfo)
extern "C"  String_t* Orm_Collation_m3292183371 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.Orm::IsAutoInc(System.Reflection.MemberInfo)
extern "C"  bool Orm_IsAutoInc_m3079746998 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SQLite.IndexedAttribute> SQLite.Orm::GetIndices(System.Reflection.MemberInfo)
extern "C"  Il2CppObject* Orm_GetIndices_m1177908911 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.Orm::MaxStringLength(System.Reflection.PropertyInfo)
extern "C"  int32_t Orm_MaxStringLength_m755257399 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
