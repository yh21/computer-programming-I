#include <stdio.h>

int main()
{
    char letter;

    while(1)
    {
    printf("소문자를 입력하시오: ");
    scanf("%c", &letter);

    if (letter == 'Q')
        break;
    if (letter < 'a' || letter > 'z')
        continue;

    letter = letter - 32;
    printf("capital is %c\n", letter);
    }
}