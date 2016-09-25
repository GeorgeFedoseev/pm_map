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

// System.Configuration.ProviderSettings
struct ProviderSettings_t1407873976;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "System_Configuration_System_Configuration_Configur1929345356.h"

// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C"  void ProviderSettings__ctor_m4285379927 (ProviderSettings_t1407873976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::.cctor()
extern "C"  void ProviderSettings__cctor_m3515662646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m3817369066 (ProviderSettings_t1407873976 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C"  bool ProviderSettings_IsModified_m2983729594 (ProviderSettings_t1407873976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ProviderSettings_Reset_m952816369 (ProviderSettings_t1407873976 * __this, ConfigurationElement_t3842833450 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ProviderSettings_Unmerge_m3458508855 (ProviderSettings_t1407873976 * __this, ConfigurationElement_t3842833450 * ___source0, ConfigurationElement_t3842833450 * ___parent1, int32_t ___updateMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Name()
extern "C"  String_t* ProviderSettings_get_Name_m2089129438 (ProviderSettings_t1407873976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Type()
extern "C"  String_t* ProviderSettings_get_Type_m2283158221 (ProviderSettings_t1407873976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ProviderSettings_get_Properties_m1762981772 (ProviderSettings_t1407873976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern "C"  NameValueCollection_t2791941106 * ProviderSettings_get_Parameters_m3338168344 (ProviderSettings_t1407873976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
