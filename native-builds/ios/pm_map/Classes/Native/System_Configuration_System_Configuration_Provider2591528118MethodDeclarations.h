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

// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t2591528118;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern "C"  void ProviderSettingsCollection__cctor_m623923060 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * ProviderSettingsCollection_CreateNewElement_m1675093261 (ProviderSettingsCollection_t2591528118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * ProviderSettingsCollection_GetElementKey_m2142455600 (ProviderSettingsCollection_t2591528118 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ProviderSettingsCollection_get_Properties_m1365446666 (ProviderSettingsCollection_t2591528118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
