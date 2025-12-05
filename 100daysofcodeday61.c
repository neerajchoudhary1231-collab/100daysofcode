// Day 61 - 100 Days of Code
/* Write a program to take an integer array arr[] and an integer k as input.
// Print the first negative integer in each subarray of size k moving left to right.
// If no negative exists in a window, print 0 for that window.
// Output results separated by spaces.
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
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;  
            }
        }
        if (!found) {
            printf("0");
        }
        if (i < n - k) printf(" ");
    }

    printf("\n");
    return 0;
}
