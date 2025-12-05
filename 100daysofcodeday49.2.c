// Day 49.2 - 100 Days of Code
//Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    scanf("%[^\n]", name);

    int len = strlen(name);
    int startSurname = 0;

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len)
            startSurname = i + 1;
    }

    for (int i = 0; i < startSurname; i++) {
        if (i == 0 || name[i-1] == ' ')
            printf("%c. ", toupper(name[i]));
    }

    printf("%s", name + startSurname);
    return 0;
}
