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

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t4020418340;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1246329035;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2272995238;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "System_Configuration_System_Configuration_SectionG2963986668.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroupCollection__ctor_m2539860411 (ConfigurationSectionGroupCollection_t4020418340 * __this, Configuration_t710589292 * ___config0, SectionGroupInfo_t2963986668 * ___group1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C"  KeysCollection_t1246329035 * ConfigurationSectionGroupCollection_get_Keys_m1573863704 (ConfigurationSectionGroupCollection_t4020418340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C"  int32_t ConfigurationSectionGroupCollection_get_Count_m3734034513 (ConfigurationSectionGroupCollection_t4020418340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C"  ConfigurationSectionGroup_t2272995238 * ConfigurationSectionGroupCollection_get_Item_m2188411553 (ConfigurationSectionGroupCollection_t4020418340 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionGroupCollection_GetEnumerator_m2304591979 (ConfigurationSectionGroupCollection_t4020418340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionGroupCollection_GetObjectData_m1085667179 (ConfigurationSectionGroupCollection_t4020418340 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
