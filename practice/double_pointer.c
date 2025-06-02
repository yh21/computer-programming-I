#include <stdio.h>

void set_pointer(char **q);

int main()
{
    char *p;
    set_pointer(&p);

    printf("%s", p);
    return 0;
}

void set_pointer(char **q)
{
    *q = "asdf";
}