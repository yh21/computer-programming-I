#include <stdio.h>

int main()
{
    int grade = 0;
    int sum = 0;
    int n = 0;

    printf("성적 입력을 종료하려면 음수를 입력하시오\n");
    while (grade >= 0)
    {
        printf("Enter your grade: ");
        scanf("%d", &grade);
        sum += grade;
        n++;
    }
    sum -= grade;
    n--;

    double average = (double)sum / n;

    printf("your average is %.30lf", average);
}