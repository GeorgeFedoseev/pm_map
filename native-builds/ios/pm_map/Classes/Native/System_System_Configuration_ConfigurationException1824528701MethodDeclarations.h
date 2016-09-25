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

// System.Configuration.ConfigurationException
struct ConfigurationException_t1824528701;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Exception
struct Exception_t3991598821;
// System.Xml.XmlNode
struct XmlNode_t856910923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Exception3991598821.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"

// System.Void System.Configuration.ConfigurationException::.ctor()
extern "C"  void ConfigurationException__ctor_m406430298 (ConfigurationException_t1824528701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String)
extern "C"  void ConfigurationException__ctor_m1683496680 (ConfigurationException_t1824528701 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationException__ctor_m3314083995 (ConfigurationException_t1824528701 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationException__ctor_m638604110 (ConfigurationException_t1824528701 * __this, String_t* ___message0, Exception_t3991598821 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationException__ctor_m2674687291 (ConfigurationException_t1824528701 * __this, String_t* ___message0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception,System.Xml.XmlNode)
extern "C"  void ConfigurationException__ctor_m2092643093 (ConfigurationException_t1824528701 * __this, String_t* ___message0, Exception_t3991598821 * ___inner1, XmlNode_t856910923 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.String,System.Int32)
extern "C"  void ConfigurationException__ctor_m599393843 (ConfigurationException_t1824528701 * __this, String_t* ___message0, String_t* ___filename1, int32_t ___line2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_BareMessage()
extern "C"  String_t* ConfigurationException_get_BareMessage_m1437999207 (ConfigurationException_t1824528701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_Message()
extern "C"  String_t* ConfigurationException_get_Message_m2328371065 (ConfigurationException_t1824528701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::GetXmlNodeFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationException_GetXmlNodeFilename_m3049002222 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationException::GetXmlNodeLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationException_GetXmlNodeLineNumber_m3225833047 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationException_GetObjectData_m131163384 (ConfigurationException_t1824528701 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
