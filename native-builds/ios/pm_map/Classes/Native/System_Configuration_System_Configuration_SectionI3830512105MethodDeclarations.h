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

// System.Configuration.SectionInfo
struct SectionInfo_t3830512105;
// System.Object
struct Il2CppObject;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Configuration.ConfigInfo
struct ConfigInfo_t1047989972;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_ConfigIn1047989972.h"

// System.Void System.Configuration.SectionInfo::.ctor()
extern "C"  void SectionInfo__ctor_m772573224 (SectionInfo_t3830512105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern "C"  Il2CppObject * SectionInfo_CreateInstance_m2554778498 (SectionInfo_t3830512105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionInfo_ReadConfig_m1839267793 (SectionInfo_t3830512105 * __this, Configuration_t710589292 * ___cfg0, String_t* ___streamName1, XmlReader_t4123196108 * ___reader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionInfo_ReadData_m4262697656 (SectionInfo_t3830512105 * __this, Configuration_t710589292 * ___config0, XmlReader_t4123196108 * ___reader1, bool ___overrideAllowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionInfo_Merge_m3183891725 (SectionInfo_t3830512105 * __this, ConfigInfo_t1047989972 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
