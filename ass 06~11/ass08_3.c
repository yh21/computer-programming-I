#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter a character: ");
    scanf("%c", &ch);

    int len = strlen(str);
    int count = 0;

    for (int i = 0l; i < len; i++)
    {
        if (str[i] == ch)
            count += 1;
    }

    printf("Count: %d", count);

    return 0;
}