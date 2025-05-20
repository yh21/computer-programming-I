#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, is_palindrome = 1;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the input string is a palindrome
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == str[len - i - 1])
            is_palindrome = 1;
        else
        {
            is_palindrome = 0;
            break;
        }
    }

    // Print the result 
    // ("Palindrome: Yes" if palindrome, otherwise "Palindrome: No")
    if (is_palindrome != 0)
        printf("Palindrome: Yes");
    else
        printf("Palindrome: No");

    return 0;
}