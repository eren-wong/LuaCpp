#pragma once

#include "Runtime.h"

namespace Lua {
	Runtime::Runtime() :
		state(luaL_newstate())
	{
		luaL_openlibs(state);
	}

	Runtime::~Runtime()
	{
		lua_close(state);
	}

	void Runtime::Dofile(const char* filePath)
	{
		luaL_dofile(state, filePath);
	}
}
