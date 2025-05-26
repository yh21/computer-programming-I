#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct rect
{
    struct point p1;
    struct point p2;
};

int main()
{
    struct rect r;
    int w, h, area, peri;

    printf("왼쪽 하단: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("오른쪽 상단: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * (w + h);

    printf("area is %d and peri is %d", area, peri);

    return 0;
}