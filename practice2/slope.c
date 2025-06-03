#include <stdio.h>
int get_line(int x1, int x2, int y1, int y2, double *slope, double *yintercept);

int main()
{
    double s, y;
    if (get_line(3, 3, 6, 6, &s, &y) == -1)
        printf("error");
    else
        printf("slope is %lf, yintercept is %lf", s, y);

    return 0;
}

int get_line(int x1, int y1, int x2, int y2, double *slope, double *yintercept)
{
    if (x1 == x2)
        return -1;
    else
    {
        *slope = (double)(y2 - y1) / (double)(x2 - x1);
        *yintercept = y1 - (*slope) * x1;
        return 0;
    }
}