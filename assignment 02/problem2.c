#include <stdio.h>

int main()
{
    int a, b, c, max, max1, max2;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    max1 = (a >= b) ? a : b;
    max2 = (b >= c) ? b : c;
    max = (max1 >= max2) ? max1 : max2;

    printf("%d\n", max);
    return 0;
}