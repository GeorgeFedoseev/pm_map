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

// System.Configuration.Configuration
struct Configuration_t710589292;
// System.String
struct String_t;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t1184887678;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t2740352572;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1755821458;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1970371071;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2272995238;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t4020418340;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1911555921;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3180944403;
// System.Configuration.SectionInfo
struct SectionInfo_t3830512105;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Internal1184887678.h"
#include "System_Configuration_System_Configuration_SectionI3830512105.h"
#include "System_Configuration_System_Configuration_SectionG2963986668.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C"  void Configuration__ctor_m1712686530 (Configuration_t710589292 * __this, Configuration_t710589292 * ___parent0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C"  void Configuration__ctor_m2511791728 (Configuration_t710589292 * __this, InternalConfigurationSystem_t1184887678 * ___system0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C"  Configuration_t710589292 * Configuration_FindLocationConfiguration_m2344389824 (Configuration_t710589292 * __this, String_t* ___relativePath0, Configuration_t710589292 * ___defaultConfiguration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C"  void Configuration_Init_m2756324488 (Configuration_t710589292 * __this, Il2CppObject * ___system0, String_t* ___configPath1, Configuration_t710589292 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C"  Configuration_t710589292 * Configuration_get_Parent_m4109634498 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C"  void Configuration_set_Parent_m1155432391 (Configuration_t710589292 * __this, Configuration_t710589292 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C"  Configuration_t710589292 * Configuration_GetParentWithFile_m3380709909 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C"  Il2CppObject * Configuration_get_ConfigHost_m418627631 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C"  String_t* Configuration_get_LocationConfigPath_m1991016359 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C"  String_t* Configuration_get_ConfigPath_m3982728530 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C"  String_t* Configuration_get_FilePath_m2064340620 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C"  bool Configuration_get_HasFile_m1182408778 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C"  ConfigurationLocationCollection_t1970371071 * Configuration_get_Locations_m4165667707 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C"  ConfigurationSectionGroup_t2272995238 * Configuration_get_RootSectionGroup_m3061559546 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t4020418340 * Configuration_get_SectionGroups_m614791579 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C"  ConfigurationSectionCollection_t1911555921 * Configuration_get_Sections_m2367917541 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C"  ConfigurationSection_t3180944403 * Configuration_GetSection_m598223879 (Configuration_t710589292 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C"  ConfigurationSection_t3180944403 * Configuration_GetSectionInstance_m1119437385 (Configuration_t710589292 * __this, SectionInfo_t3830512105 * ___config0, bool ___createDefaultInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C"  ConfigurationSectionGroup_t2272995238 * Configuration_GetSectionGroupInstance_m1836884865 (Configuration_t710589292 * __this, SectionGroupInfo_t2963986668 * ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C"  void Configuration_SetSectionXml_m435041335 (Configuration_t710589292 * __this, SectionInfo_t3830512105 * ___config0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C"  String_t* Configuration_GetSectionXml_m1601149676 (Configuration_t710589292 * __this, SectionInfo_t3830512105 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C"  bool Configuration_Load_m1257171115 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C"  void Configuration_ReadConfigFile_m126468843 (Configuration_t710589292 * __this, XmlReader_t4123196108 * ___reader0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C"  void Configuration_ReadData_m2502527842 (Configuration_t710589292 * __this, XmlReader_t4123196108 * ___reader0, bool ___allowOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void Configuration_ThrowException_m4045333224 (Configuration_t710589292 * __this, String_t* ___text0, XmlReader_t4123196108 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
