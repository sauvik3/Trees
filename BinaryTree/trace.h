#pragma once

#include <Windows.h>
#include <cstdarg>

#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
bool _trace(TCHAR *format, ...);
bool _formatTrace(TCHAR *file, int line, TCHAR *func, TCHAR *format, ...);

#define TRACE(format, ...) _formatTrace(__FILE__, __LINE__, __FUNCTION__, format, __VA_ARGS__)