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

// Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer
struct Serializer_t2432693297;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Collections.IList
struct IList_t1751339649;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m1287235162 (Serializer_t2432693297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m2667260025 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m318771929 (Serializer_t2432693297 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m4244866416 (Serializer_t2432693297 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m2918901876 (Serializer_t2432693297 * __this, Il2CppObject * ___anArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m1695709209 (Serializer_t2432693297 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.ThirdParty.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m1488671578 (Serializer_t2432693297 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
