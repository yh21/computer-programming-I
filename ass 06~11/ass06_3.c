#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int A[100];
    int B[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of Array A: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter elements of Array B: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            result = 1;
            break;
        }
    }

    if (result == 1)
        printf("different");
    else
        printf("same");
    return 0;

}