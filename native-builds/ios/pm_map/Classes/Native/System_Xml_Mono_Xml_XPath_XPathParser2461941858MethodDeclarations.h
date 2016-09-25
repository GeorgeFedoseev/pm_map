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

// Mono.Xml.XPath.XPathParser
struct XPathParser_t2461941858;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t2968841889;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Xml.XPath.NodeSet
struct NodeSet_t2875795446;
// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.XPath.NodeTest
struct NodeTest_t2939071960;
// Mono.Xml.XPath.yyParser.yyInput
struct yyInput_t4166894996;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XPath_Axes2202774217.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void Mono.Xml.XPath.XPathParser::.ctor(System.Xml.Xsl.IStaticXsltContext)
extern "C"  void XPathParser__ctor_m2662166670 (XPathParser_t2461941858 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.XPathParser::.cctor()
extern "C"  void XPathParser__cctor_m2653475089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression Mono.Xml.XPath.XPathParser::Compile(System.String)
extern "C"  Expression_t2556460284 * XPathParser_Compile_m3447021097 (XPathParser_t2461941858 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.NodeSet Mono.Xml.XPath.XPathParser::CreateNodeTest(System.Xml.XPath.Axes,System.Object,System.Collections.ArrayList)
extern "C"  NodeSet_t2875795446 * XPathParser_CreateNodeTest_m3475400515 (XPathParser_t2461941858 * __this, int32_t ___axis0, Il2CppObject * ___nodeTest1, ArrayList_t3948406897 * ___plist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.NodeTest Mono.Xml.XPath.XPathParser::CreateNodeTest(System.Xml.XPath.Axes,System.Object)
extern "C"  NodeTest_t2939071960 * XPathParser_CreateNodeTest_m3760966820 (XPathParser_t2461941858 * __this, int32_t ___axis0, Il2CppObject * ___test1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.XPathParser::yyname(System.Int32)
extern "C"  String_t* XPathParser_yyname_m3001501735 (Il2CppObject * __this /* static, unused */, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.XPath.XPathParser::yyDefault(System.Object)
extern "C"  Il2CppObject * XPathParser_yyDefault_m772388494 (XPathParser_t2461941858 * __this, Il2CppObject * ___first0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.XPath.XPathParser::yyparse(Mono.Xml.XPath.yyParser.yyInput)
extern "C"  Il2CppObject * XPathParser_yyparse_m3024144012 (XPathParser_t2461941858 * __this, Il2CppObject * ___yyLex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
