#include <stdio.h>


struct point{
    int x;
    int y;
};

struct rect{
    struct point p1;
    struct point p2;
};

int main()
{
    double area;
    double circumference;
    struct rect r1;

    printf("Enter right up point of x and y: ");
    scanf("%d %d", &r1.p1.x, &r1.p1.y);
    printf("Enter left down point of x and y: ");
    scanf("%d %d", &r1.p2.x, &r1.p2.y);

    area = (r1.p1.x - r1.p2.x) * (r1.p1.y - r1.p2.y);
    circumference = 2 * (r1.p1.x - r1.p2.x) + 2 * (r1.p1.y - r1.p2.y);

    printf("area is %lf\n", area);
    printf("circumference is %lf\n", circumference);

    return 0;
}