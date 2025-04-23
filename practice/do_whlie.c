#include <stdio.h>

int main()
{
    int num;
    int sum = 0;

    do
    {
        printf("Enter an integer: ");
        scanf("%d", &num);
        sum += num;

    } while (num);

    printf("sum of integers: %d", sum);
    
}