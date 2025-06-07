#include <stdio.h>
void swap(int *p, int *q);

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swap: %d %d", a, b);
    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *q;
    *q = *p;
    *p = temp;
}