#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RuntimeEdit/pb_Selection
struct pb_Selection_t845870700;
// pb_Object
struct pb_Object_t3489221196;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RuntimeEdit
struct  RuntimeEdit_t2422255074  : public MonoBehaviour_t667441552
{
public:
	// RuntimeEdit/pb_Selection RuntimeEdit::currentSelection
	pb_Selection_t845870700 * ___currentSelection_2;
	// RuntimeEdit/pb_Selection RuntimeEdit::previousSelection
	pb_Selection_t845870700 * ___previousSelection_3;
	// pb_Object RuntimeEdit::preview
	pb_Object_t3489221196 * ___preview_4;
	// UnityEngine.Material RuntimeEdit::previewMaterial
	Material_t3870600107 * ___previewMaterial_5;
	// UnityEngine.Vector2 RuntimeEdit::mousePosition_initial
	Vector2_t4282066565  ___mousePosition_initial_6;
	// System.Boolean RuntimeEdit::dragging
	bool ___dragging_7;
	// System.Single RuntimeEdit::rotateSpeed
	float ___rotateSpeed_8;

public:
	inline static int32_t get_offset_of_currentSelection_2() { return static_cast<int32_t>(offsetof(RuntimeEdit_t2422255074, ___currentSelection_2)); }
	inline pb_Selection_t845870700 * get_currentSelection_2() const { return ___currentSelection_2; }
	inline pb_Selection_t845870700 ** get_address_of_currentSelection_2() { return &___currentSelection_2; }
	inline void set_currentSelection_2(pb_Selection_t845870700 * value)
	{
		___currentSelection_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentSelection_2, value);
	}

	inline static int32_t get_offset_of_previousSelection_3() { return static_cast<int32_t>(offsetof(RuntimeEdit_t2422255074, ___previousSelection_3)); }
	inline pb_Selection_t845870700 * get_previousSelection_3() const { return ___previousSelection_3; }
	inline pb_Selection_t845870700 ** get_address_of_previousSelection_3() { return &___previousSelection_3; }
	inline void set_previousSelection_3(pb_Selection_t845870700 * value)
	{
		___previousSelection_3 = value;
		Il2CppCodeGenWriteBarrier(&___previousSelection_3, value);
	}

	inline static int32_t get_offset_of_preview_4() { return static_cast<int32_t>(offsetof(RuntimeEdit_t2422255074, ___preview_4)); }
	inline pb_Object_t3489221196 * get_preview_4() const { return ___preview_4; }
	inline pb_Object_t3489221196 ** get_address_of_preview_4() { return &___preview_4; }
	inline void set_preview_4(pb_Object_t3489221196 * value)
	{
		___preview_4 = value;
		Il2CppCodeGenWriteBarrier(&___preview_4, value);
	}

	inline static int32_t get_offset_of_previewMaterial_5() { return static_cast<int32_t>(offsetof(RuntimeEdit_t2422255074, ___previewMaterial_5)); }
	inline Material_t3870600107 * get_previewMaterial_5() const { return ___previewMaterial_5; }
	inline Material_t3870600107 ** get_address_of_previewMaterial_5() { return &___previewMaterial_5; }
	inline void set_previewMaterial_5(Material_t3870600107 * value)
	{
		___previewMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___previewMaterial_5, value);
	}

	inline static int32_t get_offset_of_mousePosition_initial_6() { return static_cast<int32_t>(offsetof(RuntimeEdit_t2422255074, ___mousePosition_initial_6)); }
	inline Vector2_t4282066565  get_mousePosition_initial_6() const { return ___mousePosition_initial_6; }
	inline Vector2_t4282066565 * get_address_of_mousePosition_initial_6() { return &___mousePosition_initial_6; }
	inline void set_mousePosition_initial_6(Vector2_t4282066565  value)
	{
		___mousePosition_initial_6 = value;
	}

	inline static int32_t get_offset_of_dragging_7() { return static_cast<int32_t>(offsetof(RuntimeEdit_t2422255074, ___dragging_7)); }
	inline bool get_dragging_7() const { return ___dragging_7; }
	inline bool* get_address_of_dragging_7() { return &___dragging_7; }
	inline void set_dragging_7(bool value)
	{
		___dragging_7 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_8() { return static_cast<int32_t>(offsetof(RuntimeEdit_t2422255074, ___rotateSpeed_8)); }
	inline float get_rotateSpeed_8() const { return ___rotateSpeed_8; }
	inline float* get_address_of_rotateSpeed_8() { return &___rotateSpeed_8; }
	inline void set_rotateSpeed_8(float value)
	{
		___rotateSpeed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
