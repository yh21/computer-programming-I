#include <stdio.h>

int main() {
    int n, clipped;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Clip n to be within [0, 100] using only conditional operators
    clipped = (n > 0) ? ((n < 100) ? n : 100) : 0;

    // Display the clipped result
    printf("Clipped value: %d", clipped);

    return 0;
}