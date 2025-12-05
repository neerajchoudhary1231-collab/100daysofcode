//day92- 100 days of code
//Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name age marks: ");
        scanf("%s %d %f", s[i].name, &s[i].age, &s[i].marks);
    }

    for (i = 0; i < 5; i++) {
        printf("%s %d %.2f\n", s[i].name, s[i].age, s[i].marks);
    }

    return 0;
}
