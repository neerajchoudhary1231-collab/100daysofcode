//day88- 100 days of code
//Print all enum names and integer values using a loop.


#include <stdio.h>

enum Gender {
    MALE,    
    FEMALE,  
    OTHER    
};

int main() {
    
    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};
    
    
    int numGenders = sizeof(genderNames) / sizeof(genderNames[0]);

    printf("Enum Names and their Integer Values:\n");
    for (int i = 0; i < numGenders; i++) {
        printf("%s = %d\n", genderNames[i], i);
    }

    return 0;
}