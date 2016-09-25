#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_HideFlags1436803931.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pb_SceneMeshRender
struct  pb_SceneMeshRender_t3919252258  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.HideFlags pb_SceneMeshRender::SceneCameraHideFlags
	int32_t ___SceneCameraHideFlags_2;
	// UnityEngine.Material pb_SceneMeshRender::_material
	Material_t3870600107 * ____material_3;
	// UnityEngine.Mesh pb_SceneMeshRender::_mesh
	Mesh_t4241756145 * ____mesh_4;

public:
	inline static int32_t get_offset_of_SceneCameraHideFlags_2() { return static_cast<int32_t>(offsetof(pb_SceneMeshRender_t3919252258, ___SceneCameraHideFlags_2)); }
	inline int32_t get_SceneCameraHideFlags_2() const { return ___SceneCameraHideFlags_2; }
	inline int32_t* get_address_of_SceneCameraHideFlags_2() { return &___SceneCameraHideFlags_2; }
	inline void set_SceneCameraHideFlags_2(int32_t value)
	{
		___SceneCameraHideFlags_2 = value;
	}

	inline static int32_t get_offset_of__material_3() { return static_cast<int32_t>(offsetof(pb_SceneMeshRender_t3919252258, ____material_3)); }
	inline Material_t3870600107 * get__material_3() const { return ____material_3; }
	inline Material_t3870600107 ** get_address_of__material_3() { return &____material_3; }
	inline void set__material_3(Material_t3870600107 * value)
	{
		____material_3 = value;
		Il2CppCodeGenWriteBarrier(&____material_3, value);
	}

	inline static int32_t get_offset_of__mesh_4() { return static_cast<int32_t>(offsetof(pb_SceneMeshRender_t3919252258, ____mesh_4)); }
	inline Mesh_t4241756145 * get__mesh_4() const { return ____mesh_4; }
	inline Mesh_t4241756145 ** get_address_of__mesh_4() { return &____mesh_4; }
	inline void set__mesh_4(Mesh_t4241756145 * value)
	{
		____mesh_4 = value;
		Il2CppCodeGenWriteBarrier(&____mesh_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
