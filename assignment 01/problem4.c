# include <stdio.h>

int main()
{
    char c;

    printf("Enter a lowercase letter: ");
    scanf("%c", &c);

    c = c - 32;

    printf("Uppercase: %c\n", c);
    return 0;
}