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

// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t2269248722;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Configuration.ConfigInfo
struct ConfigInfo_t1047989972;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_ConfigIn1047989972.h"

// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern "C"  void ConfigInfoCollection__ctor_m506266109 (ConfigInfoCollection_t2269248722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C"  Il2CppObject * ConfigInfoCollection_get_AllKeys_m3285532615 (ConfigInfoCollection_t2269248722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern "C"  ConfigInfo_t1047989972 * ConfigInfoCollection_get_Item_m4216236619 (ConfigInfoCollection_t2269248722 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C"  void ConfigInfoCollection_set_Item_m2642800112 (ConfigInfoCollection_t2269248722 * __this, String_t* ___name0, ConfigInfo_t1047989972 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C"  void ConfigInfoCollection_Add_m331693451 (ConfigInfoCollection_t2269248722 * __this, String_t* ___name0, ConfigInfo_t1047989972 * ___config1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C"  void ConfigInfoCollection_Clear_m2207366696 (ConfigInfoCollection_t2269248722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C"  void ConfigInfoCollection_Remove_m2504105783 (ConfigInfoCollection_t2269248722 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
