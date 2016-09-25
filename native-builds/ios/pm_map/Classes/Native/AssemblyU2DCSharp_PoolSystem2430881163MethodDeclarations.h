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

// PoolSystem
struct PoolSystem_t2430881163;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void PoolSystem::.ctor()
extern "C"  void PoolSystem__ctor_m2253281136 (PoolSystem_t2430881163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PoolSystem::spawn(System.String)
extern "C"  GameObject_t3674682005 * PoolSystem_spawn_m2691158766 (PoolSystem_t2430881163 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolSystem::deactivate(UnityEngine.GameObject)
extern "C"  void PoolSystem_deactivate_m2999090784 (PoolSystem_t2430881163 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolSystem::addKey(System.String)
extern "C"  void PoolSystem_addKey_m560715472 (PoolSystem_t2430881163 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PoolSystem::activateAny(System.String)
extern "C"  GameObject_t3674682005 * PoolSystem_activateAny_m1564874928 (PoolSystem_t2430881163 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PoolSystem::hasFreeObjects(System.String)
extern "C"  bool PoolSystem_hasFreeObjects_m2651831180 (PoolSystem_t2430881163 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PoolSystem::InstantiatePrefab(System.String)
extern "C"  GameObject_t3674682005 * PoolSystem_InstantiatePrefab_m3758738715 (PoolSystem_t2430881163 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolSystem::putGameObjectToContainer(UnityEngine.GameObject)
extern "C"  void PoolSystem_putGameObjectToContainer_m1500181650 (PoolSystem_t2430881163 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
