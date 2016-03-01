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
struct pb_XYZ_Color_t55032679;
// ProBuilder2.Common.pb_CIE_Lab_Color
struct pb_CIE_Lab_Color_t1069390651;
// ProBuilder2.Common.pb_HsvColor
struct pb_HsvColor_t546556316;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_XYZ_Co55032679.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_CIE_1069390651.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_HsvCo546556316.h"

// System.Boolean ProBuilder2.Common.pb_ColorUtil::approx(System.Single,System.Single)
extern "C"  bool pb_ColorUtil_approx_m1844587377 (Object_t * __this /* static, unused */, float ___lhs, float ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_ColorUtil::RGBToXYZ(UnityEngine.Color)
extern "C"  pb_XYZ_Color_t55032679 * pb_ColorUtil_RGBToXYZ_m2590947684 (Object_t * __this /* static, unused */, Color_t1588175760  ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_ColorUtil::RGBToXYZ(System.Single,System.Single,System.Single)
extern "C"  pb_XYZ_Color_t55032679 * pb_ColorUtil_RGBToXYZ_m4265384307 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_CIE_Lab_Color ProBuilder2.Common.pb_ColorUtil::XYZToCIE_Lab(ProBuilder2.Common.pb_XYZ_Color)
extern "C"  pb_CIE_Lab_Color_t1069390651 * pb_ColorUtil_XYZToCIE_Lab_m3616714699 (Object_t * __this /* static, unused */, pb_XYZ_Color_t55032679 * ___xyz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Common.pb_ColorUtil::DeltaE(ProBuilder2.Common.pb_CIE_Lab_Color,ProBuilder2.Common.pb_CIE_Lab_Color)
extern "C"  float pb_ColorUtil_DeltaE_m1625844072 (Object_t * __this /* static, unused */, pb_CIE_Lab_Color_t1069390651 * ___lhs, pb_CIE_Lab_Color_t1069390651 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ProBuilder2.Common.pb_ColorUtil::HSVtoRGB(ProBuilder2.Common.pb_HsvColor)
extern "C"  Color_t1588175760  pb_ColorUtil_HSVtoRGB_m57328943 (Object_t * __this /* static, unused */, pb_HsvColor_t546556316 * ___hsv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ProBuilder2.Common.pb_ColorUtil::HSVtoRGB(System.Single,System.Single,System.Single)
extern "C"  Color_t1588175760  pb_ColorUtil_HSVtoRGB_m1120744730 (Object_t * __this /* static, unused */, float ___h, float ___s, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_HsvColor ProBuilder2.Common.pb_ColorUtil::RGBtoHSV(UnityEngine.Color)
extern "C"  pb_HsvColor_t546556316 * pb_ColorUtil_RGBtoHSV_m3105172539 (Object_t * __this /* static, unused */, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_ColorUtil::GetColorName(UnityEngine.Color)
extern "C"  String_t* pb_ColorUtil_GetColorName_m105411030 (Object_t * __this /* static, unused */, Color_t1588175760  ___InColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_CIE_Lab_Color ProBuilder2.Common.pb_ColorUtil::CIELabFromRGB(System.Single,System.Single,System.Single,System.Single)
extern "C"  pb_CIE_Lab_Color_t1069390651 * pb_ColorUtil_CIELabFromRGB_m1537147272 (Object_t * __this /* static, unused */, float ___R, float ___G, float ___B, float ___Scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_ColorUtil::.cctor()
extern "C"  void pb_ColorUtil__cctor_m4054067684 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
