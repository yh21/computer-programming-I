#include <stdio.h>

int main()
{
    int n, sum = 0;
    int num = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (num <= n)
    {
        sum += num;
        num++;
    }

    printf("The sum from 1 to %d is %d.\n", n, sum);
    return 0;
}