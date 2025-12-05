// Day 56 - 100 Days of Code
/* Write a program to take an array arr[] and find the Next Greater Element for each element.
// NGE = nearest element on the right that is greater than the current element.
// If none exists, print -1.
// Print answers in comma-separated format.
// Use brute force (nested loops), do NOT use stack.
*/ 
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], nge[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    for (int i = 0; i < n; i++) {
        nge[i] = -1;  

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; 
            }
        }
    }

  
    for (int i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if (i < n - 1) printf(","); 
    }

    printf("\n");
    return 0;
}
