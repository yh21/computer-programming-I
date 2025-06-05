#include <stdio.h>

int main()
{
    char filename[100];
    
    for (int i = 0; i < 6; i++)
    {
        sprintf(filename, "image%d.jpg", i);
        printf("%s\n", filename);
    }
    return 0;
}