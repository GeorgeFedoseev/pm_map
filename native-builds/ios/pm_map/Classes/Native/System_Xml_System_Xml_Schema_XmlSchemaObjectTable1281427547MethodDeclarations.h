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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"

// System.Void System.Xml.Schema.XmlSchemaObjectTable::.ctor()
extern "C"  void XmlSchemaObjectTable__ctor_m2197681143 (XmlSchemaObjectTable_t1281427547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable::get_Item(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaObject_t3280570797 * XmlSchemaObjectTable_get_Item_m2018580464 (XmlSchemaObjectTable_t1281427547 * __this, XmlQualifiedName_t2133315502 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Names()
extern "C"  Il2CppObject * XmlSchemaObjectTable_get_Names_m3698609970 (XmlSchemaObjectTable_t1281427547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Values()
extern "C"  Il2CppObject * XmlSchemaObjectTable_get_Values_m4031142362 (XmlSchemaObjectTable_t1281427547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectTable::Contains(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaObjectTable_Contains_m3591667064 (XmlSchemaObjectTable_t1281427547 * __this, XmlQualifiedName_t2133315502 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Xml.Schema.XmlSchemaObjectTable::GetEnumerator()
extern "C"  Il2CppObject * XmlSchemaObjectTable_GetEnumerator_m4054791657 (XmlSchemaObjectTable_t1281427547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Add(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectTable_Add_m1928555522 (XmlSchemaObjectTable_t1281427547 * __this, XmlQualifiedName_t2133315502 * ___name0, XmlSchemaObject_t3280570797 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Clear()
extern "C"  void XmlSchemaObjectTable_Clear_m3898781730 (XmlSchemaObjectTable_t1281427547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Set(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectTable_Set_m505066529 (XmlSchemaObjectTable_t1281427547 * __this, XmlQualifiedName_t2133315502 * ___name0, XmlSchemaObject_t3280570797 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
