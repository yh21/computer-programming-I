#include <stdio.h>
int main(void)
{
    printf("%d %d\n", 7 / 4, 7 % 4); // 1 3

    int i = 0, j = 0;
    printf("%d %d\n", i++, ++j); // 0 1

    int a = -2;
    printf("%d\n", a > 0 ? a : -a); // 2

    int x = 2, y = 3;
    x *= y + 1;
    printf("%d\n", x); // 8

    int u = 2, v = 3;
    printf("%d %d\n", u = 3, v == v); // 3 1

    int n = 4;
    if (n == 0)
    printf("A");
    else if (n > 3)
    printf("B");
    else
    printf("C"); // B
    printf("\n");
}