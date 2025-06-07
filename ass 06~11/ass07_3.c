#include <stdio.h>

int main()
{
    int arr[5];
    int *p = arr;

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    
    printf("Result: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", p[i] + 1);

    return 0;
}