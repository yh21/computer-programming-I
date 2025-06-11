#include <stdio.h>
void updateValue(int** doublePtr) {
    **doublePtr = 100;
}
int main(void) {
    int number = 42; // Assume the address of number is 000000D2C44FF774
    int* pointer = &number;
    printf("number = %d, pointer = %p\n", number, &number); // 1 number = 42, pointer = 000000D2C44FF774
    printf("number = %d, pointer = %p\n", *pointer, pointer); // 2 number = 42, pointer = 000000D2C44FF774
    (*pointer)++;
    printf("number = %d, pointer = %p\n", number, pointer); // 3 number = 43, pointer = 000000D2C44FF774
    *pointer++;
    printf("number = %d, pointer = %p\n", number, pointer); // 4 number = 43, pointer = 000000D2C44FF778
    int value = 42; // Assume the address of value is 000000D2C44FF7B4
    int* ptr = &value; // Assume the address of ptr is 000000D2C44FF7D8
    int** doublePtr = &ptr;
    printf("value = %d, ptr = %p, doublePtr = %p\n", value, ptr, doublePtr); // 5 value = 42, ptr = 000000D2C44FF7D8, doublePtr = 000000D2C44FF7D8
    updateValue(doublePtr);
    printf("value = %d, ptr = %p, doublePtr = %p\n", value, ptr, doublePtr); // 6 value = 100, ptr = 000000D2C44FF7D8, doublePtr = 000000D2C44FF7D8; 
    return 0;
}