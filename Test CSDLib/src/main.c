#include <stdio.h>
#include <CSDLib/CSDLib.h>

int main()
{
    char *str = "Hello World!";

    str = cut_str(5, str);

    printf("%s\n", str);

    return 0;
}