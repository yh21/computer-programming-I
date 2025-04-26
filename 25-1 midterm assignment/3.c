#include <stdio.h>

int main() {
    int n;

    // Prompt the user for a 4-digit number
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    // Print digits in reverse order
    while (n != 0)
    {
        printf("%d\n", (n % 10));
        n = n / 10;
    }

    return 0;
}