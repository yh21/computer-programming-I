#include <stdio.h>

int main()
{
    unsigned int num;
    printf("demical number: ");
    scanf("%d", &num);

    unsigned int mask = 1 << 7;
    printf("이진수 : ");

    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;
    ((num & mask) == 0) ? printf("0") : printf("1");
    printf("\n");
}