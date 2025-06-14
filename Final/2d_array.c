#include <stdio.h>
#define ROWS 3
#define COLS 5

int main()
{
    int score[ROWS][COLS] = {
        {87, 98, 80, 76, 3},
        {99, 89, 90, 76, 0},
        {65, 68, 50, 49, 0}
    };

    for (int i = 0; i < 3; i++)
    {
        printf("#%d's score: ", i + 1);
        printf("%lf\n", score[i][0] * 0.3 + score[i][1] * 0.4 + score[i][2] * 0.2 + score[i][3] * 0.1 - score[i][4]);
    }

    return 0;


}