#include "my_printf.h"
#include <cJson.h>

int main(int argc, char *argv[])
{
    cJSON cjson;

    memset(&cjson, 0, sizeof(CJSON));

    return my_printf("Hello Cmake!\n");
}