#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int even = 0;
    int odd = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", & a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d", odd);

    return 0;
}