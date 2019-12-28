#pragma once

#include "Runtime.h"

namespace Lua {
	Runtime::Runtime() :
		state(lua_newstate(NULL, NULL))
	{
		luaL_openlibs(state);

		//luaL_dofile(L, "Test.lua");
	}

	Runtime::~Runtime()
	{
		lua_close(state);
	}
}
