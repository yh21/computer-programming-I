#include <stdio.h>
#include "power.h"

int main()
{
    int x, y;
    printf("Enter x value: ");
    scanf("%d", &x);
    printf("Enter y value: ");
    scanf("%d", &y);
    printf("%d ^ %d = %lf", x, y, power(x,y));

    return 0;
}