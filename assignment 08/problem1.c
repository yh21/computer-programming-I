#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%s", str);


    // Calculate length
    len = strlen(str);

    // Print reversed string
    for (int i  = len; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}