#include <stdio.h>

int main()
{
    int a, b, r, x, y;
    int gcd, lcm;


    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }

    gcd = a;

    lcm = x * y / gcd;

    printf("least common multiple between two integers is %d", lcm);

    
    return 0;
}