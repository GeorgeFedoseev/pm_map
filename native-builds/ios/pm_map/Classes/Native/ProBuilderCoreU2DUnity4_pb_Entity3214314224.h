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
struct PhysicMaterial_t211873335;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_EntityT1379796045.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pb_Entity
struct  pb_Entity_t3214314224  : public MonoBehaviour_t667441552
{
public:
	// pb_Object pb_Entity::pb
	pb_Object_t3489221196 * ___pb_2;
	// System.Boolean pb_Entity::isTrigger
	bool ___isTrigger_3;
	// UnityEngine.PhysicMaterial pb_Entity::physicMaterial
	PhysicMaterial_t211873335 * ___physicMaterial_4;
	// System.Boolean pb_Entity::forceConvex
	bool ___forceConvex_5;
	// System.Boolean pb_Entity::smoothSphereCollisions
	bool ___smoothSphereCollisions_6;
	// UnityEngine.Vector3 pb_Entity::center
	Vector3_t4282066566  ___center_7;
	// UnityEngine.Vector3 pb_Entity::size
	Vector3_t4282066566  ___size_8;
	// System.Boolean pb_Entity::userSetDimensions
	bool ___userSetDimensions_9;
	// ProBuilder2.Common.EntityType pb_Entity::_entityType
	int32_t ____entityType_10;

public:
	inline static int32_t get_offset_of_pb_2() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___pb_2)); }
	inline pb_Object_t3489221196 * get_pb_2() const { return ___pb_2; }
	inline pb_Object_t3489221196 ** get_address_of_pb_2() { return &___pb_2; }
	inline void set_pb_2(pb_Object_t3489221196 * value)
	{
		___pb_2 = value;
		Il2CppCodeGenWriteBarrier(&___pb_2, value);
	}

	inline static int32_t get_offset_of_isTrigger_3() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___isTrigger_3)); }
	inline bool get_isTrigger_3() const { return ___isTrigger_3; }
	inline bool* get_address_of_isTrigger_3() { return &___isTrigger_3; }
	inline void set_isTrigger_3(bool value)
	{
		___isTrigger_3 = value;
	}

	inline static int32_t get_offset_of_physicMaterial_4() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___physicMaterial_4)); }
	inline PhysicMaterial_t211873335 * get_physicMaterial_4() const { return ___physicMaterial_4; }
	inline PhysicMaterial_t211873335 ** get_address_of_physicMaterial_4() { return &___physicMaterial_4; }
	inline void set_physicMaterial_4(PhysicMaterial_t211873335 * value)
	{
		___physicMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___physicMaterial_4, value);
	}

	inline static int32_t get_offset_of_forceConvex_5() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___forceConvex_5)); }
	inline bool get_forceConvex_5() const { return ___forceConvex_5; }
	inline bool* get_address_of_forceConvex_5() { return &___forceConvex_5; }
	inline void set_forceConvex_5(bool value)
	{
		___forceConvex_5 = value;
	}

	inline static int32_t get_offset_of_smoothSphereCollisions_6() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___smoothSphereCollisions_6)); }
	inline bool get_smoothSphereCollisions_6() const { return ___smoothSphereCollisions_6; }
	inline bool* get_address_of_smoothSphereCollisions_6() { return &___smoothSphereCollisions_6; }
	inline void set_smoothSphereCollisions_6(bool value)
	{
		___smoothSphereCollisions_6 = value;
	}

	inline static int32_t get_offset_of_center_7() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___center_7)); }
	inline Vector3_t4282066566  get_center_7() const { return ___center_7; }
	inline Vector3_t4282066566 * get_address_of_center_7() { return &___center_7; }
	inline void set_center_7(Vector3_t4282066566  value)
	{
		___center_7 = value;
	}

	inline static int32_t get_offset_of_size_8() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___size_8)); }
	inline Vector3_t4282066566  get_size_8() const { return ___size_8; }
	inline Vector3_t4282066566 * get_address_of_size_8() { return &___size_8; }
	inline void set_size_8(Vector3_t4282066566  value)
	{
		___size_8 = value;
	}

	inline static int32_t get_offset_of_userSetDimensions_9() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ___userSetDimensions_9)); }
	inline bool get_userSetDimensions_9() const { return ___userSetDimensions_9; }
	inline bool* get_address_of_userSetDimensions_9() { return &___userSetDimensions_9; }
	inline void set_userSetDimensions_9(bool value)
	{
		___userSetDimensions_9 = value;
	}

	inline static int32_t get_offset_of__entityType_10() { return static_cast<int32_t>(offsetof(pb_Entity_t3214314224, ____entityType_10)); }
	inline int32_t get__entityType_10() const { return ____entityType_10; }
	inline int32_t* get_address_of__entityType_10() { return &____entityType_10; }
	inline void set__entityType_10(int32_t value)
	{
		____entityType_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
