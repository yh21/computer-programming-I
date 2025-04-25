#include <stdio.h>

int is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d\n", is_prime(n));

    return 0;
}