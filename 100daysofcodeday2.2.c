#include<stdio.h>
int main(){
    float radius, area, circumference;
    //pi value taken 3.14
    printf("enter radius of circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius ;
    {
    printf("area of circle is %2.0f \n", area);
    }
    circumference = 2 * 3.14 * radius;
    {
    printf("circumference of circle is %2f \n", circumference);
    }
}