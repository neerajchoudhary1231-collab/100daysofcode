//day69- 100 days of code
//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int seen[n+1];  
    for (int i = 0; i <= n; i++)
        seen[i] = 0;

    
    printf("Enter %d elements (1 to %d, with one repeated):\n", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int repeated = -1;

    
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        seen[arr[i]] = 1;
    }

    printf("Repeated element: %d\n", repeated);

    return 0;
}