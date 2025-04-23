#include <stdio.h>

void sub()
{
    static int scount = 0;
    int acount = 0;
    printf("%d %d ", scount++, acount++);
}

int a = 10;

int main(void)
{
    int a = 20;
    printf("a = %d\n", a); // a = 20
    sub(); // 0 0
    sub(); // 1 0
    return 0;
}