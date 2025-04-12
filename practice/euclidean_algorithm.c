#include <stdio.h>

int main()
{
    int a, b;
    int r;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
       {
         r = a % b;
         a = b;
         b = r;
       }

    
    printf("gcd between two integers is %d", a);

    return 0;

}