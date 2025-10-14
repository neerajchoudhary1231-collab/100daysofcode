#include <stdio.h>

int main() {
    int A[100][100], B[100][100], result[100][100];
    int m, n, p, q;

    // Input dimensions
    printf("Enter rows and columns of first matrix (A): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix (B): ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }

    // Input first matrix
    printf("Enter elements of first matrix (A):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix (B):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
