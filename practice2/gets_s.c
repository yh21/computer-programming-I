#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // mac에서는 gets_s 사용 불가... gets_s(name, sizeof(name)) 하면 됨
    name[strcspn(name, "\n")] = '\0'; // \n 제거

    printf("my name is %s", name);
    return 0;
}