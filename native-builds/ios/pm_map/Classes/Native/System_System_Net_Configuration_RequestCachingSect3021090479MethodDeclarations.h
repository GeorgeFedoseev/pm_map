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

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t3021090479;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"

// System.Void System.Net.Configuration.RequestCachingSection::.cctor()
extern "C"  void RequestCachingSection__cctor_m4200493790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * RequestCachingSection_get_Properties_m479701950 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
extern "C"  void RequestCachingSection_PostDeserialize_m437983180 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void RequestCachingSection_DeserializeElement_m4046974927 (RequestCachingSection_t3021090479 * __this, XmlReader_t4123196108 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
