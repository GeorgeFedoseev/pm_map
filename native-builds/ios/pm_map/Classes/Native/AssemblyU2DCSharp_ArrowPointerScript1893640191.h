#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArrowPointerScript
struct  ArrowPointerScript_t1893640191  : public MonoBehaviour_t667441552
{
public:
	// System.Single ArrowPointerScript::rotationSpeed
	float ___rotationSpeed_2;
	// System.Boolean ArrowPointerScript::needsUpdate
	bool ___needsUpdate_3;
	// System.Single ArrowPointerScript::_bounceTime
	float ____bounceTime_4;
	// System.Single ArrowPointerScript::_bounceAmount
	float ____bounceAmount_5;
	// UnityEngine.GameObject ArrowPointerScript::bouncingPart
	GameObject_t3674682005 * ___bouncingPart_6;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(ArrowPointerScript_t1893640191, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_needsUpdate_3() { return static_cast<int32_t>(offsetof(ArrowPointerScript_t1893640191, ___needsUpdate_3)); }
	inline bool get_needsUpdate_3() const { return ___needsUpdate_3; }
	inline bool* get_address_of_needsUpdate_3() { return &___needsUpdate_3; }
	inline void set_needsUpdate_3(bool value)
	{
		___needsUpdate_3 = value;
	}

	inline static int32_t get_offset_of__bounceTime_4() { return static_cast<int32_t>(offsetof(ArrowPointerScript_t1893640191, ____bounceTime_4)); }
	inline float get__bounceTime_4() const { return ____bounceTime_4; }
	inline float* get_address_of__bounceTime_4() { return &____bounceTime_4; }
	inline void set__bounceTime_4(float value)
	{
		____bounceTime_4 = value;
	}

	inline static int32_t get_offset_of__bounceAmount_5() { return static_cast<int32_t>(offsetof(ArrowPointerScript_t1893640191, ____bounceAmount_5)); }
	inline float get__bounceAmount_5() const { return ____bounceAmount_5; }
	inline float* get_address_of__bounceAmount_5() { return &____bounceAmount_5; }
	inline void set__bounceAmount_5(float value)
	{
		____bounceAmount_5 = value;
	}

	inline static int32_t get_offset_of_bouncingPart_6() { return static_cast<int32_t>(offsetof(ArrowPointerScript_t1893640191, ___bouncingPart_6)); }
	inline GameObject_t3674682005 * get_bouncingPart_6() const { return ___bouncingPart_6; }
	inline GameObject_t3674682005 ** get_address_of_bouncingPart_6() { return &___bouncingPart_6; }
	inline void set_bouncingPart_6(GameObject_t3674682005 * value)
	{
		___bouncingPart_6 = value;
		Il2CppCodeGenWriteBarrier(&___bouncingPart_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
