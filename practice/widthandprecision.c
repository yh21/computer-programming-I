#include <stdio.h>

int main()
{
    printf("%10d\n", 123);
    printf("%-10d\n", 123);
    printf("%10.3f\n", 1.23456789);
    printf("%15.3f\n", 1.23456789);
    printf("%-10.3f\n", 1.23456789);

    return 0;

}