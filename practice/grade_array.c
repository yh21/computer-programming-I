#include <stdio.h>
#define ROWS 3
#define COLS 5

int main()
{
    int score[ROWS][COLS] = {
        {87, 98, 80, 76, 3},
        {99, 89, 90, 90, 0},
        {65, 68, 50, 49, 0}
    };

    for (int i = 0; i < ROWS; i++)
        {
            double final_score = score[i][0] * 0.3 + score[i][1] * 0.4 + score[i][2] * 0.2 + score[i][3] * 0.1 - score[i][4];
            printf("%d student's score is %lf", i, final_score);
        }
    return 0;
}