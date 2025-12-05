// Day 65 - 100 Days of Code
/* Write a program to take two strings s and t as input (all lowercase).
// Determine if s and t are valid anagrams (same characters with same frequency).
// Print "Anagram" or "Not Anagram".
*/ 

#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 26  

int main() {
    char s[1000], t[1000];
    printf("Enter first string:\n");
    scanf("%s", s);
    printf("Enter second string:\n");
    scanf("%s", t);

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    int freqS[CHAR_RANGE] = {0};
    int freqT[CHAR_RANGE] = {0};

    for (int i = 0; i < lenS; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    for (int i = 0; i < CHAR_RANGE; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
