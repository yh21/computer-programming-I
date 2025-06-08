#include <stdio.h>
#include <stdlib.h>

// Function to allocate a 2D array dynamically
int** allocate_2d_array(int rows, int cols) {
    int** arr = (int**)malloc(rows * sizeof(int*));
    if (arr == NULL) return NULL;

    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if (arr[i] == NULL) return NULL;
    }

    return arr;
}

// Function to free a 2D array
void free_2d_array(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
}

// Function to read values into the array
void read_2d_array(int** arr, int rows, int cols) {
    printf("Enter the elements (%d rows, %d columns):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to compute and print row sums
void print_row_sums(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        printf("Row %d sum: %d\n", i + 1, sum);
    }
}

int main() {
    int N, M;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &N, &M);

    int** array = allocate_2d_array(N, M);
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    read_2d_array(array, N, M);
    print_row_sums(array, N, M);
    free_2d_array(array, N);

    return 0;
}