#include <stdio.h>

int main()
{
    int n;
    int num = 1;
    int factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (num <= n)
    {
        factorial = factorial * num;
        num++;
    }

    printf("%d! = %d", n, factorial);

    return 0;
}