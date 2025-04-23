#include <stdio.h>

int main()
{
    int input, output;

    printf("Enter a number: ");
    scanf("%d", &input);

    // Use ternary operator
    output = (input > 0) ? ((input > 100) ? 100 : input) : 0;

    printf("Result: %d\n", output);

    return 0;
}