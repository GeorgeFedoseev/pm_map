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

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2703580109;
// System.Configuration.ElementInformation
struct ElementInformation_t891176276;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t677452661;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3009015393;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1978119848;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "System_Configuration_System_Configuration_Property2703580109.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3009015393.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "System_Configuration_System_Configuration_Configur1929345356.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C"  void ConfigurationElement__ctor_m3730513869 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C"  Configuration_t710589292 * ConfigurationElement_get_Configuration_m1316584128 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C"  void ConfigurationElement_set_Configuration_m857039325 (ConfigurationElement_t3842833450 * __this, Configuration_t710589292 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElement_InitFromProperty_m2203023118 (ConfigurationElement_t3842833450 * __this, PropertyInformation_t2703580109 * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C"  ElementInformation_t891176276 * ConfigurationElement_get_ElementInformation_m4113648876 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C"  String_t* ConfigurationElement_get_RawXml_m3970578068 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C"  void ConfigurationElement_set_RawXml_m109833751 (ConfigurationElement_t3842833450 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C"  void ConfigurationElement_Init_m1720483855 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C"  ConfigurationLockCollection_t677452661 * ConfigurationElement_get_LockAllAttributesExcept_m2414336519 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C"  ConfigurationLockCollection_t677452661 * ConfigurationElement_get_LockAllElementsExcept_m3498886951 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C"  ConfigurationLockCollection_t677452661 * ConfigurationElement_get_LockAttributes_m2630006979 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C"  ConfigurationLockCollection_t677452661 * ConfigurationElement_get_LockElements_m606566179 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C"  void ConfigurationElement_set_LockItem_m1659220049 (ConfigurationElement_t3842833450 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C"  void ConfigurationElement_SetPropertyValue_m4010493258 (ConfigurationElement_t3842833450 * __this, ConfigurationProperty_t3009015393 * ___prop0, Il2CppObject * ___value1, bool ___ignoreLocks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ConfigurationElement_GetKeyProperties_m2426273982 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C"  ConfigurationElementCollection_t1978119848 * ConfigurationElement_GetDefaultCollection_m2655648688 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m2616928522 (ConfigurationElement_t3842833450 * __this, ConfigurationProperty_t3009015393 * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C"  void ConfigurationElement_set_Item_m3293325985 (ConfigurationElement_t3842833450 * __this, ConfigurationProperty_t3009015393 * ___property0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m966435172 (ConfigurationElement_t3842833450 * __this, String_t* ___property_name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C"  void ConfigurationElement_set_Item_m207464521 (ConfigurationElement_t3842833450 * __this, String_t* ___property_name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ConfigurationElement_get_Properties_m1602766206 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C"  bool ConfigurationElement_Equals_m4009897148 (ConfigurationElement_t3842833450 * __this, Il2CppObject * ___compareTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C"  int32_t ConfigurationElement_GetHashCode_m3384464916 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C"  bool ConfigurationElement_HasValues_m2077527173 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C"  bool ConfigurationElement_HasLocalModifications_m1860323983 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void ConfigurationElement_DeserializeElement_m526511341 (ConfigurationElement_t3842833450 * __this, XmlReader_t4123196108 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m1006639416 (ConfigurationElement_t3842833450 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedElement_m3859474854 (ConfigurationElement_t3842833450 * __this, String_t* ___element0, XmlReader_t4123196108 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C"  Il2CppObject * ConfigurationElement_OnRequiredPropertyNotFound_m2624097014 (ConfigurationElement_t3842833450 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C"  void ConfigurationElement_PreSerialize_m1216817032 (ConfigurationElement_t3842833450 * __this, XmlWriter_t4278601340 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C"  void ConfigurationElement_PostDeserialize_m4269718378 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C"  void ConfigurationElement_InitializeDefault_m838875156 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C"  bool ConfigurationElement_IsModified_m903236908 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C"  void ConfigurationElement_SetReadOnly_m1427536167 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C"  bool ConfigurationElement_IsReadOnly_m3380673157 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElement_Reset_m3054563939 (ConfigurationElement_t3842833450 * __this, ConfigurationElement_t3842833450 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C"  void ConfigurationElement_ResetModified_m666869755 (ConfigurationElement_t3842833450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElement_SerializeElement_m3532590780 (ConfigurationElement_t3842833450 * __this, XmlWriter_t4278601340 * ___writer0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C"  bool ConfigurationElement_SerializeToXmlElement_m432706353 (ConfigurationElement_t3842833450 * __this, XmlWriter_t4278601340 * ___writer0, String_t* ___elementName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElement_Unmerge_m3329480837 (ConfigurationElement_t3842833450 * __this, ConfigurationElement_t3842833450 * ___source0, ConfigurationElement_t3842833450 * ___parent1, int32_t ___updateMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C"  bool ConfigurationElement_HasValue_m560998898 (ConfigurationElement_t3842833450 * __this, String_t* ___propName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C"  void ConfigurationElement_ValidateValue_m4188540262 (ConfigurationElement_t3842833450 * __this, ConfigurationProperty_t3009015393 * ___p0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
