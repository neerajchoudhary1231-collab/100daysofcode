//day68- 100 days of code
//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n-1];  
    int sum = 0;

    printf("Enter %d elements (from 0 to %d, missing one number):\n", n-1, n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int totalSum = n * (n + 1) / 2; 
    int missing = totalSum - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
