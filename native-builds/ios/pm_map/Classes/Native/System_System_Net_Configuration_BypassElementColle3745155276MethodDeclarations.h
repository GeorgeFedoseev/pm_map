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

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t3745155276;
// System.Net.Configuration.BypassElement
struct BypassElement_t231441678;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_BypassElement231441678.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern "C"  void BypassElementCollection__ctor_m2163389170 (BypassElementCollection_t3745155276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.Int32)
extern "C"  BypassElement_t231441678 * BypassElementCollection_get_Item_m2687841650 (BypassElementCollection_t3745155276 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.Int32,System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_set_Item_m744998151 (BypassElementCollection_t3745155276 * __this, int32_t ___index0, BypassElement_t231441678 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.String)
extern "C"  BypassElement_t231441678 * BypassElementCollection_get_Item_m2175410945 (BypassElementCollection_t3745155276 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.String,System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_set_Item_m41969978 (BypassElementCollection_t3745155276 * __this, String_t* ___name0, BypassElement_t231441678 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.BypassElementCollection::get_ThrowOnDuplicate()
extern "C"  bool BypassElementCollection_get_ThrowOnDuplicate_m3400494551 (BypassElementCollection_t3745155276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Add(System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_Add_m2914482821 (BypassElementCollection_t3745155276 * __this, BypassElement_t231441678 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Clear()
extern "C"  void BypassElementCollection_Clear_m3864489757 (BypassElementCollection_t3745155276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.BypassElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * BypassElementCollection_CreateNewElement_m1472145216 (BypassElementCollection_t3745155276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.BypassElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * BypassElementCollection_GetElementKey_m1980950209 (BypassElementCollection_t3745155276 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.BypassElementCollection::IndexOf(System.Net.Configuration.BypassElement)
extern "C"  int32_t BypassElementCollection_IndexOf_m3944222333 (BypassElementCollection_t3745155276 * __this, BypassElement_t231441678 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_Remove_m1512689130 (BypassElementCollection_t3745155276 * __this, BypassElement_t231441678 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.String)
extern "C"  void BypassElementCollection_Remove_m324009836 (BypassElementCollection_t3745155276 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::RemoveAt(System.Int32)
extern "C"  void BypassElementCollection_RemoveAt_m1335212410 (BypassElementCollection_t3745155276 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
