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

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3180944403;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t662769942;
// System.Configuration.SectionInformation
struct SectionInformation_t3122661835;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Type
struct Type_t;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "System_Configuration_System_Configuration_Configur1929345356.h"

// System.Void System.Configuration.ConfigurationSection::.ctor()
extern "C"  void ConfigurationSection__ctor_m2065798660 (ConfigurationSection_t3180944403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::get_SectionHandler()
extern "C"  Il2CppObject * ConfigurationSection_get_SectionHandler_m368337580 (ConfigurationSection_t3180944403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_SectionHandler(System.Configuration.IConfigurationSectionHandler)
extern "C"  void ConfigurationSection_set_SectionHandler_m3080816639 (ConfigurationSection_t3180944403 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::get_SectionInformation()
extern "C"  SectionInformation_t3122661835 * ConfigurationSection_get_SectionInformation_m3047761731 (ConfigurationSection_t3180944403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::get_ConfigContext()
extern "C"  Il2CppObject * ConfigurationSection_get_ConfigContext_m2489230739 (ConfigurationSection_t3180944403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_ConfigContext(System.Object)
extern "C"  void ConfigurationSection_set_ConfigContext_m3295928170 (ConfigurationSection_t3180944403 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::GetRuntimeObject()
extern "C"  Il2CppObject * ConfigurationSection_GetRuntimeObject_m821684692 (ConfigurationSection_t3180944403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSection::IsModified()
extern "C"  bool ConfigurationSection_IsModified_m1585717589 (ConfigurationSection_t3180944403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::ResetModified()
extern "C"  void ConfigurationSection_ResetModified_m73658162 (ConfigurationSection_t3180944403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationSection::CreateElement(System.Type)
extern "C"  ConfigurationElement_t3842833450 * ConfigurationSection_CreateElement_m3314918985 (ConfigurationSection_t3180944403 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DoDeserializeSection(System.Xml.XmlReader)
extern "C"  void ConfigurationSection_DoDeserializeSection_m3324595573 (ConfigurationSection_t3180944403 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void ConfigurationSection_DeserializeSection_m2779853194 (ConfigurationSection_t3180944403 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeConfigSource(System.String)
extern "C"  void ConfigurationSection_DeserializeConfigSource_m2360362476 (ConfigurationSection_t3180944403 * __this, String_t* ___basePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* ConfigurationSection_SerializeSection_m3027059488 (ConfigurationSection_t3180944403 * __this, ConfigurationElement_t3842833450 * ___parentElement0, String_t* ___name1, int32_t ___saveMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
