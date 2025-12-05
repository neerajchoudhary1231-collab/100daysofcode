// Day 52 - 100 Days of Code
/* Write a program to take a sorted array arr[] and an integer x.
// Find the index (0-based) of the smallest element >= x (ceil of x).
// Print -1 if no such element exists.
// In case of multiple occurrences, print the index of the first one.
*/ 

#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;        
            high = mid - 1;   
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int result = findCeil(arr, n, x);
    printf("%d\n", result);

    return 0;
}
