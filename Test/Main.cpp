#include <iostream>

#include "Core/Lua/Runtime.h"

int main()
{
    Lua::Runtime runtime;
    runtime.Dofile("Script/Main.lua");

    return 0;
}
