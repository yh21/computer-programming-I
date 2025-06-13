#include <stdio.h>

void calculateSum(void *array, int size, char type)
// Cast the void pointer to the correct type based on 'type' argument
{
    if (type == 'i')
    { // Integer array
        int* arr = (int *)array;
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        printf("Sum of integer array: %d\n", sum);
    }
    else if (type == 'f')
    { // Float array
        float* arr = (float *)array;
        float sum = 0.0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
    printf("Sum of float array: %.2f\n", sum);
    }
}

int main()
{
    // Define an integer array and a float array
    int intArray[] = { 1, 2, 3, 4, 5 };
    float floatArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    // Calculate the sum of the integer array
    calculateSum(intArray, 5, 'i');
    // Calculate the sum of the float array
    calculateSum(floatArray, 5, 'f');
    return 0;
}