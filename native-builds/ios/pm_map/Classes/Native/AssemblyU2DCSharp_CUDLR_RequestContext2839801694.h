#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.Text.RegularExpressions.Match
struct Match_t2156507859;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RequestContext
struct  RequestContext_t2839801694  : public Il2CppObject
{
public:
	// System.Net.HttpListenerContext CUDLR.RequestContext::context
	HttpListenerContext_t1119969133 * ___context_0;
	// System.Text.RegularExpressions.Match CUDLR.RequestContext::match
	Match_t2156507859 * ___match_1;
	// System.Boolean CUDLR.RequestContext::pass
	bool ___pass_2;
	// System.String CUDLR.RequestContext::path
	String_t* ___path_3;
	// System.Int32 CUDLR.RequestContext::currentRoute
	int32_t ___currentRoute_4;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(RequestContext_t2839801694, ___context_0)); }
	inline HttpListenerContext_t1119969133 * get_context_0() const { return ___context_0; }
	inline HttpListenerContext_t1119969133 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(HttpListenerContext_t1119969133 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier(&___context_0, value);
	}

	inline static int32_t get_offset_of_match_1() { return static_cast<int32_t>(offsetof(RequestContext_t2839801694, ___match_1)); }
	inline Match_t2156507859 * get_match_1() const { return ___match_1; }
	inline Match_t2156507859 ** get_address_of_match_1() { return &___match_1; }
	inline void set_match_1(Match_t2156507859 * value)
	{
		___match_1 = value;
		Il2CppCodeGenWriteBarrier(&___match_1, value);
	}

	inline static int32_t get_offset_of_pass_2() { return static_cast<int32_t>(offsetof(RequestContext_t2839801694, ___pass_2)); }
	inline bool get_pass_2() const { return ___pass_2; }
	inline bool* get_address_of_pass_2() { return &___pass_2; }
	inline void set_pass_2(bool value)
	{
		___pass_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(RequestContext_t2839801694, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier(&___path_3, value);
	}

	inline static int32_t get_offset_of_currentRoute_4() { return static_cast<int32_t>(offsetof(RequestContext_t2839801694, ___currentRoute_4)); }
	inline int32_t get_currentRoute_4() const { return ___currentRoute_4; }
	inline int32_t* get_address_of_currentRoute_4() { return &___currentRoute_4; }
	inline void set_currentRoute_4(int32_t value)
	{
		___currentRoute_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
