//day89- 100 days of code
//Show that enums store integers by printing assigned values.


#include <stdio.h>

enum Gender {
    MALE,    
    FEMALE,  
    OTHER    
};

int main() {
    printf("MALE = %d\n", MALE);
    printf("FEMALE = %d\n", FEMALE);
    printf("OTHER = %d\n", OTHER);

    
    enum Status { PENDING = 10, APPROVED = 20, REJECTED = 30 };
    printf("PENDING = %d\n", PENDING);
    printf("APPROVED = %d\n", APPROVED);
    printf("REJECTED = %d\n", REJECTED);

    return 0;
}