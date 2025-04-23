#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    printf("max is %d", max);
    printf("min is %d", min);

    return 0;
}