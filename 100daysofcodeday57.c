// Day 57 - 100 Days of Code
/* Write a program to take an array arr[] of integers as input,
// and find the Previous Greater Element (PGE) for each element.
// PGE = nearest element on the LEFT that is greater than current element.
// If none exists, output -1.
// Print the result in comma separated format.
// Use brute force (nested loop), DO NOT use stack.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], pge[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n; i++) {
        pge[i] = -1;  

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break; 
            }
        }
    }

   
    for (int i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if (i < n - 1) printf(",");
    }

    printf("\n");
    return 0;
}
