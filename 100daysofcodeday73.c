//day73- 100 days of code
//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.


#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    
    int characters = 0;
    int words = 0;
    int lines = 0;
    
    int inWord = 0;  

    
    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        
        if (ch == '\n')
            lines++;

        
        if (!isspace(ch)) {
            if (!inWord) {
                words++;       
                inWord = 1;
            }
        } else {
            inWord = 0;        
        }
    }

    fclose(fp);

    if (characters > 0 && ch == EOF) {
        lines++; 
    }

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}