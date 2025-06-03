#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand((unsigned int) time(NULL));
    int scores[5];

    for (int i = 0; i < 5; i++)
    {
        scores[i] = rand()%100;
        printf("%d\n", scores[i]);
    }
    return 0;
}