#include <stdio.h>
#include <stdarg.h>

int my_printf(const char *format, ...)
{
    int rlt = 0;
    va_list args;

    va_start(args, format);
    rlt = vprintf(format, args);
    va_end(args);

    return rlt;
}