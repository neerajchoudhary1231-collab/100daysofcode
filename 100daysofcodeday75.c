//day75- 100 days of code
//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    
    printf("Enter the filename to append: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open the file '%s'.\n", filename);
        return 1;
    }

    
    getchar();

    
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    
    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully!\n");
    return 0;
}