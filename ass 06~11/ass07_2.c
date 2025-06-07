#include <stdio.h>

int main()
{
    int num[5];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &num[i]);
    
    int *p = num;
    printf("Second: %d\n", p[1]);
    printf("Fourth: %d", p[3]);

    return 0;
}