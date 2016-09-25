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

// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t1184887678;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.String
struct String_t;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1755821458;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.InternalConfigurationSystem::.ctor()
extern "C"  void InternalConfigurationSystem__ctor_m1555293235 (InternalConfigurationSystem_t1184887678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[])
extern "C"  void InternalConfigurationSystem_Init_m3726859140 (InternalConfigurationSystem_t1184887678 * __this, Type_t * ___typeConfigHost0, ObjectU5BU5D_t1108656482* ___hostInitParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::InitForConfiguration(System.String&,System.String&,System.String&)
extern "C"  void InternalConfigurationSystem_InitForConfiguration_m1993054168 (InternalConfigurationSystem_t1184887678 * __this, String_t** ___locationConfigPath0, String_t** ___parentConfigPath1, String_t** ___parentLocationConfigPath2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::get_Host()
extern "C"  Il2CppObject * InternalConfigurationSystem_get_Host_m1307681119 (InternalConfigurationSystem_t1184887678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
