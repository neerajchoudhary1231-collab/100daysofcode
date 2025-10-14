#include <stdio.h>

int main() {
    int matrix[100][100];
    int diagonal[100]; // To store diagonal elements
    int n, i, j, isDistinct = 1;

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

    // Store diagonal elements
    for(i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    // Check for duplicates in the diagonal elements
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }

    // Output result
    if(isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT all distinct.\n");

    return 0;
}
