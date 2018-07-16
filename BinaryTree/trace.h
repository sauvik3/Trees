#pragma once

#include <Windows.h>
#include <cstdarg>

#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
bool _trace(TCHAR *format, ...);
bool _formatTrace(TCHAR *msg, TCHAR *file, int line, TCHAR *func);
#define TRACE _formatTrace