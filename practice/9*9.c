#include <stdio.h>

int main()
{
    int num;
    int i;

    printf("Enter 1~9 integer: ");
    scanf("%d", &num);


    for (i = 1; i <=9; i++)
        printf("%d * %d = %d 입니다.\n", num, i, num * i);

}