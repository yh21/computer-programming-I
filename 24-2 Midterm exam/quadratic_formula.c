#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) // Real roots
    {
        root1 = (- b + sqrt(discriminant)) / (2 * a);
        root2 = (- b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct : %.3lf and %.3lf", root1, root2);
    }
    else // Complex roots
    {
        printf("There are no real roots");
    }

    return 0;
}