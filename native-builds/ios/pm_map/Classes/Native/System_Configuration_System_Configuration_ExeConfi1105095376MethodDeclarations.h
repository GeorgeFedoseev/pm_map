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

// System.Configuration.ExeConfigurationHost
struct ExeConfigurationHost_t1105095376;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t1756119244;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C"  void ExeConfigurationHost__ctor_m957968831 (ExeConfigurationHost_t1105095376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_Init_m367743737 (ExeConfigurationHost_t1105095376 * __this, Il2CppObject * ___root0, ObjectU5BU5D_t1108656482* ___hostInitParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern "C"  String_t* ExeConfigurationHost_GetStreamName_m1983209793 (ExeConfigurationHost_t1105095376 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_InitForConfiguration_m706706708 (ExeConfigurationHost_t1105095376 * __this, String_t** ___locationSubPath0, String_t** ___configPath1, String_t** ___locationConfigPath2, Il2CppObject * ___root3, ObjectU5BU5D_t1108656482* ___hostInitConfigurationParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
