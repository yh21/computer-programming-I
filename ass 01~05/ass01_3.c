#include <stdio.h>

int main() {
    char c, encrypted, decrypted;
    int key;

    printf("Enter a character and a key: ");
    scanf(" %c %d", &c, &key); // Read a single character and an integer key

    encrypted = c ^ key; // Perform XOR operation for encryption
    decrypted = encrypted ^ key; // Perform XOR operation again for decryption

    printf("Encrypted character: %c\n", encrypted); // Print the encrypted character
    printf("Decrypted character: %c\n", decrypted); // Print the decrypted character

    return 0;
}