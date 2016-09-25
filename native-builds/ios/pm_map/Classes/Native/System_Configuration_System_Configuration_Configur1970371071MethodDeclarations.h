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

// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1970371071;
// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t1608233025;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1608233025.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ConfigurationLocationCollection::.ctor()
extern "C"  void ConfigurationLocationCollection__ctor_m3433272914 (ConfigurationLocationCollection_t1970371071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocationCollection::Add(System.Configuration.ConfigurationLocation)
extern "C"  void ConfigurationLocationCollection_Add_m3989327005 (ConfigurationLocationCollection_t1970371071 * __this, ConfigurationLocation_t1608233025 * ___loc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocation System.Configuration.ConfigurationLocationCollection::Find(System.String)
extern "C"  ConfigurationLocation_t1608233025 * ConfigurationLocationCollection_Find_m4125888732 (ConfigurationLocationCollection_t1970371071 * __this, String_t* ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
