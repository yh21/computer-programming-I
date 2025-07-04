#include <stdio.h>
#include <math.h>

double f1(double k);
double f2(double k);
double formula(double (*pf)(double), int n);

int main()
{
    printf("%f\n", formula(f1, 10));
    printf("%f\n", formula(f2, 10));

    return 0;
}

double formula(double (*pf)(double), int n){
    double sum = 0;
    for (int i = 1; i < n; i++)
        sum += pf(i) * pf(i) + pf(i) + 1;
    return sum;
}

double f1(double k){
    return 1.0 / k;
}

double f2(double k){
    return cos(k);
}