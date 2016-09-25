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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t2617136693;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.Collections.IList
struct IList_t1751339649;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t100867136;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m215106805 (MemberDescriptor_t2617136693 * __this, String_t* ___name0, AttributeU5BU5D_t4055800263* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C"  AttributeU5BU5D_t4055800263* MemberDescriptor_get_AttributeArray_m1822558682 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void MemberDescriptor_FillAttributes_m3750608991 (MemberDescriptor_t2617136693 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C"  AttributeCollection_t100867136 * MemberDescriptor_get_Attributes_m2619082480 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C"  AttributeCollection_t100867136 * MemberDescriptor_CreateAttributeCollection_m3478700496 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C"  String_t* MemberDescriptor_get_Name_m2533170283 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C"  int32_t MemberDescriptor_GetHashCode_m337807439 (MemberDescriptor_t2617136693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C"  bool MemberDescriptor_Equals_m3292276459 (MemberDescriptor_t2617136693 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
