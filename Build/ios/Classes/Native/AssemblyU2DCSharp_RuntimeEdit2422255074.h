#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RuntimeEdit/pb_Selection
struct pb_Selection_t363877215;
// pb_Object
struct pb_Object_t3489221196;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// RuntimeEdit
struct  RuntimeEdit_t2422255074  : public MonoBehaviour_t3012272455
{
	// RuntimeEdit/pb_Selection RuntimeEdit::currentSelection
	pb_Selection_t363877215 * ___currentSelection_2;
	// RuntimeEdit/pb_Selection RuntimeEdit::previousSelection
	pb_Selection_t363877215 * ___previousSelection_3;
	// pb_Object RuntimeEdit::preview
	pb_Object_t3489221196 * ___preview_4;
	// UnityEngine.Material RuntimeEdit::previewMaterial
	Material_t1886596500 * ___previewMaterial_5;
	// UnityEngine.Vector2 RuntimeEdit::mousePosition_initial
	Vector2_t3525329788  ___mousePosition_initial_6;
	// System.Boolean RuntimeEdit::dragging
	bool ___dragging_7;
	// System.Single RuntimeEdit::rotateSpeed
	float ___rotateSpeed_8;
};
