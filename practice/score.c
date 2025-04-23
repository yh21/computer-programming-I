#include <stdio.h>

int main()
{
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score > 90)
        printf("your grade is A");
    else if (score > 80)
        printf("your grade is B");
    else if (score > 70)
        printf("your grade is C");
    else if (score > 60)
        printf("your grade is D");
    else
        printf("YOU ARE F!!");

    return 0;
}