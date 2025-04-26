#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate pi using the Leibniz series
    double approximated = 0;
    double 분모 = 1;
    double sign = 1;
    for (int i = 1; i <= n; i++)
        {
        approximated = approximated + (4 * sign) / 분모;
        분모 = 분모 + 2;
        sign = -sign;
        }

    // Display the approximated value of pi
    printf("Approximated Pi: %lf", approximated);

    return 0;
}