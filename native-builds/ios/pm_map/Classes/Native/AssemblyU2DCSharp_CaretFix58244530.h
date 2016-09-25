#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t609046876;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CaretFix
struct  CaretFix_t58244530  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.InputField CaretFix::inputField
	InputField_t609046876 * ___inputField_2;

public:
	inline static int32_t get_offset_of_inputField_2() { return static_cast<int32_t>(offsetof(CaretFix_t58244530, ___inputField_2)); }
	inline InputField_t609046876 * get_inputField_2() const { return ___inputField_2; }
	inline InputField_t609046876 ** get_address_of_inputField_2() { return &___inputField_2; }
	inline void set_inputField_2(InputField_t609046876 * value)
	{
		___inputField_2 = value;
		Il2CppCodeGenWriteBarrier(&___inputField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
