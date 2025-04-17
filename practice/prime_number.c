#include <stdio.h>

int is_prime(int a)
{
    int i;
    for (i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_prime(num) == 0)
        printf("%d is not a prime number", num);
    else   
        printf("%d is prime number", num);

    return 0;
}