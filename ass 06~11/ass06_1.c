#include <stdio.h>
#include <string.h>

int main()
{
    char message[100];
    char key[4];
    char encrypted[100];
    char decrypted[100];

    printf("Input message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    int len = strlen(message);

    printf("Enter 4-byte key in hex (e.g., 01 02 03 04): ");
    for (int i = 0; i < 4; i++)
    {
        int temp;
        scanf("%X", &temp);
        key[i] = temp;
    }

    printf("Encrypted: ");

    for (int i = 0; i < len; i++)
    {
        encrypted[i] = message[i] ^ key[i % 4];
        printf("%X ", encrypted[i]);
    }
    printf("\n");

    printf("Decrypted: ");

    for (int i = 0; i < len; i++)
    {
        decrypted[i] = encrypted[i] ^ key[i % 4];
        printf("%c", decrypted[i]);
    }

    return 0;

}