#include <stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp;
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;

}

int main() {
    int a, b;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");

    // Read two integers from the user
    scanf("%d %d", &a, &b);

    // Calculate and print the GCD
    printf("GCD: %d\n", gcd(a, b));

    return 0;
}