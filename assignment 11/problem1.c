#include <stdio.h>
#include <math.h>  // Required for using acos()

// Define PI using the arccosine of -1 for high precision
#define PI acos(-1)

// Macro to calculate area of a rectangle (width x height)
#define rect(x,y) ((x) * (y))

// Macro to calculate area of a circle (pi x radius x radius)
#define area(x) ((x) * (x) * (PI))

int main()
{
    double width, height, radius;

    // Prompt the user for input
    printf("Enter width and height of the rectangle, and radius of the circle: ");
    scanf("%lf %lf %lf", &width, &height, &radius);

    // Calculate area of rectangle using macro
    double rect_area = rect(width, height);

    // Calculate area of circle using macro
    double circle_area = area(radius);

    // Print results with 10 decimal places
    printf("Rectangle Area: %.10f\n", rect_area);
    printf("Circle Area: %.10f\n", circle_area);

    return 0;
}
