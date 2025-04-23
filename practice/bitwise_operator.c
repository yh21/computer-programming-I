#include <stdio.h>

int main()
{
    int a = 32;

    a = ~a;
    a = a + 0x01;
    printf("a = %d", a);
    
    return 0;
}