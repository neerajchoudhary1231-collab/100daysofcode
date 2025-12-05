//day85- 100 days of code
//Assign explicit values starting from 10 and print them.

#include <stdio.h>


enum Operation {
    ADD = 10,
    SUBTRACT,   
    MULTIPLY    
};

int main() {
    printf("Enum Values:\n");
    printf("ADD = %d\n", ADD);
    printf("SUBTRACT = %d\n", SUBTRACT);
    printf("MULTIPLY = %d\n", MULTIPLY);

    return 0;
}