#include <stdio.h>
#include <string.h>

int main()
{
    char message[100];
    int key[4];
    char encrypted[100];
    char decrypted[100];

    printf("Enter messages: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    printf("Enter 4-byte key in hex: ");
    for (int i = 0; i < 4; i++)
        scanf("%x", &key[i]);

    int len = strlen(message);
    printf("encrypted: ");
    for (int i = 0; i < len; i++)
    {
        encrypted[i] = message[i] ^ key[i % 4];
        printf("%02X ", encrypted[i]);
    }
    printf("\n");

    printf("decrypted: ");
    for (int i = 0; i < len; i++)
    {
        decrypted[i] = encrypted[i] ^ key[i % 4];
        printf("%c", decrypted[i]);
    }
    printf("\n");

    return 0;
}