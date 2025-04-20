#include <stdio.h>

// Function to approximate pi using the Leibniz formula
double approximatePi(int iterations)
{
    double pi = 0.0;
    int denominator = 1;
    int sign = 1;

    for (int i = 1; i<= iterations; i++)
    {
        pi = pi + 4.0 / denominator * sign;
        denominator += 2;
        sign = - sign;
    }
    return pi;
}


int main()
{
    int iterations = 100000;
    double approximatedPi;
    // Approximate pi using the Leibniz formula
    approximatedPi = approximatePi(iterations);
    // Print the result
    printf("Approximation of pi after %d iterations: %.15f\n", iterations, approximatedPi);
    return 0;
}