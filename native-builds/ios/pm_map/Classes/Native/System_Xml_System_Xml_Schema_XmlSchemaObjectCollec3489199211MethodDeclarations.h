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

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.XmlSchemaObjectEnumerator
struct XmlSchemaObjectEnumerator_t14884241;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor()
extern "C"  void XmlSchemaObjectCollection__ctor_m3644427619 (XmlSchemaObjectCollection_t3489199211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectCollection__ctor_m3361792943 (XmlSchemaObjectCollection_t3489199211 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectCollection::get_Item(System.Int32)
extern "C"  XmlSchemaObject_t3280570797 * XmlSchemaObjectCollection_get_Item_m886097275 (XmlSchemaObjectCollection_t3489199211 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectCollection::Add(System.Xml.Schema.XmlSchemaObject)
extern "C"  int32_t XmlSchemaObjectCollection_Add_m2084724462 (XmlSchemaObjectCollection_t3489199211 * __this, XmlSchemaObject_t3280570797 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectCollection::Contains(System.Xml.Schema.XmlSchemaObject)
extern "C"  bool XmlSchemaObjectCollection_Contains_m1970009306 (XmlSchemaObjectCollection_t3489199211 * __this, XmlSchemaObject_t3280570797 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectEnumerator System.Xml.Schema.XmlSchemaObjectCollection::GetEnumerator()
extern "C"  XmlSchemaObjectEnumerator_t14884241 * XmlSchemaObjectCollection_GetEnumerator_m3792827626 (XmlSchemaObjectCollection_t3489199211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnClear()
extern "C"  void XmlSchemaObjectCollection_OnClear_m3737053871 (XmlSchemaObjectCollection_t3489199211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnInsert(System.Int32,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnInsert_m97119256 (XmlSchemaObjectCollection_t3489199211 * __this, int32_t ___index0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnRemove(System.Int32,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnRemove_m4132229987 (XmlSchemaObjectCollection_t3489199211 * __this, int32_t ___index0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnSet(System.Int32,System.Object,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnSet_m2707355313 (XmlSchemaObjectCollection_t3489199211 * __this, int32_t ___index0, Il2CppObject * ___oldValue1, Il2CppObject * ___newValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
