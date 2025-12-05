//day93- 100 days of code
//Find and print the student with the highest marks.


#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("%s %d %.2f", s[maxIndex].name, s[maxIndex].roll_no, s[maxIndex].marks);

    return 0;
}
