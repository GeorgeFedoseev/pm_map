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

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t3335049818;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C"  void HttpCachePolicyElement__cctor_m4083926043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * HttpCachePolicyElement_get_Properties_m1493540609 (HttpCachePolicyElement_t3335049818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void HttpCachePolicyElement_DeserializeElement_m4077588722 (HttpCachePolicyElement_t3335049818 * __this, XmlReader_t4123196108 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void HttpCachePolicyElement_Reset_m3678817494 (HttpCachePolicyElement_t3335049818 * __this, ConfigurationElement_t3842833450 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
