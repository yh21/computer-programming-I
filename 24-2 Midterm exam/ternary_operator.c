#include <stdio.h>

int main()
{
    int input, output;

    printf("Enter a number: ");
    scanf("%d", &input);

    // Use ternary operator
    output = (input < 0) ? 0 : input;
    output = (output > 100 ? 100 : output);

    printf("Result: %d\n", output);

    return 0;
}