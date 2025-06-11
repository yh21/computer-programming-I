#include <stdio.h>

// Define functions for each arithmetic operation
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    // Check for division by zero
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    int x, y, op;

    // Declare an array of function pointers
    int (*operation[4])(int, int)= {add, subtract, multiply, divide};


    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Prompt user to select operation
    printf("Choose operation (0:Add, 1:Subtract, 2:Multiply, 3:Divide): ");
    scanf("%d", &op);

    // Check for invalid operation
    if (op < 0 || op > 3) {
        printf("Invalid operation.\n");
        return 1;
    }

    // Call the selected function using the function pointer
    int result = operation[op](x, y);


    printf("Result: %d\n", result);

    return 0;
}