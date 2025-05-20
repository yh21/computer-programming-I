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
    printf("Reversed: ");
    for (i  = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}