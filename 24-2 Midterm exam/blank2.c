#include <stdio.h>

int main(void)
{
    int choice = 2;
    switch (choice)
    {
        case 1: printf("One! ");
        case 2: printf("Two! ");
        case 3: printf("Three! ");
        default: printf("Try again!!!\n"); // Two! Try again!!!
    }
    for(int i=0; i < 10; i++)
    {
        if (i == 2) continue;
        if (i > 3) break;
        printf("%d", i); // 013
    }
}