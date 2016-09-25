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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t100867136;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1753450284;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3344846062;
// System.Object
struct Il2CppObject;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.EventArgs
struct EventArgs_t2540831021;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t809310961;
// System.ComponentModel.IComponent
struct IComponent_t813276512;
// System.ComponentModel.TypeInfo
struct TypeInfo_t1685774996;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C"  void TypeDescriptor__cctor_m3479835389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C"  AttributeCollection_t100867136 * TypeDescriptor_GetAttributes_m76214042 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C"  ArrayList_t3948406897 * TypeDescriptor_get_DefaultConverters_m2146028793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t1753450284 * TypeDescriptor_GetConverter_m3573588811 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C"  Type_t * TypeDescriptor_FindDefaultConverterType_m1892798521 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m1457495824 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4055800263* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C"  PropertyDescriptorCollection_t3344846062 * TypeDescriptor_GetProperties_m3966546541 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4055800263* ___attributes1, bool ___noCustomTypeDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C"  void TypeDescriptor_OnComponentDisposed_m3490261899 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C"  ComponentInfo_t809310961 * TypeDescriptor_GetComponentInfo_m2720622557 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___com0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C"  TypeInfo_t1685774996 * TypeDescriptor_GetTypeInfo_m3750021697 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C"  Type_t * TypeDescriptor_GetTypeFromName_m554158078 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, String_t* ___typeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
