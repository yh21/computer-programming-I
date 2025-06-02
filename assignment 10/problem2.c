#include <stdio.h>

int main() {
    int type;
    void* data;

    printf("Choose type (0:int, 1:float): ");
    scanf("%d", &type);

    if (type == 0) {
        int x;
        printf("Enter int value: ");
        scanf("%d", &x);

        data = &x;
        unsigned char* bytes = (unsigned char*)data;

        printf("Hex representation: ");
        for (int i = 0; i < sizeof(int); i++) {
            printf("%02x ", bytes[i]);
        }
        printf("\n");

    }
    else if (type == 1) {
        float y;
        printf("Enter float value: ");
        scanf("%f", &y);

        data = &y;
        unsigned char* bytes = (unsigned char*)data;

        printf("Hex representation: ");
        for (int i = 0; i < sizeof(float); i++) {
            printf("%02x ", bytes[i]);
        }
        printf("\n");

    }
    else {
        printf("Invalid type.\n");
    }

    return 0;
}