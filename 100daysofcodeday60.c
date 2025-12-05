// Day 60 - 100 Days of Code
/* Write a program to take an integer array arr[] and an integer k as input.
// Print the maximum element in each subarray of size k (sliding window).
// Output elements separated by spaces.
*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size\n");
        return 0;
    }

    
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d", max);
        if (i < n - k) printf(" ");
    }

    printf("\n");
    return 0;
}
