// 조건 연산자 연습
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("더 큰 수: %d\n", (a > b) ? a : b);
    printf("더 작은 수: %d\n", (a < b) ? a : b);

    return 0;
}