#include <stdio.h>

int main()
{
    int x = 10;
    int y = (1 + x++) + 10;

    printf("%d\n", y);
    printf("%d", x);

    return 0;
}