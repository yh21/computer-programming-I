#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Use the pointer to double the value of num
    int* ptr = &num;
    *ptr *= 2;

    printf("Doubled value: %d\n", num);
    return 0;
}
