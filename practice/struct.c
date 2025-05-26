#include <stdio.h>

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    };

    struct student
    {
        int number;
        char name[10];
        struct date dob;
        double grade;
    };

    struct student s1;

    s1.dob.year = 2006;

    return 0;
}