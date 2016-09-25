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

// System.Text.RegularExpressions.CILCompiler
struct CILCompiler_t2504238675;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t48641242;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t2315379190;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1499877190;
// System.Text.RegularExpressions.CILCompiler/Frame
struct Frame_t2599208150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "System_System_Text_RegularExpressions_OpFlags3204502900.h"
#include "System_System_Text_RegularExpressions_RxOp3811709775.h"
#include "mscorlib_System_Reflection_Emit_Label2268465130.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator1499877190.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod2315379190.h"
#include "System_System_Text_RegularExpressions_CILCompiler_2599208150.h"

// System.Void System.Text.RegularExpressions.CILCompiler::.ctor()
extern "C"  void CILCompiler__ctor_m3441285636 (CILCompiler_t2504238675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::.cctor()
extern "C"  void CILCompiler__cctor_m3118543401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.CILCompiler::System.Text.RegularExpressions.ICompiler.GetMachineFactory()
extern "C"  Il2CppObject * CILCompiler_System_Text_RegularExpressions_ICompiler_GetMachineFactory_m3569021414 (CILCompiler_t2504238675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::GetEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t2315379190 * CILCompiler_GetEvalMethod_m3627932141 (CILCompiler_t2504238675 * __this, ByteU5BU5D_t4260760469* ___program0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.Type,System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m2713332449 (CILCompiler_t2504238675 * __this, Type_t * ___t0, String_t* ___name1, MethodInfo_t ** ___cached2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m1861577134 (CILCompiler_t2504238675 * __this, String_t* ___name0, MethodInfo_t ** ___cached1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadInt_m4197148889 (CILCompiler_t2504238675 * __this, ByteU5BU5D_t4260760469* ___code0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.CILCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t CILCompiler_MakeFlags_m1342304657 (Il2CppObject * __this /* static, unused */, bool ___negate0, bool ___ignore1, bool ___reverse2, bool ___lazy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitGenericOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitGenericOp_m469148823 (CILCompiler_t2504238675 * __this, uint8_t ___op0, bool ___negate1, bool ___ignore2, bool ___reverse3, bool ___lazy4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOp_m1484103379 (CILCompiler_t2504238675 * __this, uint8_t ___op0, bool ___negate1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpIgnoreReverse_m1639242080 (CILCompiler_t2504238675 * __this, uint8_t ___op0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpNegateReverse_m1929266832 (CILCompiler_t2504238675 * __this, uint8_t ___op0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::CreateEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t2315379190 * CILCompiler_CreateEvalMethod_m2204720733 (CILCompiler_t2504238675 * __this, ByteU5BU5D_t4260760469* ___program0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadShort(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadShort_m1043275046 (CILCompiler_t2504238675 * __this, ByteU5BU5D_t4260760469* ___program0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler::CreateLabelForPC(System.Reflection.Emit.ILGenerator,System.Int32)
extern "C"  Label_t2268465130  CILCompiler_CreateLabelForPC_m1633407530 (CILCompiler_t2504238675 * __this, ILGenerator_t1499877190 * ___ilgen0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::GetILOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t CILCompiler_GetILOffset_m4137769061 (CILCompiler_t2504238675 * __this, ILGenerator_t1499877190 * ___ilgen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::EmitEvalMethodBody(System.Reflection.Emit.DynamicMethod,System.Reflection.Emit.ILGenerator,System.Text.RegularExpressions.CILCompiler/Frame,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  DynamicMethod_t2315379190 * CILCompiler_EmitEvalMethodBody_m2269696058 (CILCompiler_t2504238675 * __this, DynamicMethod_t2315379190 * ___m0, ILGenerator_t1499877190 * ___ilgen1, Frame_t2599208150 * ___frame2, ByteU5BU5D_t4260760469* ___program3, int32_t ___pc4, int32_t ___end_pc5, bool ___one_op6, bool ___no_bump7, int32_t* ___out_pc8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
