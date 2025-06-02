#include <stdio.h>

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
        if (b == 0) {
            printf("Error: division by zero\n");
            return 0;
        }
        return a / b;
    }

    int main() {
        int x, y, op;

        int (*operations[4])(int, int) = { add, subtract, multiply, divide };

        printf("Enter two integers: ");
        scanf("%d %d", &x, &y);

        printf("Choose operation (0:Add, 1:Subtract, 2:Multiply, 3:Divide): ");
        scanf("%d", &op);

        if (op < 0 || op > 3) {
            printf("Invalid operation.\n");
            return 1;
        }

        int result = operations[op](x, y);

        printf("Result: %d\n", result);

        return 0;
    }