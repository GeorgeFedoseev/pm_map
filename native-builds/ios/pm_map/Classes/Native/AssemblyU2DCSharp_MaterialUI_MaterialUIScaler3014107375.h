#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t2777732396;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.MaterialUIScaler
struct  MaterialUIScaler_t3014107375  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::referenceResolution
	Vector2_t4282066565  ___referenceResolution_2;
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::currentResolution
	Vector2_t4282066565  ___currentResolution_3;
	// UnityEngine.UI.CanvasScaler MaterialUI.MaterialUIScaler::scaler
	CanvasScaler_t2777732396 * ___scaler_4;
	// System.Single MaterialUI.MaterialUIScaler::<scaleFactor>k__BackingField
	float ___U3CscaleFactorU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_referenceResolution_2() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t3014107375, ___referenceResolution_2)); }
	inline Vector2_t4282066565  get_referenceResolution_2() const { return ___referenceResolution_2; }
	inline Vector2_t4282066565 * get_address_of_referenceResolution_2() { return &___referenceResolution_2; }
	inline void set_referenceResolution_2(Vector2_t4282066565  value)
	{
		___referenceResolution_2 = value;
	}

	inline static int32_t get_offset_of_currentResolution_3() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t3014107375, ___currentResolution_3)); }
	inline Vector2_t4282066565  get_currentResolution_3() const { return ___currentResolution_3; }
	inline Vector2_t4282066565 * get_address_of_currentResolution_3() { return &___currentResolution_3; }
	inline void set_currentResolution_3(Vector2_t4282066565  value)
	{
		___currentResolution_3 = value;
	}

	inline static int32_t get_offset_of_scaler_4() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t3014107375, ___scaler_4)); }
	inline CanvasScaler_t2777732396 * get_scaler_4() const { return ___scaler_4; }
	inline CanvasScaler_t2777732396 ** get_address_of_scaler_4() { return &___scaler_4; }
	inline void set_scaler_4(CanvasScaler_t2777732396 * value)
	{
		___scaler_4 = value;
		Il2CppCodeGenWriteBarrier(&___scaler_4, value);
	}

	inline static int32_t get_offset_of_U3CscaleFactorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MaterialUIScaler_t3014107375, ___U3CscaleFactorU3Ek__BackingField_5)); }
	inline float get_U3CscaleFactorU3Ek__BackingField_5() const { return ___U3CscaleFactorU3Ek__BackingField_5; }
	inline float* get_address_of_U3CscaleFactorU3Ek__BackingField_5() { return &___U3CscaleFactorU3Ek__BackingField_5; }
	inline void set_U3CscaleFactorU3Ek__BackingField_5(float value)
	{
		___U3CscaleFactorU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
