// Day 64 - 100 Days of Code
/* Write a program to take a string s as input.
// Find the length of the longest substring without repeating characters and print it.
*/
 
#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256
int main() {
    char s[1000];
    printf("Enter the string:\n");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[CHAR_RANGE];

   
    for (int i = 0; i < CHAR_RANGE; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0;  

    for (int i = 0; i < n; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1;
        }

        lastIndex[(int)s[i]] = i;
        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}
