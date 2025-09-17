#include <stdio.h>

int main() {
    float num1, num2, num3;
    {
    printf("enter first number:");
    scanf("%f", &num1);
    }
    {
    printf("enter second number:");
    scanf("%f", &num2);
    }
    {
    printf("enter third number:");
    scanf("%f", &num3);
    }
    
    if(num1 > num2&&num3 )
    {
        printf("%f is largest number.\n", num1);
    }
    else if( num2 > num1&&num3 )
    {
        printf("%f is largest number.\n", num2);
    }
    else
    {
        printf("%f is largest number.\n", num3);
    }

    return 0;
}