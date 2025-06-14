#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2");
    int *p;
    p = (int *)malloc(2 * sizeof(int));
    p[0] = 10;
    p[1] = 20;
    printf("3");
    p = realloc(p, 3 * sizeof(int));
    p[2] = 30;
    for (int i = 0; i < 3; i++)
        printf("%2d", p[i]);
    return 0;
}