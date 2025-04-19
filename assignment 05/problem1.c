#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess, d1, d2, sum, rand1, rand2;

    printf("Enter your guess for the sum of two dice: ");
    scanf("%d", &guess);

    srand(0);  // Fixed seed for reproducibility
    
    rand1 = 1 + (rand()%6);
    rand2 = 1 + (rand()%6);
    sum = rand1 + rand2;

    if (guess == sum) {
        printf("Correct! The sum is %d\n", sum);
    } else {
        printf("Wrong. The sum is %d\n", sum);
    }

    return 0;
}