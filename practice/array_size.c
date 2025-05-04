#include <stdio.h>

int main()
{
    int scores[] = {1,2,3,4,5,6};
    int i, size;

    size = sizeof(scores) / sizeof(scores[0]);

    for (i = 0; i < size; i++)
        printf("%d", scores[i]);
    return 0;
}