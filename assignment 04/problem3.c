#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n)
{
    int i;

    for ( i = 2; i < n; i++ )
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