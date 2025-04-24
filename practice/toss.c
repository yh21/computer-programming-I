#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int coin_toss();

int main()
{
    int toss;
    int heads = 0;
    int tails = 0;
    printf("how many tosses: ");
    scanf("%d", &toss);

    srand((unsigned)time(NULL));
    for (int i = 0; i < toss; i++)
        if (coin_toss() == 1)
            heads += 1;
        else
            tails += 1;
    printf("앞면이 나온 횟수는 %d\n", heads);
    printf("뒷면이 나온 횟수는 %d\n", tails);

}

int coin_toss()
{
    if ((rand()) % 2 == 0)
        return 1;
    else
        return 0;
}