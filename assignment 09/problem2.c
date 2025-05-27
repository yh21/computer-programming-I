#include <stdio.h>
#include <math.h>  // for sqrt() function

// Define a 2D point using typedef
typedef struct 
{
    double x;
    double y;
} Point;

// Define a triangle using three points
typedef struct
{
    Point a;
    Point b;
    Point c;
} Triangle;

// Calculate the Euclidean distance between two points
double distance(Point p1, Point p2)
{
    return sqrt((p1.x-p2.x) * (p1.x-p2.x) + (p1.y-p2.y) * (p1.y-p2.y));
}

// Calculate the area of a triangle using Heron's formula
double calculate_area(Triangle t) {
    double side1 = distance(t.a, t.b);  // Length of side AB
    double side2 = distance(t.b, t.c);  // Length of side BC
    double side3 = distance(t.c, t.a);  // Length of side CA
    double s = (side1 + side2 + side3) / 2.0;  // Semi-perimeter
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));  // Heron's formula
}

int main() {
    Triangle t;

    // Input: coordinates of the three triangle vertices
    printf("Enter coordinates of point A (x y): ");
    scanf("%lf %lf", &t.a.x, &t.a.y);

    printf("Enter coordinates of point B (x y): ");
    scanf("%lf %lf", &t.b.x, &t.b.y);

    printf("Enter coordinates of point C (x y): ");
    scanf("%lf %lf", &t.c.x, &t.c.y);

    // Calculate and print the area
    double area = calculate_area(t);
    printf("Area of the triangle: %.2f\n", area);

    return 0;
}