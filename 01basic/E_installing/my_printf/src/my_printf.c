#include <stdarg.h>
#include <stdio.h>

int my_printf(const char *fmt, ...)
{
    int rlt = 0;
    va_list args;

    va_start(args, fmt);
    rlt = printf(fmt, args);
    va_end(args);

    return rlt;
}