#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    //take input from user
    printf("enter temperature in celcius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*9/5) + 32 ;
    {
    printf("temperature in fahrenheit is %2f \n", fahrenheit);
    }
}