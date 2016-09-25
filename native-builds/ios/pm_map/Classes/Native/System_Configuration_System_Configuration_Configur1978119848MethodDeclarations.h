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

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1978119848;
// System.Array
struct Il2CppArray;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2703580109;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "System_Configuration_System_Configuration_Property2703580109.h"
#include "System_Configuration_System_Configuration_Configur3906163842.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_Configur1929345356.h"

// System.Void System.Configuration.ConfigurationElementCollection::.ctor()
extern "C"  void ConfigurationElementCollection__ctor_m809219663 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationElementCollection_System_Collections_ICollection_CopyTo_m2026796285 (ConfigurationElementCollection_t1978119848 * __this, Il2CppArray * ___arr0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElementCollection_InitFromProperty_m2973741900 (ConfigurationElementCollection_t1978119848 * __this, PropertyInformation_t2703580109 * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType()
extern "C"  int32_t ConfigurationElementCollection_get_CollectionType_m3907688000 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsBasic()
extern "C"  bool ConfigurationElementCollection_get_IsBasic_m396734246 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsAlternate()
extern "C"  bool ConfigurationElementCollection_get_IsAlternate_m3565987058 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::get_Count()
extern "C"  int32_t ConfigurationElementCollection_get_Count_m1800701483 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ElementName()
extern "C"  String_t* ConfigurationElementCollection_get_ElementName_m648817958 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::set_EmitClear(System.Boolean)
extern "C"  void ConfigurationElementCollection_set_EmitClear_m1190085785 (ConfigurationElementCollection_t1978119848 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsSynchronized()
extern "C"  bool ConfigurationElementCollection_get_IsSynchronized_m2211260350 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElementCollection::get_SyncRoot()
extern "C"  Il2CppObject * ConfigurationElementCollection_get_SyncRoot_m3909638798 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern "C"  bool ConfigurationElementCollection_get_ThrowOnDuplicate_m3707634118 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_AddElementName()
extern "C"  String_t* ConfigurationElementCollection_get_AddElementName_m362058953 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ClearElementName()
extern "C"  String_t* ConfigurationElementCollection_get_ClearElementName_m1238939165 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_RemoveElementName()
extern "C"  String_t* ConfigurationElementCollection_get_RemoveElementName_m186987650 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElementCollection_BaseAdd_m1011464128 (ConfigurationElementCollection_t1978119848 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement,System.Boolean)
extern "C"  void ConfigurationElementCollection_BaseAdd_m114828221 (ConfigurationElementCollection_t1978119848 * __this, ConfigurationElement_t3842833450 * ___element0, bool ___throwIfExists1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseClear()
extern "C"  void ConfigurationElementCollection_BaseClear_m2068107369 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Int32)
extern "C"  ConfigurationElement_t3842833450 * ConfigurationElementCollection_BaseGet_m1672882929 (ConfigurationElementCollection_t1978119848 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Object)
extern "C"  ConfigurationElement_t3842833450 * ConfigurationElementCollection_BaseGet_m998572020 (ConfigurationElementCollection_t1978119848 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::BaseIndexOf(System.Configuration.ConfigurationElement)
extern "C"  int32_t ConfigurationElementCollection_BaseIndexOf_m1659199296 (ConfigurationElementCollection_t1978119848 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::IndexOfKey(System.Object)
extern "C"  int32_t ConfigurationElementCollection_IndexOfKey_m4063813857 (ConfigurationElementCollection_t1978119848 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemove(System.Object)
extern "C"  void ConfigurationElementCollection_BaseRemove_m3810545226 (ConfigurationElementCollection_t1978119848 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemoveAt(System.Int32)
extern "C"  void ConfigurationElementCollection_BaseRemoveAt_m3748140718 (ConfigurationElementCollection_t1978119848 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::CompareKeys(System.Object,System.Object)
extern "C"  bool ConfigurationElementCollection_CompareKeys_m3462479870 (ConfigurationElementCollection_t1978119848 * __this, Il2CppObject * ___key10, Il2CppObject * ___key21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String)
extern "C"  ConfigurationElement_t3842833450 * ConfigurationElementCollection_CreateNewElement_m3336796387 (ConfigurationElementCollection_t1978119848 * __this, String_t* ___elementName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElementInternal(System.String)
extern "C"  ConfigurationElement_t3842833450 * ConfigurationElementCollection_CreateNewElementInternal_m4026283622 (ConfigurationElementCollection_t1978119848 * __this, String_t* ___elementName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::Equals(System.Object)
extern "C"  bool ConfigurationElementCollection_Equals_m2301927998 (ConfigurationElementCollection_t1978119848 * __this, Il2CppObject * ___compareTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::GetHashCode()
extern "C"  int32_t ConfigurationElementCollection_GetHashCode_m731886870 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationElementCollection_GetEnumerator_m269474257 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String)
extern "C"  bool ConfigurationElementCollection_IsElementName_m3074962682 (ConfigurationElementCollection_t1978119848 * __this, String_t* ___elementName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement)
extern "C"  bool ConfigurationElementCollection_IsElementRemovable_m361522197 (ConfigurationElementCollection_t1978119848 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsModified()
extern "C"  bool ConfigurationElementCollection_IsModified_m3355131242 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly()
extern "C"  bool ConfigurationElementCollection_IsReadOnly_m1537600195 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::HasValues()
extern "C"  bool ConfigurationElementCollection_HasValues_m2572262535 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElementCollection_Reset_m4048929825 (ConfigurationElementCollection_t1978119848 * __this, ConfigurationElement_t3842833450 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::ResetModified()
extern "C"  void ConfigurationElementCollection_ResetModified_m4024772221 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::SetReadOnly()
extern "C"  void ConfigurationElementCollection_SetReadOnly_m2526001193 (ConfigurationElementCollection_t1978119848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElementCollection_SerializeElement_m2772106302 (ConfigurationElementCollection_t1978119848 * __this, XmlWriter_t4278601340 * ___writer0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElementCollection_OnDeserializeUnrecognizedElement_m2658797540 (ConfigurationElementCollection_t1978119848 * __this, String_t* ___elementName0, XmlReader_t4123196108 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElementCollection_Unmerge_m2616647943 (ConfigurationElementCollection_t1978119848 * __this, ConfigurationElement_t3842833450 * ___sourceElement0, ConfigurationElement_t3842833450 * ___parentElement1, int32_t ___updateMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
