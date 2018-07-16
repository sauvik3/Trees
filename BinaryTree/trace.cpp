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

bool _formatTrace(TCHAR *msg, TCHAR *file, int line, TCHAR *func)
{
	TCHAR str[22];
	wsprintf(str, "%s(%d)", file, line);
	return _trace("%-21s : %-40s [%s()]\n", str, msg, func);
}
