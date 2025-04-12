#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("%d\n", (n % 2) == 0);
    return 0;
}