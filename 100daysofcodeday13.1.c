#include <stdio.h>

int main() {
    char op;
    double num1, num2;
    
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch(op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            printf("Result: %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
