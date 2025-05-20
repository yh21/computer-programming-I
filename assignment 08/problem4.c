#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int count1[26] = { 0 }, count2[26] = { 0 };

    // Prompt user to enter the first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Prompt user to enter the second string
    printf("Enter second string: ");
    scanf("%s", str2);

    // If lengths are different, they cannot be anagrams
    // Print "Anagram: No"
    if (strlen(str1) != strlen(str2))
        printf("Anagram: No");

    // Count frequency of each alphabet letter in both strings
    for (int i = 0; str1[i] != '\0'; i++) {
        // Only consider alphabet characters and normalize to lowercase
        if (isalpha(str1[i]))
            count1[tolower(str1[i]) - 'a']++;
        if (isalpha(str2[i]))
            count2[tolower(str2[i]) - 'a']++;
    }

    // Compare frequency counts of all 26 letters
    // Print "Anagram: No"
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Anagram: No\n");
            return 0;
        }
    }

    // All character frequencies match → strings are anagrams
    // Print "Anagram: Yes"
    printf("Anagram: Yes\n");
    return 0;
}