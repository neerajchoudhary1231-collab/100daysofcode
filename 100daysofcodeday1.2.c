#include <stdio.h>
void main(){
    float a, b, sum, differenc, product, quotient;
//take input from user
    printf("enter first number:");
    scanf("%f", &a);
    printf("enter second number:");
    scanf("%f", &b);
    sum = a+b;
     printf("%f \n", sum);
    differenc = a-b;
    printf("%f \n", differenc);
    product = a*b;
     printf("%f \n", product);
   quotient =a/b;
    printf("%f \n", quotient);
}