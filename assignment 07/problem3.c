#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");

    // Read 5 integers into the array
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    int* p = arr;

    // Increase each element by 1 using the pointer
    for (int i = 0; i < 5; i++)
        *(arr + i) += 1;

    // // Print updated array elements
    printf("Result: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));

    printf("\n");
    return 0;
}