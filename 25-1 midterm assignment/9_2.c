#include <stdio.h>

// Assume is_prime function is defined in another file
extern int is_prime(int n);

int main() {
    int n;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Print all prime numbers from 1 to n
    for (int i = 2; i <= n; i++)
        {
        if (is_prime(i) == 1)
            printf("%d\n", i);
        }

    return 0;
}