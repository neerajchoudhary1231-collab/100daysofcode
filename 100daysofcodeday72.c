//day72- 100 days of code
//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.


#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[500];

    
    printf("Enter the filename: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("\n--- File Content ---\n");

    
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}