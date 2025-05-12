#include <stdio.h>

// Swap two integers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Call swap with addresses of x and y
    swap(&x, &y);

    printf("After swap: %d %d\n", x, y);
    return 0;
}