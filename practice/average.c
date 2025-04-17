#include <stdio.h>

int main()
{
    double num1, num2, num3;
    double average;

    printf("Enter three actual number: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("average is %lf", average);

    return 0;
}