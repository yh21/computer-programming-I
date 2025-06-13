#include <stdio.h>
#include <math.h>

double formula(double (*pf)(double), int n)
{
    double sum = 0;
    for (int i = 1; i < n; i++)
        sum += pf(i) * pf(i) + pf(i) + 1;
    return sum;
}

double f1(double k)
{
    return 1 / k;
}

double f2(double k)
{
    return cos(k);
}

int main()
{
    printf("if f(k) = 1 / k\n");
    printf("%lf\n", formula(f1, 10));
    printf("if f(k) = cos(k)\n");
    printf("%lf\n", formula (f2, 10));
    return 0;
}