//day84- 100 days of code
//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>


enum Status {
    SUCCESS,  
    FAILURE,  
    TIMEOUT   
};

int main() {
    enum Status code;
    int input;

    printf("Enter status code (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &input);

    
    if (input == 0)
        code = SUCCESS;
    else if (input == 1)
        code = FAILURE;
    else
        code = TIMEOUT;

    
    switch(code) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Try later.\n");
            break;
        default:
            printf("Invalid status code!\n");
    }

    return 0;
}