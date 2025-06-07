#include <stdio.h>

int main()
{
    int n;
    int *p;

    p = &n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Doubled value: %d", (*p * 2));
    return 0;
}