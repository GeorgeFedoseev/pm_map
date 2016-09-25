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

// System.Configuration.ConfigInfo
struct ConfigInfo_t1047989972;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"

// System.Void System.Configuration.ConfigInfo::.ctor()
extern "C"  void ConfigInfo__ctor_m56134907 (ConfigInfo_t1047989972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigInfo::CreateInstance()
extern "C"  Il2CppObject * ConfigInfo_CreateInstance_m4251433477 (ConfigInfo_t1047989972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::set_StreamName(System.String)
extern "C"  void ConfigInfo_set_StreamName_m788530065 (ConfigInfo_t1047989972 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void ConfigInfo_ThrowException_m3653545458 (ConfigInfo_t1047989972 * __this, String_t* ___text0, XmlReader_t4123196108 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
