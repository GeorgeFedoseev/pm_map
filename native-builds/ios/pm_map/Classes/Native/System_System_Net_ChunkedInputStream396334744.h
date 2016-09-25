#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.ChunkStream
struct ChunkStream_t1623008007;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;

#include "System_System_Net_RequestStream1980644777.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ChunkedInputStream
struct  ChunkedInputStream_t396334744  : public RequestStream_t1980644777
{
public:
	// System.Boolean System.Net.ChunkedInputStream::disposed
	bool ___disposed_8;
	// System.Net.ChunkStream System.Net.ChunkedInputStream::decoder
	ChunkStream_t1623008007 * ___decoder_9;
	// System.Net.HttpListenerContext System.Net.ChunkedInputStream::context
	HttpListenerContext_t1119969133 * ___context_10;
	// System.Boolean System.Net.ChunkedInputStream::no_more_data
	bool ___no_more_data_11;

public:
	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t396334744, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t396334744, ___decoder_9)); }
	inline ChunkStream_t1623008007 * get_decoder_9() const { return ___decoder_9; }
	inline ChunkStream_t1623008007 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(ChunkStream_t1623008007 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_9, value);
	}

	inline static int32_t get_offset_of_context_10() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t396334744, ___context_10)); }
	inline HttpListenerContext_t1119969133 * get_context_10() const { return ___context_10; }
	inline HttpListenerContext_t1119969133 ** get_address_of_context_10() { return &___context_10; }
	inline void set_context_10(HttpListenerContext_t1119969133 * value)
	{
		___context_10 = value;
		Il2CppCodeGenWriteBarrier(&___context_10, value);
	}

	inline static int32_t get_offset_of_no_more_data_11() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t396334744, ___no_more_data_11)); }
	inline bool get_no_more_data_11() const { return ___no_more_data_11; }
	inline bool* get_address_of_no_more_data_11() { return &___no_more_data_11; }
	inline void set_no_more_data_11(bool value)
	{
		___no_more_data_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
