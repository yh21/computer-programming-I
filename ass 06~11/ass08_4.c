#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Not anagram");
        return 0;
    }
    
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1[tolower(str1[i]) - 'a']++;
        count2[tolower(str2[i]) - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("Not anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}