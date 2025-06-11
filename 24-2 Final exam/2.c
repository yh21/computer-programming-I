#include <stdio.h>

int x = 10;

void function1()
{
    int x = 20;
    printf("x = %d\n", x);
    x = 50;
}

void function2()
{
    printf("x = %d\n", x);
    x = 60;
}

int main()
{
    printf("x = %d\n", x); // 1 x = 10
    function1(); // 2 x = 20
    function2(); // 2 x = 10
    {
        int x = 30;
        printf("x = %d\n", x);
        x = 40;
    } // 3 x = 30
    printf("x = %d\n", x); // 4 x = 10
    
    return 0;
}