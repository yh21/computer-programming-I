#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("hello.txt", "w");

    if (fp == NULL)
        printf("Failed to read file");
    else
        printf("Succeed to read file");
    
    fclose(fp);
    return 0;
}