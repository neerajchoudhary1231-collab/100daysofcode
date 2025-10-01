#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    // Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];  // Assuming max matrix size is 100x100

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add element to sum
        }
    }

    // Output sum of elements
    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
