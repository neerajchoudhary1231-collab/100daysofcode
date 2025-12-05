// Day 59 - 100 Days of Code
/* Write a program to take an integer array arr[] and an integer k as input.
// Print the maximum sum of all subarrays of size k.
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

   
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

   
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
