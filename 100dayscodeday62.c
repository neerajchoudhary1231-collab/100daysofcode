// Day 62 - 100 Days of Code
/* Write a program to take an integer array arr[] as input.
// Find the maximum sum of any contiguous subarray using Kadane's algorithm.
// If all elements are negative, print the largest element.
*/
// tanaysah 

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++) {
        if (max_ending_here < 0) {
            max_ending_here = arr[i];
        } else {
            max_ending_here += arr[i];
        }

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }

    printf("%d\n", max_so_far);

    return 0;
}
