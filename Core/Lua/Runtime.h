#pragma once

#include "Include/lua5.3.5/lua.hpp"

namespace Lua {
    class Runtime
    {
    public:
        Runtime();
        ~Runtime();

        void Dofile(const char* filePath);
    private:
        lua_State* state;
    };
}
