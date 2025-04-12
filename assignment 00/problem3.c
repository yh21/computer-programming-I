#include <stdio.h>

int main()
{
    double a, b, c;
    double sum, average;

    scanf("%lf %lf %lf", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0;

    printf("%lf\n%lf\n", sum, average);

    return 0;


}