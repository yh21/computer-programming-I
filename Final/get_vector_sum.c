#include <stdio.h>

struct vector{
    int x;
    int y;
};

struct vector get_vector_sum(struct vector *v1, struct vector *v2){
    struct vector sum;
    sum.x = v1->x + v2->x;
    sum.y = v1->y + v2->y;
    return sum;
};

int main()
{
    struct vector sum;
    struct vector v1 = {1, 5};
    struct vector v2 = {6, 4};
    sum = get_vector_sum(&v1, &v2);

    printf("{%d, %d}", sum.x, sum.y);
    return 0;
}