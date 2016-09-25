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

// System.Configuration.DefaultSection
struct DefaultSection_t1277146536;
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

// System.Void System.Configuration.DefaultSection::.ctor()
extern "C"  void DefaultSection__ctor_m3355962663 (DefaultSection_t1277146536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::.cctor()
extern "C"  void DefaultSection__cctor_m473531238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void DefaultSection_DeserializeSection_m2013795743 (DefaultSection_t1277146536 * __this, XmlReader_t4123196108 * ___xmlReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C"  bool DefaultSection_IsModified_m2687275626 (DefaultSection_t1277146536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void DefaultSection_Reset_m638952737 (DefaultSection_t1277146536 * __this, ConfigurationElement_t3842833450 * ___parentSection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C"  void DefaultSection_ResetModified_m3940623741 (DefaultSection_t1277146536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* DefaultSection_SerializeSection_m2589391221 (DefaultSection_t1277146536 * __this, ConfigurationElement_t3842833450 * ___parentSection0, String_t* ___name1, int32_t ___saveMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * DefaultSection_get_Properties_m1817206396 (DefaultSection_t1277146536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
