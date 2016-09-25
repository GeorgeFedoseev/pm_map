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

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t2750745740;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t4125473774;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t1837880752;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3260433748;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet4125473774.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs3260433748.h"

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaCollection__ctor_m1218368366 (XmlSchemaCollection_t2750745740 * __this, XmlNameTable_t1216706026 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchemaCollection__ctor_m717772417 (XmlSchemaCollection_t2750745740 * __this, XmlSchemaSet_t4125473774 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m2435524583 (XmlSchemaCollection_t2750745740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m146759330 (XmlSchemaCollection_t2750745740 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m832654286 (XmlSchemaCollection_t2750745740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m3765302123 (XmlSchemaCollection_t2750745740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m1719580346 (XmlSchemaCollection_t2750745740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C"  XmlSchemaSet_t4125473774 * XmlSchemaCollection_get_SchemaSet_m3650114568 (XmlSchemaCollection_t2750745740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C"  int32_t XmlSchemaCollection_get_Count_m1461156680 (XmlSchemaCollection_t2750745740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C"  XmlSchemaCollectionEnumerator_t1837880752 * XmlSchemaCollection_GetEnumerator_m4098478378 (XmlSchemaCollection_t2750745740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlSchemaCollection_OnValidationError_m1289440393 (XmlSchemaCollection_t2750745740 * __this, Il2CppObject * ___o0, ValidationEventArgs_t3260433748 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
