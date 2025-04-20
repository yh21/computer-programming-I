#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL)); // Initialize random number generator
    char input_char;
    printf("Enter a character to encrypt: ");
    scanf("%c", &input_char);
    printf("Original character: %c\n", input_char);
    char key = rand()%256; // Generate a random key (0 to 255)
    printf("Key: %d\n", key);
    char encrypted_char = input_char ^ key;
    printf("Encrypted character: %c\n", encrypted_char);
    char decrypted_char = encrypted_char ^ key;
    printf("Decrypted character: %c\n", decrypted_char);
    return 0;
}