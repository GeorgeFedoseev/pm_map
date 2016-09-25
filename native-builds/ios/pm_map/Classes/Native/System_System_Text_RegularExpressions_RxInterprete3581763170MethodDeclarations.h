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

// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t3581763170;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t4101713353;
// System.Text.RegularExpressions.Match
struct Match_t2156507859;
// System.Text.RegularExpressions.Regex
struct Regex_t2161232213;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t2151468941;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_EvalDelegate4101713353.h"
#include "System_System_Text_RegularExpressions_Regex2161232213.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Text_RegularExpressions_Group2151468941.h"

// System.Void System.Text.RegularExpressions.RxInterpreter::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C"  void RxInterpreter__ctor_m910953714 (RxInterpreter_t3581763170 * __this, ByteU5BU5D_t4260760469* ___program0, EvalDelegate_t4101713353 * ___eval_del1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::.cctor()
extern "C"  void RxInterpreter__cctor_m2964024760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t RxInterpreter_ReadInt_m1479423978 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___code0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t2156507859 * RxInterpreter_Scan_m1797695701 (RxInterpreter_t3581763170 * __this, Regex_t2161232213 * ___regex0, String_t* ___text1, int32_t ___start2, int32_t ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Open(System.Int32,System.Int32)
extern "C"  void RxInterpreter_Open_m1855510381 (RxInterpreter_t3581763170 * __this, int32_t ___gid0, int32_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Close(System.Int32,System.Int32)
extern "C"  void RxInterpreter_Close_m1124885467 (RxInterpreter_t3581763170 * __this, int32_t ___gid0, int32_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  bool RxInterpreter_Balance_m1181318279 (RxInterpreter_t3581763170 * __this, int32_t ___gid0, int32_t ___balance_gid1, bool ___capture2, int32_t ___ptr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::Checkpoint()
extern "C"  int32_t RxInterpreter_Checkpoint_m3359286087 (RxInterpreter_t3581763170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Backtrack(System.Int32)
extern "C"  void RxInterpreter_Backtrack_m2457971528 (RxInterpreter_t3581763170 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::ResetGroups()
extern "C"  void RxInterpreter_ResetGroups_m258178934 (RxInterpreter_t3581763170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::GetLastDefined(System.Int32)
extern "C"  int32_t RxInterpreter_GetLastDefined_m2998017581 (RxInterpreter_t3581763170 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::CreateMark(System.Int32)
extern "C"  int32_t RxInterpreter_CreateMark_m3275804857 (RxInterpreter_t3581763170 * __this, int32_t ___previous0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C"  void RxInterpreter_GetGroupInfo_m2211360289 (RxInterpreter_t3581763170 * __this, int32_t ___gid0, int32_t* ___first_mark_index1, int32_t* ___n_caps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C"  void RxInterpreter_PopulateGroup_m3222900022 (RxInterpreter_t3581763170 * __this, Group_t2151468941 * ___g0, int32_t ___first_mark_index1, int32_t ___n_caps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C"  Match_t2156507859 * RxInterpreter_GenerateMatch_m3508992066 (RxInterpreter_t3581763170 * __this, Regex_t2161232213 * ___regex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::IsWordChar(System.Char)
extern "C"  bool RxInterpreter_IsWordChar_m3707836558 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::EvalByteCode(System.Int32,System.Int32,System.Int32&)
extern "C"  bool RxInterpreter_EvalByteCode_m1916707461 (RxInterpreter_t3581763170 * __this, int32_t ___pc0, int32_t ___strpos1, int32_t* ___strpos_result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
