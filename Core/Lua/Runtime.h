#pragma once

#include "Core/include/lua5.3.5/lua.hpp"

namespace Lua {
    class Runtime
    {
    public:
        Runtime();
        ~Runtime();

    private:
        lua_State* state;
    };
}
