#include <stdio.h>

int main() {
    float percentage;
    //take input from user
    printf("enter your percentage:");
    scanf("%f", &percentage);
    
    if(percentage>=90 & percentage<=100)
    {
        printf("grade A\n");
    }
    else if(percentage >= 80 & percentage <= 89.9){
        printf("grade B\n");
    }
    else if(percentage>=70 & percentage<=79.9){
        printf("grade C\n");
    }
    else if(percentage>=60 & percentage<=69.9)
    {
        printf("grade D\n");
    }
    else 
    {
        printf("grade F\n");
    }
   
    return 0;
}