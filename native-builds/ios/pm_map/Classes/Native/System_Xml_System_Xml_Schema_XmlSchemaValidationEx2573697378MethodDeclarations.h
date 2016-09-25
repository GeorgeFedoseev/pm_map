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

// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t2573697378;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void System.Xml.Schema.XmlSchemaValidationException::.ctor()
extern "C"  void XmlSchemaValidationException__ctor_m133673168 (XmlSchemaValidationException_t2573697378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaValidationException__ctor_m408066577 (XmlSchemaValidationException_t2573697378 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidationException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaValidationException__ctor_m1234846862 (XmlSchemaValidationException_t2573697378 * __this, String_t* ___message0, Il2CppObject * ___sender1, String_t* ___sourceUri2, XmlSchemaObject_t3280570797 * ___sourceObject3, Exception_t3991598821 * ___innerException4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaValidationException_GetObjectData_m702890094 (XmlSchemaValidationException_t2573697378 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
