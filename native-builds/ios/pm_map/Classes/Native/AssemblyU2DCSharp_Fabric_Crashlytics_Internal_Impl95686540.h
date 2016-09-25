#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fabric.Crashlytics.Internal.Impl
struct  Impl_t95686540  : public Il2CppObject
{
public:

public:
};

struct Impl_t95686540_StaticFields
{
public:
	// System.String Fabric.Crashlytics.Internal.Impl::FrameArgsRegex
	String_t* ___FrameArgsRegex_1;
	// System.String Fabric.Crashlytics.Internal.Impl::FrameRegexWithoutFileInfo
	String_t* ___FrameRegexWithoutFileInfo_2;
	// System.String Fabric.Crashlytics.Internal.Impl::FrameRegexWithFileInfo
	String_t* ___FrameRegexWithFileInfo_3;
	// System.String Fabric.Crashlytics.Internal.Impl::MonoFilenameUnknownString
	String_t* ___MonoFilenameUnknownString_4;
	// System.String[] Fabric.Crashlytics.Internal.Impl::StringDelimiters
	StringU5BU5D_t4054002952* ___StringDelimiters_5;

public:
	inline static int32_t get_offset_of_FrameArgsRegex_1() { return static_cast<int32_t>(offsetof(Impl_t95686540_StaticFields, ___FrameArgsRegex_1)); }
	inline String_t* get_FrameArgsRegex_1() const { return ___FrameArgsRegex_1; }
	inline String_t** get_address_of_FrameArgsRegex_1() { return &___FrameArgsRegex_1; }
	inline void set_FrameArgsRegex_1(String_t* value)
	{
		___FrameArgsRegex_1 = value;
		Il2CppCodeGenWriteBarrier(&___FrameArgsRegex_1, value);
	}

	inline static int32_t get_offset_of_FrameRegexWithoutFileInfo_2() { return static_cast<int32_t>(offsetof(Impl_t95686540_StaticFields, ___FrameRegexWithoutFileInfo_2)); }
	inline String_t* get_FrameRegexWithoutFileInfo_2() const { return ___FrameRegexWithoutFileInfo_2; }
	inline String_t** get_address_of_FrameRegexWithoutFileInfo_2() { return &___FrameRegexWithoutFileInfo_2; }
	inline void set_FrameRegexWithoutFileInfo_2(String_t* value)
	{
		___FrameRegexWithoutFileInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___FrameRegexWithoutFileInfo_2, value);
	}

	inline static int32_t get_offset_of_FrameRegexWithFileInfo_3() { return static_cast<int32_t>(offsetof(Impl_t95686540_StaticFields, ___FrameRegexWithFileInfo_3)); }
	inline String_t* get_FrameRegexWithFileInfo_3() const { return ___FrameRegexWithFileInfo_3; }
	inline String_t** get_address_of_FrameRegexWithFileInfo_3() { return &___FrameRegexWithFileInfo_3; }
	inline void set_FrameRegexWithFileInfo_3(String_t* value)
	{
		___FrameRegexWithFileInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&___FrameRegexWithFileInfo_3, value);
	}

	inline static int32_t get_offset_of_MonoFilenameUnknownString_4() { return static_cast<int32_t>(offsetof(Impl_t95686540_StaticFields, ___MonoFilenameUnknownString_4)); }
	inline String_t* get_MonoFilenameUnknownString_4() const { return ___MonoFilenameUnknownString_4; }
	inline String_t** get_address_of_MonoFilenameUnknownString_4() { return &___MonoFilenameUnknownString_4; }
	inline void set_MonoFilenameUnknownString_4(String_t* value)
	{
		___MonoFilenameUnknownString_4 = value;
		Il2CppCodeGenWriteBarrier(&___MonoFilenameUnknownString_4, value);
	}

	inline static int32_t get_offset_of_StringDelimiters_5() { return static_cast<int32_t>(offsetof(Impl_t95686540_StaticFields, ___StringDelimiters_5)); }
	inline StringU5BU5D_t4054002952* get_StringDelimiters_5() const { return ___StringDelimiters_5; }
	inline StringU5BU5D_t4054002952** get_address_of_StringDelimiters_5() { return &___StringDelimiters_5; }
	inline void set_StringDelimiters_5(StringU5BU5D_t4054002952* value)
	{
		___StringDelimiters_5 = value;
		Il2CppCodeGenWriteBarrier(&___StringDelimiters_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
