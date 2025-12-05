// Day 47.1 - 100 Days of Code
//Check if two strings are anagrams of each other.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char *str1, char *str2) {
    int count[256] = {0};
    int i;
    
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ') {
            count[(unsigned char)tolower(str1[i])]++;
        }
    }
    
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ') {
            count[(unsigned char)tolower(str2[i])]--;
        }
    }
    
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }
    
    return 0;
}