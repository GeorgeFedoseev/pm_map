#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// pb_UV
struct pb_UV_t106447886;

#include "mscorlib_System_Object837106420.h"
#include "ProBuilderCoreU2DUnity4_pb_UV_Fill2189731.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "ProBuilderCoreU2DUnity4_pb_UV_Justify415171184.h"

// pb_UV
struct  pb_UV_t106447886  : public Object_t
{
	// System.Boolean pb_UV::useWorldSpace
	bool ___useWorldSpace_0;
	// System.Boolean pb_UV::flipU
	bool ___flipU_1;
	// System.Boolean pb_UV::flipV
	bool ___flipV_2;
	// System.Boolean pb_UV::swapUV
	bool ___swapUV_3;
	// pb_UV/Fill pb_UV::fill
	int32_t ___fill_4;
	// UnityEngine.Vector2 pb_UV::scale
	Vector2_t3525329788  ___scale_5;
	// UnityEngine.Vector2 pb_UV::offset
	Vector2_t3525329788  ___offset_6;
	// System.Single pb_UV::rotation
	float ___rotation_7;
	// pb_UV/Justify pb_UV::justify
	int32_t ___justify_8;
	// UnityEngine.Vector2 pb_UV::localPivot
	Vector2_t3525329788  ___localPivot_9;
	// UnityEngine.Vector2 pb_UV::localSize
	Vector2_t3525329788  ___localSize_10;
};
struct pb_UV_t106447886_StaticFields{
	// pb_UV pb_UV::LightmapUVSettings
	pb_UV_t106447886 * ___LightmapUVSettings_11;
};
