#include <stdio.h>

int main() {
    int matrix[100][100];
    int n, i, j, sum = 0;

    // Input size of square matrix
    printf("Enter the size of the square matrix (n for nxn): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Output result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
