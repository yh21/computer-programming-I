#include <stdio.h>

int main()
{
    double pi = 3.141592;
    double radius, area;

    scanf("%lf", &radius);

    area = pi * radius * radius;

    printf("%lf", area);

    return 0;

}