#include <stdio.h>

int main() {
    int score, absences;

    // Prompt the user to enter score and number of absences
    printf("Enter the score and number of absences: ");
    scanf("%d %d", &score, &absences);

    // Determine the grade based on score and absence policy
    if (absences >= 3)
        printf("Grade: F");
    else
        {
        if (score >= 90)
            printf("Grade: A");
        else if (score >= 80)
            printf("Grade: B");
        else if (score >= 70)
            printf("Grade: C");
        else if (score >= 60)
            printf("Grade: D");
        else
            printf("Grade: F");
        }

    return 0;
}