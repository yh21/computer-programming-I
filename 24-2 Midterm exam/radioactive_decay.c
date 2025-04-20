#include <stdio.h>

int main()
{
    int initial_amount, remaining_amount;
    int half_life, threshold;
    int years = 0;

    printf("Enter the initial amount of the substance: ");
    scanf("%d", &initial_amount);
    printf("Enter the half-life period (in years): ");
    scanf("%d", &half_life);
    printf("Enter the threshold amount: ");
    scanf("%d", &threshold);

    remaining_amount = initial_amount;

    while (remaining_amount >= threshold)
    {
        remaining_amount = remaining_amount / 2;
        years = years + half_life;

    }
    printf("It will take %d years.\n", years);

    return 0;
}