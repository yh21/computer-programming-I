#include <stdio.h>

// Function to perform XOR cipher
char xor_cipher(char ch, char key) {
    return ch ^ key;
}

int main() {
    char original, key;

    // Prompt the user for input
    printf("Enter a character and a key: ");
    scanf(" %c %c", &original, &key);

    // Encrypt the character using XOR
    char encrypted = xor_cipher(original, key);

    // Decrypt the encrypted character using the same key
    char decrypted = xor_cipher(encrypted, key);

    // Display results
    printf("Original character: %c\n", original);
    printf("Encrypted (ASCII): %d\n", encrypted);   // encrypted as ASCII code
    printf("Decrypted character: %c\n", decrypted); // should match the original

    return 0;
}