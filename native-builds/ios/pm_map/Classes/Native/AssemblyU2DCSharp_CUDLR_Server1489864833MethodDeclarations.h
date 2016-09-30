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

// CUDLR.Server
struct Server_t1489864833;
// CUDLR.RequestContext
struct RequestContext_t2839801694;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CUDLR_RequestContext2839801694.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_726430633.h"

// System.Void CUDLR.Server::.ctor()
extern "C"  void Server__ctor_m2676651970 (Server_t1489864833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::.cctor()
extern "C"  void Server__cctor_m889736235 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::Awake()
extern "C"  void Server_Awake_m2914257189 (Server_t1489864833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::RegisterRoutes()
extern "C"  void Server_RegisterRoutes_m1665909903 (Server_t1489864833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::FindFileType(CUDLR.RequestContext,System.Boolean,System.String&,System.String&)
extern "C"  void Server_FindFileType_m3910896514 (Il2CppObject * __this /* static, unused */, RequestContext_t2839801694 * ___context0, bool ___download1, String_t** ___path2, String_t** ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::WWWFileHandler(CUDLR.RequestContext,System.Boolean)
extern "C"  void Server_WWWFileHandler_m3361250778 (Il2CppObject * __this /* static, unused */, RequestContext_t2839801694 * ___context0, bool ___download1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::FileHandler(CUDLR.RequestContext,System.Boolean)
extern "C"  void Server_FileHandler_m1331676101 (Il2CppObject * __this /* static, unused */, RequestContext_t2839801694 * ___context0, bool ___download1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::RegisterFileHandlers()
extern "C"  void Server_RegisterFileHandlers_m1651996554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::OnEnable()
extern "C"  void Server_OnEnable_m1847599236 (Server_t1489864833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::OnDisable()
extern "C"  void Server_OnDisable_m1881938729 (Server_t1489864833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::Update()
extern "C"  void Server_Update_m3098694539 (Server_t1489864833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::ListenerCallback(System.IAsyncResult)
extern "C"  void Server_ListenerCallback_m345032552 (Server_t1489864833 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server::HandleRequest(CUDLR.RequestContext)
extern "C"  void Server_HandleRequest_m640105809 (Server_t1489864833 * __this, RequestContext_t2839801694 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CUDLR.Server::HandleRequests()
extern "C"  Il2CppObject * Server_HandleRequests_m1944526678 (Server_t1489864833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CUDLR.Server::<RegisterFileHandlers>m__72(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
extern "C"  String_t* Server_U3CRegisterFileHandlersU3Em__72_m3609746482 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t726430633  ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
