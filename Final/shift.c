#include <stdio.h>
#include <string.h>
void encrypt(char ch[], int shift);

int main()
{
    char ch[100];
    printf("Enter string: ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    int shift = 3;

    encrypt(ch, 3);
    return 0;

}

void encrypt(char ch[], int shift)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] += shift;
            if (ch[i] > 'z')
                ch[i] -= 26;
        }
        i++;
    }
    printf("%s", ch);
}