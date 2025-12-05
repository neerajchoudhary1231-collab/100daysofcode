//day94- 100 days of code
//Write a function that accepts a structure as parameter and prints its members.


#include <stdio.h>


struct Student {
    int roll;
    char name[50];
    float marks;
};


void printStudent(struct Student s) {
    printf("Student Details:\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);
}

int main() {
  
    struct Student s1 = {101, "Tanay", 92.5};

    printStudent(s1);

    return 0;
}
