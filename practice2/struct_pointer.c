#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

struct student{
    char name[20];
    struct date *dob;
};

int main()
{
    struct date d = {2006, 2, 21};
    struct student s1 = {"yunhyung"};
    s1.dob = &d;

    printf("name of s1 is %s\n", s1.name);
    printf("birthday of s1 is %d %d %d\n", s1.dob->year, s1.dob->month, s1.dob->day);
    return 0;
}