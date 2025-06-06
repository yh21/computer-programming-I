#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int even = 0;
    int odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }

    printf("Even: %d\nOdd: %d", even, odd);

    return 0;
}