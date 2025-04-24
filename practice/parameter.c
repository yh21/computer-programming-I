#include <stdio.h>
void inc(int counter);

int main()
{
    int i;

    i = 10;
    printf("%d", i);
    inc(i);
    printf("%d", i);
    return 0;
}
void inc(int counter)
{
    counter++;
}