#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_HideFlags62234258.h"

// pb_SceneMeshRender
struct  pb_SceneMeshRender_t3919252258  : public MonoBehaviour_t3012272455
{
	// UnityEngine.HideFlags pb_SceneMeshRender::SceneCameraHideFlags
	int32_t ___SceneCameraHideFlags_2;
	// UnityEngine.Material pb_SceneMeshRender::_material
	Material_t1886596500 * ____material_3;
	// UnityEngine.Mesh pb_SceneMeshRender::_mesh
	Mesh_t1525280346 * ____mesh_4;
};
