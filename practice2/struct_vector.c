#include <stdio.h>
struct vector get_vector_sum(struct vector a, struct vector b);

struct vector{
    int x;
    int y;
};

int main()
{
    struct vector v1;
    struct vector v2;
    struct vector sum;

    printf("Enter x and y of vector v1: ");
    scanf("%d %d", &v1.x, &v1.y);
    printf("Etner x and y of vector v2: ");
    scanf("%d %d", &v2.x, &v2.y);

    sum = get_vector_sum(v1, v2);

    printf("sum of vector is {%d %d}", sum.x, sum.y);
    return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
    struct vector result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}