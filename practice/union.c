#include <stdio.h>

union example
{
    int i;
    char c;
};

int main()
{
    union example v;

    v.c = 'A';
    printf("v.c:%c, v.i:%i\n", v.c, v.i);

    v.i = 10000;
    printf("v.c:%c, v.i:%i\n", v.c, v.i);

    return 0;
}