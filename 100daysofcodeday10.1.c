#include <stdio.h>

int main() {
    float a, b,c;
    printf("enter side a:");
    scanf("%f", &a);
    printf("enter side b:");
    scanf("%f", &b);
    printf("enter side c:");
    scanf("%f", &c);
    //check whether given sides are of triangle or not
    if((a+b>c)||(b+c>a)||(a+c>b))
    {
        printf("the given sides are of triangle\n");
    }
    else
    {
        printf("None of the above");
    }
    
    {
        if(a == b && b == c && c == a)
        {
            printf("triangle is a equilateral.\n");
        }
        else if((a == b != c)||(b == c != a)||(c == a != b))
        {
            printf("triangle is isosceles\n");
        }
        else
        {
            printf("triangle is a scalen\n");
        }
    }
    {
        if((a*a + b*b == c*c)||((c*c + b*b == a*a)||((c*c + a*a == b*b))))
    {
            printf("triangle is a right angled triangle\n");
    }
        else
        {
            printf("The triangle is not 90");
        }
        
    return 0;
}}