#include <stdio.h>

// Recursive function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return (gcd(b, a % b));
}

int main() {
    int a, b;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Display the result
    printf("GCD: %d", gcd(a, b));

    return 0;
}