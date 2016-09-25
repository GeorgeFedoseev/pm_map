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

// System.Reflection.Emit.DerivedType
struct DerivedType_t2038755629;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2567562023;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3896472559;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2824366364;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t4286713048;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4136801618;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t2079826215;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.Reflection.Module
struct Module_t1394482686;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Reflection_TypeAttributes1370933187.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"

// System.Void System.Reflection.Emit.DerivedType::.ctor(System.Type)
extern "C"  void DerivedType__ctor_m2151730247 (DerivedType_t2038755629 * __this, Type_t * ___elementType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)
extern "C"  void DerivedType_create_unmanaged_type_m2314863475 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.DerivedType::GetInterfaces()
extern "C"  TypeU5BU5D_t3339007067* DerivedType_GetInterfaces_m2341185576 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::GetElementType()
extern "C"  Type_t * DerivedType_GetElementType_m3972882188 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.DerivedType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * DerivedType_GetEvent_m1455460899 (DerivedType_t2038755629 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.DerivedType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * DerivedType_GetField_m1258528291 (DerivedType_t2038755629 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.DerivedType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t2567562023* DerivedType_GetFields_m2571177388 (DerivedType_t2038755629 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DerivedType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * DerivedType_GetMethodImpl_m3831541272 (DerivedType_t2038755629 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.DerivedType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2824366364* DerivedType_GetMethods_m144137694 (DerivedType_t2038755629 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.DerivedType::GetProperties(System.Reflection.BindingFlags)
extern "C"  PropertyInfoU5BU5D_t4286713048* DerivedType_GetProperties_m1138411857 (DerivedType_t2038755629 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.DerivedType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * DerivedType_GetPropertyImpl_m2285367829 (DerivedType_t2038755629 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.DerivedType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t4136801618 * DerivedType_GetConstructorImpl_m854653258 (DerivedType_t2038755629 * __this, int32_t ___bindingAttr0, Binder_t1074302268 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t3339007067* ___types3, ParameterModifierU5BU5D_t3896472559* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.DerivedType::GetAttributeFlagsImpl()
extern "C"  int32_t DerivedType_GetAttributeFlagsImpl_m1287185819 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::HasElementTypeImpl()
extern "C"  bool DerivedType_HasElementTypeImpl_m1373316336 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsArrayImpl()
extern "C"  bool DerivedType_IsArrayImpl_m4138090845 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsByRefImpl()
extern "C"  bool DerivedType_IsByRefImpl_m1668118912 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPointerImpl()
extern "C"  bool DerivedType_IsPointerImpl_m835779969 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPrimitiveImpl()
extern "C"  bool DerivedType_IsPrimitiveImpl_m2894544875 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.DerivedType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t2079826215* DerivedType_GetConstructors_m699314604 (DerivedType_t2038755629 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DerivedType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * DerivedType_InvokeMember_m2695910471 (DerivedType_t2038755629 * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t1108656482* ___args4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, CultureInfo_t1065375142 * ___culture6, StringU5BU5D_t4054002952* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsInstanceOfType(System.Object)
extern "C"  bool DerivedType_IsInstanceOfType_m2487806608 (DerivedType_t2038755629 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsAssignableFrom(System.Type)
extern "C"  bool DerivedType_IsAssignableFrom_m713635112 (DerivedType_t2038755629 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::get_ContainsGenericParameters()
extern "C"  bool DerivedType_get_ContainsGenericParameters_m2173538983 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeGenericType(System.Type[])
extern "C"  Type_t * DerivedType_MakeGenericType_m3705455454 (DerivedType_t2038755629 * __this, TypeU5BU5D_t3339007067* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeByRefType()
extern "C"  Type_t * DerivedType_MakeByRefType_m1894284926 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::ToString()
extern "C"  String_t* DerivedType_ToString_m888495265 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.DerivedType::get_Assembly()
extern "C"  Assembly_t1418687608 * DerivedType_get_Assembly_m1584566050 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_AssemblyQualifiedName()
extern "C"  String_t* DerivedType_get_AssemblyQualifiedName_m1387368997 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_FullName()
extern "C"  String_t* DerivedType_get_FullName_m2024958712 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Name()
extern "C"  String_t* DerivedType_get_Name_m1526770185 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DerivedType::get_Module()
extern "C"  Module_t1394482686 * DerivedType_get_Module_m1872511778 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Namespace()
extern "C"  String_t* DerivedType_get_Namespace_m2857766015 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.DerivedType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2669177232  DerivedType_get_TypeHandle_m1080433997 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::get_UnderlyingSystemType()
extern "C"  Type_t * DerivedType_get_UnderlyingSystemType_m1568542971 (DerivedType_t2038755629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsDefined(System.Type,System.Boolean)
extern "C"  bool DerivedType_IsDefined_m166944945 (DerivedType_t2038755629 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* DerivedType_GetCustomAttributes_m4090757682 (DerivedType_t2038755629 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* DerivedType_GetCustomAttributes_m873619231 (DerivedType_t2038755629 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
