#include <stdio.h>

int main()
{
    double divisor = 1, divident = 4, sum = 0;
    int loop_count;
    printf("Enter loop count: ");
    scanf("%d", &loop_count);

    for (int i = 1; i < loop_count; i++)
    {
        sum = sum + divident / divisor;
        divident = -divident;
        divisor += 2;
    }
    printf("pi is %.14lf", sum);
}