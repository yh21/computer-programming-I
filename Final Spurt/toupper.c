#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if(isupper(ch) == 0)
            ch = toupper(ch);
        putchar(ch);
    }

    return 0;
}