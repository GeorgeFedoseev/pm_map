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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Exception
struct Exception_t3991598821;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType944542020.h"

// System.Void System.Xml.Schema.ValidationHandler::RaiseValidationEvent(System.Xml.Schema.ValidationEventHandler,System.Exception,System.String,System.Xml.Schema.XmlSchemaObject,System.Object,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationHandler_RaiseValidationEvent_m959099307 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t4231404781 * ___handle0, Exception_t3991598821 * ___innerException1, String_t* ___message2, XmlSchemaObject_t3280570797 * ___xsobj3, Il2CppObject * ___sender4, String_t* ___sourceUri5, int32_t ___severity6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
