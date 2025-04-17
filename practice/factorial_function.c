#include <stdio.h>

int factorial(int a)
{
    int i = 1;
    int factorial = 1;
    while (i <= a )
    {
        factorial = factorial * i;
        i++;

    }
    return factorial;
}

int main()
{
    int n;
    printf("Enter one integers: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}