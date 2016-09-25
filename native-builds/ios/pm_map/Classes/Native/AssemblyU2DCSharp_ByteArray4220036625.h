#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ByteArray
struct  ByteArray_t4220036625  : public Il2CppObject
{
public:
	// System.IO.MemoryStream ByteArray::stream
	MemoryStream_t418716369 * ___stream_0;
	// System.IO.BinaryWriter ByteArray::writer
	BinaryWriter_t4146364100 * ___writer_1;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(ByteArray_t4220036625, ___stream_0)); }
	inline MemoryStream_t418716369 * get_stream_0() const { return ___stream_0; }
	inline MemoryStream_t418716369 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(MemoryStream_t418716369 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_writer_1() { return static_cast<int32_t>(offsetof(ByteArray_t4220036625, ___writer_1)); }
	inline BinaryWriter_t4146364100 * get_writer_1() const { return ___writer_1; }
	inline BinaryWriter_t4146364100 ** get_address_of_writer_1() { return &___writer_1; }
	inline void set_writer_1(BinaryWriter_t4146364100 * value)
	{
		___writer_1 = value;
		Il2CppCodeGenWriteBarrier(&___writer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
