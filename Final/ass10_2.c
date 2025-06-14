# include <stdio.h>

int main() {
    int type;         // User choice: 0 for int, 1 for float
    void* data;       // Generic pointer to hold address of any data type

    printf("Choose type (0:int, 1:float): ");
    scanf("%d", &type);

    if (type == 0) {
        int x;
        printf("Enter int value: ");
        scanf("%d", &x);

        data = &x;  // Point to the integer variable

        // Cast void* to unsigned char* for byte-level access
        unsigned char* bytes = (unsigned char*)data;

        printf("Hex representation: ");
        for (int i = 0; i < sizeof(int); i++) {
            printf("%02x ", bytes[i]);  // Print each byte in hexadecimal
        }
        printf("\n");

    }
    else if (type == 1) {
        float y;
        printf("Enter float value: ");
        scanf("%f", &y);

        data = &y;  // Point to the float variable

        // Cast void* to unsigned char* for byte-level access
        unsigned char* bytes = (unsigned char *)data;

        printf("Hex representation: ");
        for (int i = 0; i < sizeof(float); i++) {
            printf("%02x ", bytes[i]);  // Print each byte in hexadecimal
        }
        printf("\n");

    }
    else {
        // Handle invalid input
        printf("Invalid type.\n");
    }

    return 0;
}