// Day 48.2 - 100 Days of Code
//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseEachWord(char *str) {
    char *wordStart = NULL;
    char *temp = str;
    
    while (*temp) {
        if (wordStart == NULL && *temp != ' ') {
            wordStart = temp;
        }
        
        if (wordStart && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverseWord(wordStart, temp);
            wordStart = NULL;
        }
        temp++;
    }
}

int main() {
    char str[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    printf("Original: %s\n", str);
    
    reverseEachWord(str);
    
    printf("Reversed: %s\n", str);
    
    return 0;
}