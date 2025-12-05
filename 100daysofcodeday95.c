//day95- 100 days of code
//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  
}

int main() {
    struct Student students[3] = {
        {101, "Tanay", 89.5},
        {102, "Rohan", 93.0},
        {103, "Aarav", 88.0}
    };

    struct Student top = getTopStudent(students, 3);

    printf("Top Student Details:\n");
    printf("Roll Number : %d\n", top.roll);
    printf("Name        : %s\n", top.name);
    printf("Marks       : %.2f\n", top.marks);

    return 0;
}
