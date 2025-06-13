#include <stdio.h>
#include <stdlib.h>

int main()
{
    int student;
    printf("Enter members of student: ");
    scanf("%d", &student);

    int *list;
    int sum = 0;
    list = (int *) malloc(student * sizeof(int));
    for (int i = 0; i < student; i++)
    {
        printf("Enter %d's score: ", i+1);
        scanf("%d", &list[i]);
        sum += list[i];
    }

    printf("average: %lf", (double)sum / student);
    return 0;
        
}