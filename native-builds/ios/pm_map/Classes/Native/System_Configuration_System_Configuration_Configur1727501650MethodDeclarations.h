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

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t1727501650;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Exception
struct Exception_t3991598821;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Exception3991598821.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C"  void ConfigurationErrorsException__ctor_m1016638077 (ConfigurationErrorsException_t1727501650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C"  void ConfigurationErrorsException__ctor_m3985553021 (ConfigurationErrorsException_t1727501650 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException__ctor_m4273575486 (ConfigurationErrorsException_t1727501650 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationErrorsException__ctor_m3158621233 (ConfigurationErrorsException_t1727501650 * __this, String_t* ___message0, Exception_t3991598821 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationErrorsException__ctor_m4112141190 (ConfigurationErrorsException_t1727501650 * __this, String_t* ___message0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C"  void ConfigurationErrorsException__ctor_m1524630781 (ConfigurationErrorsException_t1727501650 * __this, String_t* ___message0, XmlReader_t4123196108 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C"  void ConfigurationErrorsException__ctor_m359555914 (ConfigurationErrorsException_t1727501650 * __this, String_t* ___message0, Exception_t3991598821 * ___inner1, String_t* ___filename2, int32_t ___line3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C"  String_t* ConfigurationErrorsException_get_BareMessage_m1481301130 (ConfigurationErrorsException_t1727501650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C"  String_t* ConfigurationErrorsException_get_Message_m1259234588 (ConfigurationErrorsException_t1727501650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m3313041207 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m411316138 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m357595672 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m3661835083 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException_GetObjectData_m3080175515 (ConfigurationErrorsException_t1727501650 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
