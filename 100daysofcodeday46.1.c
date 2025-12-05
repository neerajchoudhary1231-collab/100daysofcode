// Day 46.1 - 100 Days of Code
//Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeVowels(char *str) {
    int i, j = 0;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    printf("Original string: %s\n", str);
    
    removeVowels(str);
    
    printf("String without vowels: %s\n", str);
    
    return 0;
}