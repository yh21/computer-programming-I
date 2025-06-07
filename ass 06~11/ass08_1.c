#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for (int i = len; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}