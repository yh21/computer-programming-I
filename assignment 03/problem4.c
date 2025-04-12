#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The reversed number is ");
    while (n)
    {
        printf("%d", n % 10);
        n = n / 10;
    }

    printf(".");

    return 0;
}