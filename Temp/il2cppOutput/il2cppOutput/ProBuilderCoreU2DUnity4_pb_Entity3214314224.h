#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// pb_Object
struct pb_Object_t3489221196;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4182154592;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_EntityT3379485268.h"

// pb_Entity
struct  pb_Entity_t3214314224  : public MonoBehaviour_t3012272455
{
	// pb_Object pb_Entity::pb
	pb_Object_t3489221196 * ___pb_2;
	// System.Boolean pb_Entity::isTrigger
	bool ___isTrigger_3;
	// UnityEngine.PhysicMaterial pb_Entity::physicMaterial
	PhysicMaterial_t4182154592 * ___physicMaterial_4;
	// System.Boolean pb_Entity::forceConvex
	bool ___forceConvex_5;
	// System.Boolean pb_Entity::smoothSphereCollisions
	bool ___smoothSphereCollisions_6;
	// UnityEngine.Vector3 pb_Entity::center
	Vector3_t3525329789  ___center_7;
	// UnityEngine.Vector3 pb_Entity::size
	Vector3_t3525329789  ___size_8;
	// System.Boolean pb_Entity::userSetDimensions
	bool ___userSetDimensions_9;
	// ProBuilder2.Common.EntityType pb_Entity::_entityType
	int32_t ____entityType_10;
};
