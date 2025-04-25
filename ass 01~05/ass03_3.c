#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        factorial *= i;

    printf("%d! = %d", n, factorial);

    return 0;
}