#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main()
{
    struct point p1;
    struct point p2;

    printf("Enter x and y point of p1: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Etner x and y point of p2: ");
    scanf("%d %d", &p2.x, &p2.y);

    printf("distance is %lf", sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y)));
}