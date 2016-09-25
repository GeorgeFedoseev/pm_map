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

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t78171291;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Exception
struct Exception_t3991598821;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C"  void XmlSchemaException__ctor_m3943090231 (XmlSchemaException_t78171291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException__ctor_m3022219512 (XmlSchemaException_t78171291 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject,System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m2514067875 (XmlSchemaException_t78171291 * __this, String_t* ___message0, int32_t ___lineNumber1, int32_t ___linePosition2, XmlSchemaObject_t3280570797 * ___sourceObject3, String_t* ___sourceUri4, Exception_t3991598821 * ___innerException5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m3848999797 (XmlSchemaException_t78171291 * __this, String_t* ___message0, Il2CppObject * ___sender1, String_t* ___sourceUri2, XmlSchemaObject_t3280570797 * ___sourceObject3, Exception_t3991598821 * ___innerException4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m95575999 (XmlSchemaException_t78171291 * __this, String_t* ___message0, XmlSchemaObject_t3280570797 * ___sourceObject1, Exception_t3991598821 * ___innerException2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m2248382571 (XmlSchemaException_t78171291 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m3207775927 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___sourceUri1, Il2CppObject * ___sender2, XmlSchemaObject_t3280570797 * ___sourceObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m2185124169 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___sourceUri1, int32_t ___lineNumber2, int32_t ___linePosition3, XmlSchemaObject_t3280570797 * ___sourceObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C"  String_t* XmlSchemaException_get_Message_m3331904880 (XmlSchemaException_t78171291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException_GetObjectData_m3502782549 (XmlSchemaException_t78171291 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
