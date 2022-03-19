#include "my_printf.h"
#include "main.h"

int main(int argc, char *argv[])
{
    return my_printf("Hello Cmake! ————%s\n", FILE_AUTHOR);
}