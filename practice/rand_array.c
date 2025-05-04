#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main()
{
    srand((unsigned)time(NULL));
    int scores[SIZE];

    for (int i = 0; i < SIZE; i++)
        scores[i] = 1 + rand()%100;

    for (int i = 0; i < SIZE; i++)
        printf("scores[%d] is %d\n", i, scores[i]);

    return 0;
}