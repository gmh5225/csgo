#pragma once

#include <consoleapi2.h>

enum class TypeLogs
{
	LOG_ERR,
	LOG_WARN,
	LOG_INFO,
	LOG_DEBUG
};

enum class ColorsConsole
{
	CONSOLE_WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	CONSOLE_BLACK = NULL,
	CONSOLE_DARKBLUE = FOREGROUND_BLUE,
	CONSOLE_DARKGREEN = FOREGROUND_GREEN,
	CONSOLE_DARKCYAN = FOREGROUND_GREEN | FOREGROUND_BLUE,
	CONSOLE_DARKRED = FOREGROUND_RED,
	CONSOLE_DARKMAGENTA = FOREGROUND_RED | FOREGROUND_BLUE,
	CONSOLE_DARKYELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
	CONSOLE_DARKGRAY = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	CONSOLE_GRAY = FOREGROUND_INTENSITY,
	CONSOLE_BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
	CONSOLE_GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
	CONSOLE_CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
	CONSOLE_RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
	CONSOLE_MAGENTA = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
	CONSOLE_YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
};