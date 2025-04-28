#include <stdio.h>
#include <math.h>

int main()
{
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("area of the circle is %lf\n", radius * radius * acos(-1));
    printf("circumference of the cirfle is %lf\n", radius * 2 * acos(-1));
}