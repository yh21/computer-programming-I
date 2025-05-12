#include <stdio.h>
void swap(int *px, int *py);

int main()
{
    int a = 100;
    int b = 200;

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d", b);

}

void swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}