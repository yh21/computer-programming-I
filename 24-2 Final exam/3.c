#include <stdio.h>

// Function to print a 4x3 array
void printArray(int arr[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }
}
int main()
{
    // Define a 4x3 array
    int array[4][3] =
    {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
    };
    // Call the function to print the 4x3 array
    printArray(array);
    return 0;
}