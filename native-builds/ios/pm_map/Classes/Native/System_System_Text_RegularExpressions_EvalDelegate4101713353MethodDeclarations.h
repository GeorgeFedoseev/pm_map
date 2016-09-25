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

// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t4101713353;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t3581763170;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Text_RegularExpressions_RxInterprete3581763170.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EvalDelegate__ctor_m1348567526 (EvalDelegate_t4101713353 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C"  bool EvalDelegate_Invoke_m1810867881 (EvalDelegate_t4101713353 * __this, RxInterpreter_t3581763170 * ___interp0, int32_t ___strpos1, int32_t* ___strpos_result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EvalDelegate_BeginInvoke_m3759056670 (EvalDelegate_t4101713353 * __this, RxInterpreter_t3581763170 * ___interp0, int32_t ___strpos1, int32_t* ___strpos_result2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C"  bool EvalDelegate_EndInvoke_m1878541493 (EvalDelegate_t4101713353 * __this, int32_t* ___strpos_result0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
