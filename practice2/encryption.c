#include <stdio.h>
#include <string.h>
void encrypt(char str[], int shift);

int main()
{
    char str[100];
    int shift = 3;

    printf("enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    encrypt(str, shift);
    return 0;
}

void encrypt(char str[], int shift)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] += shift;
            if (str[i] > 'z')
                str[i] -= 26;
        }
        i++;
    }
    printf("encrypted: %s", str);
}