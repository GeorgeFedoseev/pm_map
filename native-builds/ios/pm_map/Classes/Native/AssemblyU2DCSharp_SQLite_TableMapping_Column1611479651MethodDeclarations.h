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

// SQLite.TableMapping/Column
struct Column_t1611479651;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<SQLite.IndexedAttribute>
struct IEnumerable_1_t4004778798;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725.h"
#include "AssemblyU2DCSharp_SQLite_CreateFlags971888045.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void SQLite.TableMapping/Column::.ctor(System.Reflection.PropertyInfo,SQLite.CreateFlags)
extern "C"  void Column__ctor_m400985324 (Column_t1611479651 * __this, PropertyInfo_t * ___prop0, int32_t ___createFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.TableMapping/Column::get_Name()
extern "C"  String_t* Column_get_Name_m4275526627 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_Name(System.String)
extern "C"  void Column_set_Name_m1086454286 (Column_t1611479651 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.TableMapping/Column::get_PropertyName()
extern "C"  String_t* Column_get_PropertyName_m774023960 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type SQLite.TableMapping/Column::get_ColumnType()
extern "C"  Type_t * Column_get_ColumnType_m3013796095 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_ColumnType(System.Type)
extern "C"  void Column_set_ColumnType_m2799865472 (Column_t1611479651 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.TableMapping/Column::get_Collation()
extern "C"  String_t* Column_get_Collation_m36981139 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_Collation(System.String)
extern "C"  void Column_set_Collation_m3803586464 (Column_t1611479651 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.TableMapping/Column::get_IsAutoInc()
extern "C"  bool Column_get_IsAutoInc_m4108305662 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_IsAutoInc(System.Boolean)
extern "C"  void Column_set_IsAutoInc_m1177520181 (Column_t1611479651 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.TableMapping/Column::get_IsAutoGuid()
extern "C"  bool Column_get_IsAutoGuid_m2752866699 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_IsAutoGuid(System.Boolean)
extern "C"  void Column_set_IsAutoGuid_m233485698 (Column_t1611479651 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.TableMapping/Column::get_IsPK()
extern "C"  bool Column_get_IsPK_m400586574 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_IsPK(System.Boolean)
extern "C"  void Column_set_IsPK_m1578910213 (Column_t1611479651 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SQLite.IndexedAttribute> SQLite.TableMapping/Column::get_Indices()
extern "C"  Il2CppObject* Column_get_Indices_m1337799931 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_Indices(System.Collections.Generic.IEnumerable`1<SQLite.IndexedAttribute>)
extern "C"  void Column_set_Indices_m3775350520 (Column_t1611479651 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SQLite.TableMapping/Column::get_IsNullable()
extern "C"  bool Column_get_IsNullable_m1499967956 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_IsNullable(System.Boolean)
extern "C"  void Column_set_IsNullable_m1630554635 (Column_t1611479651 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.TableMapping/Column::get_MaxStringLength()
extern "C"  int32_t Column_get_MaxStringLength_m3456111642 (Column_t1611479651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::set_MaxStringLength(System.Int32)
extern "C"  void Column_set_MaxStringLength_m3949005253 (Column_t1611479651 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SQLite.TableMapping/Column::SetValue(System.Object,System.Object)
extern "C"  void Column_SetValue_m3883560679 (Column_t1611479651 * __this, Il2CppObject * ___obj0, Il2CppObject * ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SQLite.TableMapping/Column::GetValue(System.Object)
extern "C"  Il2CppObject * Column_GetValue_m1853746680 (Column_t1611479651 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
