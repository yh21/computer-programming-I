#include <stdio.h>


int max(int a, int b)
{
    int max;
    max = a > b ? a : b;

    return max;
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("max is %d", max(a, b));
    
    return 0;
}