#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// PinchZoom
struct  PinchZoom_t1518303117  : public MonoBehaviour_t3012272455
{
	// System.Single PinchZoom::minPinchSpeed
	float ___minPinchSpeed_2;
	// System.Single PinchZoom::minDistance
	float ___minDistance_3;
	// System.Single PinchZoom::touchDelta
	float ___touchDelta_4;
	// UnityEngine.Vector2 PinchZoom::previousDistance
	Vector2_t3525329788  ___previousDistance_5;
	// UnityEngine.Vector2 PinchZoom::currentDistance
	Vector2_t3525329788  ___currentDistance_6;
	// System.Single PinchZoom::speedTouch0
	float ___speedTouch0_7;
	// System.Single PinchZoom::speedTouch1
	float ___speedTouch1_8;
	// System.Int32 PinchZoom::speed
	int32_t ___speed_9;
	// System.Int32 PinchZoom::maxOut
	int32_t ___maxOut_10;
	// System.Int32 PinchZoom::maxIn
	int32_t ___maxIn_11;
	// System.Boolean PinchZoom::showGUI
	bool ___showGUI_12;
};
