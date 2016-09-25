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

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t2683512459;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2703580109;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Property2703580109.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern "C"  void PropertyInformationCollection__ctor_m112722822 (PropertyInformationCollection_t2683512459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern "C"  PropertyInformation_t2703580109 * PropertyInformationCollection_get_Item_m3430369369 (PropertyInformationCollection_t2683512459 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern "C"  Il2CppObject * PropertyInformationCollection_GetEnumerator_m941901092 (PropertyInformationCollection_t2683512459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformationCollection_Add_m3035181765 (PropertyInformationCollection_t2683512459 * __this, PropertyInformation_t2703580109 * ___pi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void PropertyInformationCollection_GetObjectData_m3034333220 (PropertyInformationCollection_t2683512459 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
