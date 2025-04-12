#include <stdio.h>

int main()
{
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    printf("%d %d %d %d\n", n / 1000, (n % 1000) / 100, (n % 100) / 10, (n % 10) / 1 );
    return 0;
}