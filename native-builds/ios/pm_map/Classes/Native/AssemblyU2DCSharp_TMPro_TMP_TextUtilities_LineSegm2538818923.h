﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextUtilities/LineSegment
struct  LineSegment_t2538818923 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_TextUtilities/LineSegment::Point1
	Vector3_t4282066566  ___Point1_0;
	// UnityEngine.Vector3 TMPro.TMP_TextUtilities/LineSegment::Point2
	Vector3_t4282066566  ___Point2_1;

public:
	inline static int32_t get_offset_of_Point1_0() { return static_cast<int32_t>(offsetof(LineSegment_t2538818923, ___Point1_0)); }
	inline Vector3_t4282066566  get_Point1_0() const { return ___Point1_0; }
	inline Vector3_t4282066566 * get_address_of_Point1_0() { return &___Point1_0; }
	inline void set_Point1_0(Vector3_t4282066566  value)
	{
		___Point1_0 = value;
	}

	inline static int32_t get_offset_of_Point2_1() { return static_cast<int32_t>(offsetof(LineSegment_t2538818923, ___Point2_1)); }
	inline Vector3_t4282066566  get_Point2_1() const { return ___Point2_1; }
	inline Vector3_t4282066566 * get_address_of_Point2_1() { return &___Point2_1; }
	inline void set_Point2_1(Vector3_t4282066566  value)
	{
		___Point2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TMPro.TMP_TextUtilities/LineSegment
struct LineSegment_t2538818923_marshaled_pinvoke
{
	Vector3_t4282066566_marshaled_pinvoke ___Point1_0;
	Vector3_t4282066566_marshaled_pinvoke ___Point2_1;
};
// Native definition for marshalling of: TMPro.TMP_TextUtilities/LineSegment
struct LineSegment_t2538818923_marshaled_com
{
	Vector3_t4282066566_marshaled_com ___Point1_0;
	Vector3_t4282066566_marshaled_com ___Point2_1;
};
