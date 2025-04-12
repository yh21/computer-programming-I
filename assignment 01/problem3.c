# include <stdio.h>

int main() {
    char c, encrypted, decrypted;
    int key;

    printf("Enter a character and a key: ");
    scanf("%c %d", &c, &key);

    encrypted = c ^ key;
    decrypted = encrypted ^ key;

    printf("Encrypted character: %c\n", encrypted);
    printf("Decrypted character: %c\n", decrypted);

    return 0;
}