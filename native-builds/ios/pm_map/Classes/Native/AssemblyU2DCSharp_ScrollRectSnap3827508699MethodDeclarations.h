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

// ScrollRectSnap
struct ScrollRectSnap_t3827508699;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "codegen/il2cpp-codegen.h"

// System.Void ScrollRectSnap::.ctor()
extern "C"  void ScrollRectSnap__ctor_m293604640 (ScrollRectSnap_t3827508699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollRectSnap::Awake()
extern "C"  void ScrollRectSnap_Awake_m531209859 (ScrollRectSnap_t3827508699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollRectSnap::initSnapper()
extern "C"  void ScrollRectSnap_initSnapper_m3067627969 (ScrollRectSnap_t3827508699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollRectSnap::Update()
extern "C"  void ScrollRectSnap_Update_m2238671341 (ScrollRectSnap_t3827508699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollRectSnap::DragEnd()
extern "C"  void ScrollRectSnap_DragEnd_m2293094469 (ScrollRectSnap_t3827508699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollRectSnap::OnDrag()
extern "C"  void ScrollRectSnap_OnDrag_m1990706775 (ScrollRectSnap_t3827508699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollRectSnap::scrollToPage(System.Int32)
extern "C"  void ScrollRectSnap_scrollToPage_m1075993836 (ScrollRectSnap_t3827508699 * __this, int32_t ___pageIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScrollRectSnap::FindNearest(System.Single,System.Single[])
extern "C"  int32_t ScrollRectSnap_FindNearest_m133466169 (ScrollRectSnap_t3827508699 * __this, float ___f0, SingleU5BU5D_t2316563989* ___array1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScrollRectSnap::getCurrentPage()
extern "C"  int32_t ScrollRectSnap_getCurrentPage_m1612772420 (ScrollRectSnap_t3827508699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollRectSnap::<OnSnap>m__31()
extern "C"  void ScrollRectSnap_U3COnSnapU3Em__31_m4020112752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
