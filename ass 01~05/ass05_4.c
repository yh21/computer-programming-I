#include <stdio.h>

// Recursive function to compute GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
    
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int result = gcd(x, y);
    printf("GCD is %d\n", result);

    return 0;
}