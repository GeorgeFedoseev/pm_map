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

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t4281214715;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t1000417341;
// System.String
struct String_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t3487699904;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Provider3487699904.h"

// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C"  void ProtectedConfigurationProviderCollection__ctor_m2297663604 (ProtectedConfigurationProviderCollection_t4281214715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern "C"  ProtectedConfigurationProvider_t1000417341 * ProtectedConfigurationProviderCollection_get_Item_m40970297 (ProtectedConfigurationProviderCollection_t4281214715 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C"  void ProtectedConfigurationProviderCollection_Add_m4012533931 (ProtectedConfigurationProviderCollection_t4281214715 * __this, ProviderBase_t3487699904 * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
