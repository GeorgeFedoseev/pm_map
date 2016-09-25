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

// TMPro.KerningTable
struct KerningTable_t618956984;
// TMPro.KerningPair
struct KerningPair_t1904833704;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_KerningPair1904833704.h"

// System.Void TMPro.KerningTable::.ctor()
extern "C"  void KerningTable__ctor_m4264262047 (KerningTable_t618956984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::AddKerningPair()
extern "C"  void KerningTable_AddKerningPair_m1762768426 (KerningTable_t618956984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.KerningTable::AddKerningPair(System.Int32,System.Int32,System.Single)
extern "C"  int32_t KerningTable_AddKerningPair_m3276704595 (KerningTable_t618956984 * __this, int32_t ___left0, int32_t ___right1, float ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::RemoveKerningPair(System.Int32,System.Int32)
extern "C"  void KerningTable_RemoveKerningPair_m2319900391 (KerningTable_t618956984 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::RemoveKerningPair(System.Int32)
extern "C"  void KerningTable_RemoveKerningPair_m1637491696 (KerningTable_t618956984 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::SortKerningPairs()
extern "C"  void KerningTable_SortKerningPairs_m1972879600 (KerningTable_t618956984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.KerningTable::<SortKerningPairs>m__7C(TMPro.KerningPair)
extern "C"  int32_t KerningTable_U3CSortKerningPairsU3Em__7C_m2136500245 (Il2CppObject * __this /* static, unused */, KerningPair_t1904833704 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.KerningTable::<SortKerningPairs>m__7D(TMPro.KerningPair)
extern "C"  int32_t KerningTable_U3CSortKerningPairsU3Em__7D_m1727676020 (Il2CppObject * __this /* static, unused */, KerningPair_t1904833704 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
