// Day 53 - 100 Days of Code
/* Write a program to take an array of integers as input and find the pivot index.
// Pivot index = index where left sum == right sum.
// If index is at the left edge, left sum = 0.
// If index is at the right edge, right sum = 0.
// Print the LEFTMOST pivot index. If none exists, print -1.
*/
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

    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;    
        }

        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}

