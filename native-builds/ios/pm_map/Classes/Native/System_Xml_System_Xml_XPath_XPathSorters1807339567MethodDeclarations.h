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

// System.Xml.XPath.XPathSorters
struct XPathSorters_t1807339567;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Int32 System.Xml.XPath.XPathSorters::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C"  int32_t XPathSorters_System_Collections_IComparer_Compare_m247046298 (XPathSorters_t1807339567 * __this, Il2CppObject * ___o10, Il2CppObject * ___o21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t1327316739 * XPathSorters_Sort_m2612507910 (XPathSorters_t1807339567 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XPath.XPathSorters::ToSortElementList(System.Xml.XPath.BaseIterator)
extern "C"  ArrayList_t3948406897 * XPathSorters_ToSortElementList_m2931616076 (XPathSorters_t1807339567 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Collections.ArrayList,System.Xml.IXmlNamespaceResolver)
extern "C"  BaseIterator_t1327316739 * XPathSorters_Sort_m386310882 (XPathSorters_t1807339567 * __this, ArrayList_t3948406897 * ___rgElts0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
