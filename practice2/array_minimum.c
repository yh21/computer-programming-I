#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    srand((unsigned int) time(NULL));
    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 250;
        printf("%d  ", array[i]);
    }

    int minimum = array[0];

    for (int i = 0; i < SIZE; i++)
        if (array[i] < minimum)
            minimum = array[i];

    printf("\n%d", minimum);

    return 0;

}