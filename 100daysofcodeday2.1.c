#include<stdio.h>
int main(){
    float length, breadth, area, perimeter;
    printf("enter length:");
    scanf("%f", &length);
    printf("enter breadth:");
    scanf("%f", &breadth);
    area = length*breadth;
    {
        printf(" Area is %2.0f \n", area);
    }
    perimeter = 2*(length+breadth);
    {
        printf(" Peri is %2.0f \n", perimeter);
    }
}