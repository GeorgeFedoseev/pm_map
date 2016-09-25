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

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1911555921;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1246329035;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3180944403;
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

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionCollection__ctor_m3417541132 (ConfigurationSectionCollection_t1911555921 * __this, Configuration_t710589292 * ___config0, SectionGroupInfo_t2963986668 * ___group1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C"  KeysCollection_t1246329035 * ConfigurationSectionCollection_get_Keys_m4007738911 (ConfigurationSectionCollection_t1911555921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C"  int32_t ConfigurationSectionCollection_get_Count_m2797096994 (ConfigurationSectionCollection_t1911555921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C"  ConfigurationSection_t3180944403 * ConfigurationSectionCollection_get_Item_m1663858613 (ConfigurationSectionCollection_t1911555921 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionCollection_GetEnumerator_m116552048 (ConfigurationSectionCollection_t1911555921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionCollection_GetObjectData_m1708760124 (ConfigurationSectionCollection_t1911555921 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
