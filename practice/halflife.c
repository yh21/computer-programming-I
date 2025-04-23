#include <stdio.h>

int main()
{
    int halflife;
    int year = 0;
    double amount = 100;
    double want;

    printf("반감기를 입력하시오(년): ");
    scanf("%d", &halflife);
    printf("얼마이하: ");
    scanf("%lf", &want);

    while(amount >= want * 100)
    {
        year += halflife;
        amount *= 0.5;
        printf("%d년 후에 남은 양 = %lf\n", year, amount);
    }
    printf("%lf 이하로 되기까지 걸린 시간 = %d년", want, year);
}