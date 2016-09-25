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

// ProBuilder2.Common.pb_XYZ_Color
struct pb_XYZ_Color_t2499037984;
// ProBuilder2.Common.pb_CIE_Lab_Color
struct pb_CIE_Lab_Color_t79275636;
// ProBuilder2.Common.pb_HsvColor
struct pb_HsvColor_t2980699843;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_XYZ_2499037984.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_CIE_La79275636.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_HsvC2980699843.h"

// System.Boolean ProBuilder2.Common.pb_ColorUtil::approx(System.Single,System.Single)
extern "C"  bool pb_ColorUtil_approx_m1844587377 (Il2CppObject * __this /* static, unused */, float ___lhs0, float ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_ColorUtil::RGBToXYZ(UnityEngine.Color)
extern "C"  pb_XYZ_Color_t2499037984 * pb_ColorUtil_RGBToXYZ_m2590947684 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_ColorUtil::RGBToXYZ(System.Single,System.Single,System.Single)
extern "C"  pb_XYZ_Color_t2499037984 * pb_ColorUtil_RGBToXYZ_m4265384307 (Il2CppObject * __this /* static, unused */, float ___r0, float ___g1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_CIE_Lab_Color ProBuilder2.Common.pb_ColorUtil::XYZToCIE_Lab(ProBuilder2.Common.pb_XYZ_Color)
extern "C"  pb_CIE_Lab_Color_t79275636 * pb_ColorUtil_XYZToCIE_Lab_m3616714699 (Il2CppObject * __this /* static, unused */, pb_XYZ_Color_t2499037984 * ___xyz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Common.pb_ColorUtil::DeltaE(ProBuilder2.Common.pb_CIE_Lab_Color,ProBuilder2.Common.pb_CIE_Lab_Color)
extern "C"  float pb_ColorUtil_DeltaE_m1625844072 (Il2CppObject * __this /* static, unused */, pb_CIE_Lab_Color_t79275636 * ___lhs0, pb_CIE_Lab_Color_t79275636 * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ProBuilder2.Common.pb_ColorUtil::HSVtoRGB(ProBuilder2.Common.pb_HsvColor)
extern "C"  Color_t4194546905  pb_ColorUtil_HSVtoRGB_m57328943 (Il2CppObject * __this /* static, unused */, pb_HsvColor_t2980699843 * ___hsv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ProBuilder2.Common.pb_ColorUtil::HSVtoRGB(System.Single,System.Single,System.Single)
extern "C"  Color_t4194546905  pb_ColorUtil_HSVtoRGB_m1120744730 (Il2CppObject * __this /* static, unused */, float ___h0, float ___s1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_HsvColor ProBuilder2.Common.pb_ColorUtil::RGBtoHSV(UnityEngine.Color)
extern "C"  pb_HsvColor_t2980699843 * pb_ColorUtil_RGBtoHSV_m3105172539 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_ColorUtil::GetColorName(UnityEngine.Color)
extern "C"  String_t* pb_ColorUtil_GetColorName_m105411030 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___InColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_CIE_Lab_Color ProBuilder2.Common.pb_ColorUtil::CIELabFromRGB(System.Single,System.Single,System.Single,System.Single)
extern "C"  pb_CIE_Lab_Color_t79275636 * pb_ColorUtil_CIELabFromRGB_m1537147272 (Il2CppObject * __this /* static, unused */, float ___R0, float ___G1, float ___B2, float ___Scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_ColorUtil::.cctor()
extern "C"  void pb_ColorUtil__cctor_m4054067684 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
