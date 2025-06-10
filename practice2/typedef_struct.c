#include <stdio.h>

typedef struct point{
    int x;
    int y;
} POINT;

int main()
{
    POINT a, b;
    printf("Enter a.x and a.y: ");
    scanf("%d %d", &a.x, &a.y);
    printf("Enter b.x and b.y: ");
    scanf("%d %d", &b.x, &b.y);

    POINT sum;
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;

    printf("sum of the vector is {%d,%d}", sum.x, sum.y);

    return 0;
}