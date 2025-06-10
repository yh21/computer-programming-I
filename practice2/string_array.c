#include <stdio.h>

int main()
{
    char *fruits[] = {
        "apple", // fruits[0]은 "apple"이라는 문자열의 주소를 가리키고 있음.
        "banana",
        "grape"
    };

    int n = sizeof(fruits) / sizeof(fruits[0]);

    for (int i = 0; i < n; i++)
        printf("%s\n", fruits[i]);

    return 0;
}