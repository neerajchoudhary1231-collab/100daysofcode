//day90- 100 days of code
//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Select Gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", &choice);

    
    if (choice == 0)
        p.gender = MALE;
    else if (choice == 1)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    
    printf("\n--- Person Details ---\n");
    printf("Name: %s", p.name);

    printf("Gender: ");
    switch(p.gender) {
        case MALE:   printf("Male\n");   break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n");  break;
    }

    return 0;
}