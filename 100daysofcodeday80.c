//day80- 100 days of code
//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar(); 
        fgets(s[i].name, sizeof(s[i].name), stdin);

       
        size_t len = strlen(s[i].name);
        if (len > 0 && s[i].name[len - 1] == '\n') {
            s[i].name[len - 1] = '\0';
        }

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    fclose(fp);

    printf("\nRecords saved to file.\n");

    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("\n--- Student Records from File ---\n");
    while (fscanf(fp, "%s %d %f", s[0].name, &s[0].roll_no, &s[0].marks) != EOF) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s[0].name, s[0].roll_no, s[0].marks);
    }

    fclose(fp);
    return 0;
}