#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int result = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
            result = 1;
    }

    if (result == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;

}