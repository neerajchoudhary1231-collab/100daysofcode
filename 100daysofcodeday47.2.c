// Day 47.2 - 100 Days of Code
//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(char *str) {
    char word[100], longest[100] = "";
    int i = 0, j = 0, maxLen = 0;
    
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }
    
    if (j > 0) {
        word[j] = '\0';
        if (j > maxLen) {
            strcpy(longest, word);
            maxLen = j;
        }
    }
    
    if (maxLen > 0) {
        printf("Longest word: %s\n", longest);
        printf("Length: %d\n", maxLen);
    } else {
        printf("No word found.\n");
    }
}

int main() {
    char str[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    findLongestWord(str);
    
    return 0;
}