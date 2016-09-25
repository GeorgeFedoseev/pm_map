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

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_t2991917843;
// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t2236605461;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_ConnectionManageme2236605461.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern "C"  void ConnectionManagementElementCollection__ctor_m2893689035 (ConnectionManagementElementCollection_t2991917843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.Int32)
extern "C"  ConnectionManagementElement_t2236605461 * ConnectionManagementElementCollection_get_Item_m1783444434 (ConnectionManagementElementCollection_t2991917843 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.Int32,System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_set_Item_m1444687545 (ConnectionManagementElementCollection_t2991917843 * __this, int32_t ___index0, ConnectionManagementElement_t2236605461 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.String)
extern "C"  ConnectionManagementElement_t2236605461 * ConnectionManagementElementCollection_get_Item_m4203868321 (ConnectionManagementElementCollection_t2991917843 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.String,System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_set_Item_m3455641114 (ConnectionManagementElementCollection_t2991917843 * __this, String_t* ___name0, ConnectionManagementElement_t2236605461 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Add(System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_Add_m3460842487 (ConnectionManagementElementCollection_t2991917843 * __this, ConnectionManagementElement_t2236605461 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Clear()
extern "C"  void ConnectionManagementElementCollection_Clear_m299822326 (ConnectionManagementElementCollection_t2991917843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.ConnectionManagementElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * ConnectionManagementElementCollection_CreateNewElement_m729033031 (ConnectionManagementElementCollection_t2991917843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.ConnectionManagementElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * ConnectionManagementElementCollection_GetElementKey_m1601337672 (ConnectionManagementElementCollection_t2991917843 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElementCollection::IndexOf(System.Net.Configuration.ConnectionManagementElement)
extern "C"  int32_t ConnectionManagementElementCollection_IndexOf_m397714799 (ConnectionManagementElementCollection_t2991917843 * __this, ConnectionManagementElement_t2236605461 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_Remove_m553567434 (ConnectionManagementElementCollection_t2991917843 * __this, ConnectionManagementElement_t2236605461 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.String)
extern "C"  void ConnectionManagementElementCollection_Remove_m1417006469 (ConnectionManagementElementCollection_t2991917843 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::RemoveAt(System.Int32)
extern "C"  void ConnectionManagementElementCollection_RemoveAt_m858369665 (ConnectionManagementElementCollection_t2991917843 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
