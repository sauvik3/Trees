#include "trace.h"

bool _trace(TCHAR *format, ...)
{
	TCHAR buffer[1000];

	va_list argptr;
	va_start(argptr, format);
	wvsprintf(buffer, format, argptr);
	va_end(argptr);

	OutputDebugString(buffer);

	return true;
}

bool _formatTrace(TCHAR *file, int line, TCHAR *func, TCHAR *format, ...)
{
	TCHAR str[111];
	TCHAR buffer[1000];
	va_list argptr;

	wsprintf(str, "%s(%d)", file, line);
	va_start(argptr, format);
	wvsprintf(buffer, format, argptr);
	va_end(argptr);

	return _trace("%-21s : %-40s [%s()]\n", str, buffer, func);
}
