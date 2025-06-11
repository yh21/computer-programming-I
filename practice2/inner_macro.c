#include <stdio.h>

int main()
{
    printf("compile date: %s\n", __DATE__);
    printf("error file name: %s, line number: %d", __FILE__, __LINE__);

    return 0;
}