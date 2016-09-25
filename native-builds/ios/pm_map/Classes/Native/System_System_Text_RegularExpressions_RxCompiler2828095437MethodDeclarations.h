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

// System.Text.RegularExpressions.RxCompiler
struct RxCompiler_t2828095437;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t378484359;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t48641242;
// System.Collections.BitArray
struct BitArray_t3577534870;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RxOp3811709775.h"
#include "System_System_Text_RegularExpressions_LinkRef378484359.h"
#include "mscorlib_System_Globalization_UnicodeCategory1892815653.h"
#include "System_System_Text_RegularExpressions_Category1962353414.h"
#include "mscorlib_System_Collections_BitArray3577534870.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Text_RegularExpressions_Position2659647281.h"

// System.Void System.Text.RegularExpressions.RxCompiler::.ctor()
extern "C"  void RxCompiler__ctor_m1953942776 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::MakeRoom(System.Int32)
extern "C"  void RxCompiler_MakeRoom_m1743679302 (RxCompiler_t2828095437 * __this, int32_t ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Byte)
extern "C"  void RxCompiler_Emit_m2440592812 (RxCompiler_t2828095437 * __this, uint8_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Text.RegularExpressions.RxOp)
extern "C"  void RxCompiler_Emit_m3501060447 (RxCompiler_t2828095437 * __this, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.UInt16)
extern "C"  void RxCompiler_Emit_m2955932661 (RxCompiler_t2828095437 * __this, uint16_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Int32)
extern "C"  void RxCompiler_Emit_m2834130736 (RxCompiler_t2828095437 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_BeginLink_m2454953997 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___lref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitLink_m2973887469 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___lref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.RxCompiler::GetMachineFactory()
extern "C"  Il2CppObject * RxCompiler_GetMachineFactory_m3387025391 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFalse()
extern "C"  void RxCompiler_EmitFalse_m1934565542 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTrue()
extern "C"  void RxCompiler_EmitTrue_m756260749 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOp_m1132991071 (RxCompiler_t2828095437 * __this, uint8_t ___op0, bool ___negate1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpIgnoreReverse_m2175188972 (RxCompiler_t2828095437 * __this, uint8_t ___op0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpNegateReverse_m2465213724 (RxCompiler_t2828095437 * __this, uint8_t ___op0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCharacter_m4189178252 (RxCompiler_t2828095437 * __this, Il2CppChar ___c0, bool ___negate1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUniCat(System.Globalization.UnicodeCategory,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitUniCat_m1178935862 (RxCompiler_t2828095437 * __this, int32_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCatGeneral(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCatGeneral_m465230038 (RxCompiler_t2828095437 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCategory_m4257630986 (RxCompiler_t2828095437 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitNotCategory_m3729413619 (RxCompiler_t2828095437 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitRange_m1931593193 (RxCompiler_t2828095437 * __this, Il2CppChar ___lo0, Il2CppChar ___hi1, bool ___negate2, bool ___ignore3, bool ___reverse4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitSet_m163764701 (RxCompiler_t2828095437 * __this, Il2CppChar ___lo0, BitArray_t3577534870 * ___set1, bool ___negate2, bool ___ignore3, bool ___reverse4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitString_m1296274962 (RxCompiler_t2828095437 * __this, String_t* ___str0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C"  void RxCompiler_EmitPosition_m2298557332 (RxCompiler_t2828095437 * __this, uint16_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpen(System.Int32)
extern "C"  void RxCompiler_EmitOpen_m2512462106 (RxCompiler_t2828095437 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitClose(System.Int32)
extern "C"  void RxCompiler_EmitClose_m275134732 (RxCompiler_t2828095437 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBalanceStart_m2136902846 (RxCompiler_t2828095437 * __this, int32_t ___gid0, int32_t ___balance1, bool ___capture2, LinkRef_t378484359 * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalance()
extern "C"  void RxCompiler_EmitBalance_m1826300831 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitReference_m3911029311 (RxCompiler_t2828095437 * __this, int32_t ___gid0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIfDefined_m2685445754 (RxCompiler_t2828095437 * __this, int32_t ___gid0, LinkRef_t378484359 * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitSub_m1481343095 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___tail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitTest_m201623445 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___yes0, LinkRef_t378484359 * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBranch_m3741913621 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___next0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitJump_m2721442849 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIn_m3934906776 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___tail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitRepeat_m1948872745 (RxCompiler_t2828095437 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, LinkRef_t378484359 * ___until3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitUntil_m1300611861 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___repeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C"  void RxCompiler_EmitInfo_m1477407838 (RxCompiler_t2828095437 * __this, int32_t ___count0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitFastRepeat_m4193597229 (RxCompiler_t2828095437 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, LinkRef_t378484359 * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitAnchor_m3735895406 (RxCompiler_t2828095437 * __this, bool ___reverse0, int32_t ___offset1, LinkRef_t378484359 * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranchEnd()
extern "C"  void RxCompiler_EmitBranchEnd_m2214670556 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAlternationEnd()
extern "C"  void RxCompiler_EmitAlternationEnd_m3895572797 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.RxCompiler::NewLink()
extern "C"  LinkRef_t378484359 * RxCompiler_NewLink_m1846254179 (RxCompiler_t2828095437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_ResolveLink_m3072044944 (RxCompiler_t2828095437 * __this, LinkRef_t378484359 * ___link0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
