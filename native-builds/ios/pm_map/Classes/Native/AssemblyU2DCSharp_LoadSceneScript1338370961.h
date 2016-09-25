#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadSceneScript
struct  LoadSceneScript_t1338370961  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image LoadSceneScript::image
	Image_t538875265 * ___image_2;
	// TMPro.TextMeshProUGUI LoadSceneScript::percents
	TextMeshProUGUI_t3603375195 * ___percents_3;
	// TMPro.TextMeshProUGUI LoadSceneScript::version
	TextMeshProUGUI_t3603375195 * ___version_4;
	// UnityEngine.AsyncOperation LoadSceneScript::async
	AsyncOperation_t3699081103 * ___async_5;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(LoadSceneScript_t1338370961, ___image_2)); }
	inline Image_t538875265 * get_image_2() const { return ___image_2; }
	inline Image_t538875265 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t538875265 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_percents_3() { return static_cast<int32_t>(offsetof(LoadSceneScript_t1338370961, ___percents_3)); }
	inline TextMeshProUGUI_t3603375195 * get_percents_3() const { return ___percents_3; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_percents_3() { return &___percents_3; }
	inline void set_percents_3(TextMeshProUGUI_t3603375195 * value)
	{
		___percents_3 = value;
		Il2CppCodeGenWriteBarrier(&___percents_3, value);
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(LoadSceneScript_t1338370961, ___version_4)); }
	inline TextMeshProUGUI_t3603375195 * get_version_4() const { return ___version_4; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(TextMeshProUGUI_t3603375195 * value)
	{
		___version_4 = value;
		Il2CppCodeGenWriteBarrier(&___version_4, value);
	}

	inline static int32_t get_offset_of_async_5() { return static_cast<int32_t>(offsetof(LoadSceneScript_t1338370961, ___async_5)); }
	inline AsyncOperation_t3699081103 * get_async_5() const { return ___async_5; }
	inline AsyncOperation_t3699081103 ** get_address_of_async_5() { return &___async_5; }
	inline void set_async_5(AsyncOperation_t3699081103 * value)
	{
		___async_5 = value;
		Il2CppCodeGenWriteBarrier(&___async_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
