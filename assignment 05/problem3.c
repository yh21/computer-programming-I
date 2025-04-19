#include <stdio.h>

// Declare the function defined in another file
extern int is_prime(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (is_prime(i) != 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}