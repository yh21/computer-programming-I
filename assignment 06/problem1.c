#include <stdio.h>
#include <string.h>

int main()
{
    char message[101];
    unsigned char key[4];
    unsigned char encrypted[101];
    unsigned char decrypted[101];
    printf("Input message: ");
    scanf(" %[^\n]s", message);

    int len = strlen(message);

    printf("Enter 4-byte key in hex (e.g., 01 02 03 04): ");
    for (int i = 0; i < 4; i++)
    {
        unsigned int temp;
        scanf("%x", &temp);
        key[i] = temp;
    }

    for (int i = 0; i < len; i++){
        encrypted[i] = message[i] ^ key[i % 4];
    }

    printf("Encrypted: ");
    for (int i = 0; i < len; i++) {
        printf("%02X ", encrypted[i]);
    }
    printf("\n");

    for (int i = 0; i < len; i++) {
        decrypted[i] = encrypted[i] ^ key[i % 4];
    }

    decrypted[len] = '\0';

    printf("Decrypted: %s\n", decrypted);

    return 0;



}