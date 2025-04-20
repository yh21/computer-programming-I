#include <stdio.h>
// Function to calculate the GCD using the Euclidean algorithm

int gcd(int a, int b)
{
    int temp;
    // Ensure a is greater than or equal to b
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    // Iterate until b becomes 0
    while (b != 0)
    {
        int r;
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    int num1, num2;

    // Input the two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}