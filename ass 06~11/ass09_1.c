#include <stdio.h>
#include <math.h>  // for sqrt() function

// Define a 2D point using typedef
typedef struct point{
    double x;
    double y;
} Point;

// Define a triangle using three points
typedef struct triangle{
    Point p1;
    Point p2;
    Point p3;
} Triangle;

// Calculate the Euclidean distance between two points
double distance(Point p1, Point p2) {
    double dis = sqrt((p2.x-p1.x) * (p2.x-p1.x) + (p2.y-p1.y) * (p2.y-p1.y));
    return dis;
}

// Calculate the area of a triangle using Heron's formula
double calculate_area(Triangle t) {
    double side1 = distance(t.p1, t.p2);  // Length of side AB
    double side2 = distance(t.p2, t.p3);  // Length of side BC
    double side3 = distance(t.p3, t.p1);  // Length of side CA
    double s = (side1 + side2 + side3) / 2;  // Semi-perimeter
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));  // Heron's formula
}

int main() {
    Triangle t;

    // Input: coordinates of the three triangle vertices
    printf("Enter coordinates of point A (x y): ");
    scanf("%lf %lf", &t.p1.x, &t.p1.y);

    printf("Enter coordinates of point B (x y): ");
    scanf("%lf %lf", &t.p2.x, &t.p2.y);

    printf("Enter coordinates of point C (x y): ");
    scanf("%lf %lf", &t.p3.x, &t.p3.y);

    // Calculate and print the area
    double area = calculate_area(t);
    printf("Area of the triangle: %.2f\n", area);

    return 0;
}