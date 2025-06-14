#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] = {28, 81, 60, 83, 67, 10, 66, 97, 37, 94};
    for (int i = 0; i < 30; i++)
        printf("*");
    printf("\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", i + 1);
    printf("\n");
    for (int i = 0; i < 30; i++)
        printf("*");
    printf("\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int minimum = arr[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (minimum > arr[i])
            minimum = arr[i];
    }

    printf("minimum is %d", minimum);

    return 0;
}