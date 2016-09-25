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

// System.Configuration.IgnoreSection
struct IgnoreSection_t1685294889;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur1929345356.h"

// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C"  void IgnoreSection__ctor_m3497037480 (IgnoreSection_t1685294889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::.cctor()
extern "C"  void IgnoreSection__cctor_m551883269 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C"  bool IgnoreSection_IsModified_m2275408021 (IgnoreSection_t1685294889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void IgnoreSection_DeserializeSection_m3824773182 (IgnoreSection_t1685294889 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void IgnoreSection_Reset_m320202944 (IgnoreSection_t1685294889 * __this, ConfigurationElement_t3842833450 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C"  void IgnoreSection_ResetModified_m3415520766 (IgnoreSection_t1685294889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* IgnoreSection_SerializeSection_m289992698 (IgnoreSection_t1685294889 * __this, ConfigurationElement_t3842833450 * ___parentElement0, String_t* ___name1, int32_t ___saveMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * IgnoreSection_get_Properties_m2305331893 (IgnoreSection_t1685294889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
