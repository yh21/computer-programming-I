# include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Integer division: %d\n", a / b);
    printf("Floating-point division: %.6lf\n", (double)a / b);

    return 0;
}