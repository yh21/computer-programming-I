# include <stdio.h>

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        // Read each number into the array
        scanf("%d", &arr[i]);

    int* p = arr;

    // Print the second element using pointer arithmetic
    printf("Second: %d\n", *(arr + 1));

    // Print the fourth element using pointer arithmetic
    printf("Fourth: %d", *(arr + 3));

    return 0;
}