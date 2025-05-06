#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int b[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of Array A: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of Array B: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            printf("Different");
            return 0;
        }
    }
    printf("Same");

    return 0;
}