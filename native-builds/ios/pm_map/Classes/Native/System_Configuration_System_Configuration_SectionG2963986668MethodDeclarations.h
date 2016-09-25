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

// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Configuration.ConfigInfo
struct ConfigInfo_t1047989972;
// System.String
struct String_t;
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t2269248722;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_ConfigIn1047989972.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_SectionG2963986668.h"

// System.Void System.Configuration.SectionGroupInfo::.ctor()
extern "C"  void SectionGroupInfo__ctor_m2470046371 (SectionGroupInfo_t2963986668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::.cctor()
extern "C"  void SectionGroupInfo__cctor_m3074897258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::AddChild(System.Configuration.ConfigInfo)
extern "C"  void SectionGroupInfo_AddChild_m2927386703 (SectionGroupInfo_t2963986668 * __this, ConfigInfo_t1047989972 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Clear()
extern "C"  void SectionGroupInfo_Clear_m4171146958 (SectionGroupInfo_t2963986668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.SectionGroupInfo::HasChild(System.String)
extern "C"  bool SectionGroupInfo_HasChild_m2713069285 (SectionGroupInfo_t2963986668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::RemoveChild(System.String)
extern "C"  void SectionGroupInfo_RemoveChild_m417673961 (SectionGroupInfo_t2963986668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Sections()
extern "C"  ConfigInfoCollection_t2269248722 * SectionGroupInfo_get_Sections_m3000712586 (SectionGroupInfo_t2963986668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Groups()
extern "C"  ConfigInfoCollection_t2269248722 * SectionGroupInfo_get_Groups_m3722453616 (SectionGroupInfo_t2963986668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionGroupInfo_ReadConfig_m2543479948 (SectionGroupInfo_t2963986668 * __this, Configuration_t710589292 * ___cfg0, String_t* ___streamName1, XmlReader_t4123196108 * ___reader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRemoveSection(System.Xml.XmlReader)
extern "C"  void SectionGroupInfo_ReadRemoveSection_m56977608 (SectionGroupInfo_t2963986668 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRootData(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean)
extern "C"  void SectionGroupInfo_ReadRootData_m2458070005 (SectionGroupInfo_t2963986668 * __this, XmlReader_t4123196108 * ___reader0, Configuration_t710589292 * ___config1, bool ___overrideAllowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionGroupInfo_ReadData_m4146866845 (SectionGroupInfo_t2963986668 * __this, Configuration_t710589292 * ___config0, XmlReader_t4123196108 * ___reader1, bool ___overrideAllowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadContent(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean,System.Boolean)
extern "C"  void SectionGroupInfo_ReadContent_m1170104743 (SectionGroupInfo_t2963986668 * __this, XmlReader_t4123196108 * ___reader0, Configuration_t710589292 * ___config1, bool ___overrideAllowed2, bool ___root3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.SectionGroupInfo::GetConfigInfo(System.Xml.XmlReader,System.Configuration.SectionGroupInfo)
extern "C"  ConfigInfo_t1047989972 * SectionGroupInfo_GetConfigInfo_m2104472220 (SectionGroupInfo_t2963986668 * __this, XmlReader_t4123196108 * ___reader0, SectionGroupInfo_t2963986668 * ___current1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionGroupInfo_Merge_m3667616562 (SectionGroupInfo_t2963986668 * __this, ConfigInfo_t1047989972 * ___newData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
