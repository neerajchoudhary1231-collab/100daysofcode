#include <stdio.h>

int main() {
    int matrix[100][100];
    int i, j, size, isSymmetric = 1;

    // Input matrix size (must be square)
    printf("Enter the size of the square matrix (n for nxn): ");
    scanf("%d", &size);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is symmetric
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    // Output result
    if(isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}
