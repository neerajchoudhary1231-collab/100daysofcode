// Day 58 - 100 Days of Code
/* Write a program to take an integer array nums[],
// and print answer[] such that answer[i] is the product of all
// elements in nums except nums[i].
// The product of any prefix or suffix fits in 32-bit integer.
*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) printf(" ");
    }

    printf("\n");
    return 0;
}
