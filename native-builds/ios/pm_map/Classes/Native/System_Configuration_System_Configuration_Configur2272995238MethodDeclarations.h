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

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2272995238;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t4020418340;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1911555921;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "System_Configuration_System_Configuration_SectionG2963986668.h"

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C"  void ConfigurationSectionGroup__ctor_m3401480227 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C"  Configuration_t710589292 * ConfigurationSectionGroup_get_Config_m2807832724 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroup_Initialize_m816537495 (ConfigurationSectionGroup_t2272995238 * __this, Configuration_t710589292 * ___config0, SectionGroupInfo_t2963986668 * ___group1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t4020418340 * ConfigurationSectionGroup_get_SectionGroups_m2211329097 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C"  ConfigurationSectionCollection_t1911555921 * ConfigurationSectionGroup_get_Sections_m4068427591 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
