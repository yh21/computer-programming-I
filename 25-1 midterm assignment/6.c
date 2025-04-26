#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random seed
    srand((unsigned)time(NULL));

    // Generate two random numbers between 1 and 6
    int d1 = 1 + (rand()%6);
    int d2 = 1 + (rand()%6);

    // Display the result
    printf("Rolling two dice... ");
    printf("Die 1: %d", d1);
    printf("Die 2: %d", d2);
    printf("Sum: %d", d1 + d2);

    return 0;
}