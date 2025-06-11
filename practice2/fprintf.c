#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char fname[100];
    int number = 0, count = 0;
    char name[20];
    double score = 0, total = 0;

    printf("Enter score file name: ");
    scanf("%s", fname);

    if ((fp = fopen(fname, "w")) == NULL)
    {
        fprintf(stderr, "Can't open the score file %s\n", fname);
        exit(1);
    }

    while (1)
    {
        printf("Enter student number, name and score: (if the student number is not negative, end)");
        scanf("%d", &number);
        if (number < 0)
            break;
        scanf("%s %lf", name, &score);
        fprintf(fp, "%d %s %lf", number, name, score);
    }
    fclose(fp);

    if((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the score file %s\n", fname);
        exit(1);
    }
    while (1) {
    printf("Enter student number, name and score (end input with negative number): ");
    if (scanf("%d %s %lf", &number, name, &score) != 3)
        break;
    if (number < 0)
        break;
    fprintf(fp, "%d %s %lf\n", number, name, score);
    }

    printf("Average: %lf", total / count);
    fclose(fp);
    return 0;

}