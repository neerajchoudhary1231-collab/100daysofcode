#include<stdio.h>
int main()
{
    int num1, num2, c;
    //take input from user
    printf("enter first number =");
    scanf("%d", &num1);
    printf("enter second number =");
    scanf("%d", &num2);
    c=num1;
    num1=num2;
    num2=c;
    printf("Number swapped successfullyyyyyyy:\n num1 = %d \n num2 = %d \n",num1,num2);
}
    