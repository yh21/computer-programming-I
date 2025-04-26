#include <stdio.h>

int main() {
    int n, result;

    // Prompt the user for a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial
    if (n == 0)
        result = 1;
    else
        result = 1;
        for (int i = 1; i <= n; i++)
        {
            result = result * i;
        }

    // Display the result
    printf("Factorial: %d", result);

    return 0;
}