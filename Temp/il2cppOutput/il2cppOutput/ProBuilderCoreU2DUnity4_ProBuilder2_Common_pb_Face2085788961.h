#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t3246820444;
// pb_UV
struct pb_UV_t106447886;
// UnityEngine.Material
struct Material_t1886596500;

#include "mscorlib_System_Object837106420.h"

// ProBuilder2.Common.pb_Face
struct  pb_Face_t2085788961  : public Object_t
{
	// System.Int32[] ProBuilder2.Common.pb_Face::_indices
	Int32U5BU5D_t1809983122* ____indices_0;
	// System.Int32[] ProBuilder2.Common.pb_Face::_distinctIndices
	Int32U5BU5D_t1809983122* ____distinctIndices_1;
	// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::_edges
	pb_EdgeU5BU5D_t3246820444* ____edges_2;
	// System.Int32 ProBuilder2.Common.pb_Face::_smoothingGroup
	int32_t ____smoothingGroup_3;
	// pb_UV ProBuilder2.Common.pb_Face::_uv
	pb_UV_t106447886 * ____uv_4;
	// UnityEngine.Material ProBuilder2.Common.pb_Face::_mat
	Material_t1886596500 * ____mat_5;
	// System.Boolean ProBuilder2.Common.pb_Face::manualUV
	bool ___manualUV_6;
	// System.Int32 ProBuilder2.Common.pb_Face::elementGroup
	int32_t ___elementGroup_7;
	// System.Int32 ProBuilder2.Common.pb_Face::textureGroup
	int32_t ___textureGroup_8;
};
