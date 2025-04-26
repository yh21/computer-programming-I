#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double s, area;

    // Read the lengths of the three sides
    printf("Enter the lengths of three sides: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Apply Heron's formula
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    // Print the result rounded to two decimal places
    printf("Area of the triangle: %.2lf", area);

    return 0;
}