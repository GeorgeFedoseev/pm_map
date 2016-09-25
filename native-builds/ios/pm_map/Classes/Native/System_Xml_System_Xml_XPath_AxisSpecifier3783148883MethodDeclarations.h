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

// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t3783148883;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Axes2202774217.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType3637370479.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.AxisSpecifier::.ctor(System.Xml.XPath.Axes)
extern "C"  void AxisSpecifier__ctor_m223823863 (AxisSpecifier_t3783148883 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XPath.AxisSpecifier::get_NodeType()
extern "C"  int32_t AxisSpecifier_get_NodeType_m3352025689 (AxisSpecifier_t3783148883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.AxisSpecifier::ToString()
extern "C"  String_t* AxisSpecifier_ToString_m2798584292 (AxisSpecifier_t3783148883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Axes System.Xml.XPath.AxisSpecifier::get_Axis()
extern "C"  int32_t AxisSpecifier_get_Axis_m269195078 (AxisSpecifier_t3783148883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisSpecifier::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t1327316739 * AxisSpecifier_Evaluate_m3457862801 (AxisSpecifier_t3783148883 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
