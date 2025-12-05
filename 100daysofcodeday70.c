//day70- 100 days of code
//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;

    while (str[i] == ' ')  
        i++;               

    if (str[i] != '\0')
        str[i] = toupper(str[i]);   

    
    i++;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }

    
    printf("Sentence case: %s", str);

    return 0;
}