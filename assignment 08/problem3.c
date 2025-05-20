#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;
    int len;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note: the space before %c skips the newline character

    // Count the occurrences of the character in the string
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
            count++;
    }

    // Print the result
    printf("Count: %d", count);

    return 0;
}