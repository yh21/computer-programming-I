#include <stdio.h>

int factorial(int n)
{
    int i = 1;
    int factorial = 1;
    for (i = 1; i <= n; i++)
        factorial = factorial * i;
    
    return factorial;
}

int combination(int a, int b)
{
    return factorial(a) / (factorial(b) * factorial(a - b));
}

int main()
{
    int n, r;
    printf("Enter two integers(C(n, r)): ");
    scanf("%d %d", &n, &r);

    printf("Combination of n,r is %d", combination(n, r));

    return 0;
}