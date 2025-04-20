#include <stdio.h>

int main()
{
    int number;
    unsigned int factorial = 1;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
        factorial *= i;

    printf("Factorial of %d is %u\n", number, factorial);
    return 0;
}