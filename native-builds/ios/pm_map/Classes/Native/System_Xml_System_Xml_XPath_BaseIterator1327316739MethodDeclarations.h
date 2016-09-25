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

// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.BaseIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void BaseIterator__ctor_m3181771313 (BaseIterator_t1327316739 * __this, BaseIterator_t1327316739 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.BaseIterator::.ctor(System.Xml.IXmlNamespaceResolver)
extern "C"  void BaseIterator__ctor_m3826808382 (BaseIterator_t1327316739 * __this, Il2CppObject * ___nsm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::get_NamespaceManager()
extern "C"  Il2CppObject * BaseIterator_get_NamespaceManager_m3653702256 (BaseIterator_t1327316739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.BaseIterator::get_ReverseAxis()
extern "C"  bool BaseIterator_get_ReverseAxis_m3412652795 (BaseIterator_t1327316739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.BaseIterator::get_ComparablePosition()
extern "C"  int32_t BaseIterator_get_ComparablePosition_m1201108051 (BaseIterator_t1327316739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition()
extern "C"  int32_t BaseIterator_get_CurrentPosition_m4192865460 (BaseIterator_t1327316739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.BaseIterator::SetPosition(System.Int32)
extern "C"  void BaseIterator_SetPosition_m2844760437 (BaseIterator_t1327316739 * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.BaseIterator::MoveNext()
extern "C"  bool BaseIterator_MoveNext_m2848019493 (BaseIterator_t1327316739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.BaseIterator::PeekNext()
extern "C"  XPathNavigator_t1075073278 * BaseIterator_PeekNext_m2233508421 (BaseIterator_t1327316739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.BaseIterator::ToString()
extern "C"  String_t* BaseIterator_ToString_m2981263858 (BaseIterator_t1327316739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
