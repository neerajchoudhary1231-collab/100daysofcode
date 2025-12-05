// Day 46.2 - 100 Days of Code
//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char findFirstRepeating(char *str) {
    int count[26] = {0}; 
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            count[str[i] - 'a']++;
        }
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]) && count[str[i] - 'a'] > 1) {
            return str[i];
        }
    }
    
    return '\0'; 
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    char result = findFirstRepeating(str);
    
    if (result != '\0') {
        printf("First repeating lowercase letter: %c\n", result);
    } else {
        printf("No repeating lowercase letter found.\n");
    }
    
    return 0;
}