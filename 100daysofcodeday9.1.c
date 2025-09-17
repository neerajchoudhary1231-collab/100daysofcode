#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c;
   float d, r1, r2, realr, imgr;
   printf("enter coffecient a:");
   scanf("%f", &a);
   printf("enter coffecient b:");
   scanf("%f", &b);
   printf("enter coffecient c:");
   scanf("%f", &c);
   //check wether equation is quadratic or not
   { //
       if(a==0)
   {
       printf("equation is not quadratic");
       return 0;
   }
   else
   {
   //calculate determinant
   d = b*b-4*a*c;
   
   } //
   //condition for roots
   { //
   if(d>0){
       r1=(-b + sqrt(d))/(2*a);
       r2=(-b - sqrt(d))/(2*a);
       printf("roots are real and distinct\n");
       printf("%2.f is root1", r1);
       printf("%2.f is root2", r2);
   }
    else if(d==0)
    {
       r1=-b/2*a;
       printf("roots are real and equal\n");
       printf("%f is the root", r1);
    }
else
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("roots are complex and imaginary\n");
        printf("%f is root", r1);
        printf("%f is root", r2);
    }
   }
   } //
    return 0;
}