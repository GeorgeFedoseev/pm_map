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

// CUDLR.CommandTree
struct CommandTree_t1692351771;
// CUDLR.CommandAttribute
struct CommandAttribute_t2471075151;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CUDLR_CommandAttribute2471075151.h"
#include "mscorlib_System_String7231557.h"

// System.Void CUDLR.CommandTree::.ctor()
extern "C"  void CommandTree__ctor_m1046285112 (CommandTree_t1692351771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandTree::.cctor()
extern "C"  void CommandTree__cctor_m1887971189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandTree::Add(CUDLR.CommandAttribute)
extern "C"  void CommandTree_Add_m3985033360 (CommandTree_t1692351771 * __this, CommandAttribute_t2471075151 * ___cmd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandTree::_add(System.String[],System.Int32,CUDLR.CommandAttribute)
extern "C"  void CommandTree__add_m3897765818 (CommandTree_t1692351771 * __this, StringU5BU5D_t4054002952* ___commands0, int32_t ___command_index1, CommandAttribute_t2471075151 * ___cmd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CUDLR.CommandTree::Complete(System.String)
extern "C"  String_t* CommandTree_Complete_m1981618432 (CommandTree_t1692351771 * __this, String_t* ___partialCommand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CUDLR.CommandTree::_complete(System.String[],System.Int32,System.String)
extern "C"  String_t* CommandTree__complete_m1770504036 (CommandTree_t1692351771 * __this, StringU5BU5D_t4054002952* ___partialCommand0, int32_t ___index1, String_t* ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandTree::Run(System.String)
extern "C"  void CommandTree_Run_m1876991809 (CommandTree_t1692351771 * __this, String_t* ___commandStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandTree::_run(System.String[],System.Int32)
extern "C"  void CommandTree__run_m3938804975 (CommandTree_t1692351771 * __this, StringU5BU5D_t4054002952* ___commands0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandTree::RunCommand(System.String[])
extern "C"  void CommandTree_RunCommand_m2971747092 (CommandTree_t1692351771 * __this, StringU5BU5D_t4054002952* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
