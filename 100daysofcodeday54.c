// Day 54 - 100 Days of Code
/* Write a program to take a positive integer n and find the pivot integer x.
// The pivot x satisfies:
// sum(1 to x) == sum(x to n)
// If no such x exists, print -1.
// At most one pivot will exist.
*/ 

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

  
    int total = n * (n + 1) / 2;

  
    for (int x = 1; x <= n; x++) {
        int left = x * (x + 1) / 2;
        int right = total - (x * (x - 1) / 2);

        if (left == right) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
