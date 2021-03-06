#pragma once

extern bool LUA_ERROR;
extern bool CLOSE_KEYBOARD;

namespace Love
{
	int Initialize(lua_State * L);

	int GetVersion(lua_State * L);

	int EnableConsole(lua_State * L);

	int NoGame(lua_State * L);

	int Traceback(lua_State * L);

	void Exit(lua_State * L);
}