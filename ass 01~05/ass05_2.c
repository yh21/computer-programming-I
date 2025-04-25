#include <stdio.h>

// Global variable to store total
int total;

// Add function using global variable
void add(int x) {
    total += x;
}

int main() {
    int n, num;
    printf("Enter number of values: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        add(num);
    }

    printf("Total = %d\n", total);
    return 0;
}