// Day 55 - 100 Days of Code
/* Write a program to take an integer array nums of size n,
// and print the Majority Element (appears strictly more than floor(n/2) times).
// If no such element exists, print -1.
// Note: Majority Element is NOT necessarily the element that appears the most.
*/
 

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

   
    int candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

   
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            freq++;
    }

    if (freq > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
