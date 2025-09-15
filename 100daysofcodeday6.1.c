#include <stdio.h>
int main() {
    int number;
    printf("enter a number");
    scanf("%d", &number);
    if(number % 2 == 0)
    {
    printf("the number %d is even\n", number);
    } 
    else
    {
        printf("the number %d is odd\n", number);
    }
    return 0;
}