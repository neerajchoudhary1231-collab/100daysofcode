// Day 49.1 - 100 Days of Code
//Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    scanf("%[^\n]", name);

    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 || name[i-1] == ' ')
            printf("%c", toupper(name[i]));
    }

    return 0;
}
