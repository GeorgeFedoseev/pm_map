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

// System.Xml.XmlWriter
struct XmlWriter_t4278601340;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2911908785 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m3193799822 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m4143028872 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m767449337 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m1200530597 (XmlWriter_t4278601340 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m1597931729 (XmlWriter_t4278601340 * __this, XmlReader_t4123196108 * ___reader0, bool ___defattr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1129629501 (XmlWriter_t4278601340 * __this, String_t* ___localName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1630990645 (XmlWriter_t4278601340 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C"  void XmlWriter_WriteElementString_m764708381 (XmlWriter_t4278601340 * __this, String_t* ___localName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteNode_m817874929 (XmlWriter_t4278601340 * __this, XmlReader_t4123196108 * ___reader0, bool ___defattr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m4138955962 (XmlWriter_t4278601340 * __this, String_t* ___localName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
