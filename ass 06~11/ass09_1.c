#include <stdio.h>
#include <math.h>

// Define a structure to represent a point in 2D space
typedef struct {
    double x;
    double y;
} Point;

// Define a structure to represent a circle
typedef struct {
    Point center;    // Center of the circle
    double radius;    // Radius of the circle
} Circle;

// Function to calculate the area of a circle
double calculateArea(Circle c) {
    double area = c.radius * c.radius * M_PI;
    return area;
}

// Function to calculate the circumference of a circle
double calculateCircumference(Circle c) {
    double circumference = 2 * M_PI * c.radius;
    return circumference;
}

int main() {
    Circle c;

    // Prompt user for input
    printf("Enter the x-coordinate of the circle's center: ");
    scanf("%lf", &c.center.x);
    printf("Enter the y-coordinate of the circle's center: ");
    scanf("%lf", &c.center.y);
    printf("Enter the radius of the circle: ");
    scanf("%lf", &c.radius);

    // Validate the radius
    if (c.radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    // Calculate area and circumference
    double area = calculateArea(c);
    double circumference = calculateCircumference(c);

    // Display the results
    printf("Circle's center: (%.2f, %.2f)\n", c.center.x, c.center.y);
    printf("Circle's radius: %.2f\n", c.radius);
    printf("Circle's area: %.2f\n", area);
    printf("Circle's circumference: %.2f\n", circumference);

    return 0;
}