#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,ti,si,ci;
    float cirate,ciprincipal,cino,citime;
    //take input from user
    printf("enter principal:");
    scanf("%f", &principal);
    printf("enter rate:");
    scanf("%f", &rate);
    printf("enter time:");
    scanf("%f", &ti);
    
    //show result
    si = principal*rate*ti/100;
    {
        printf("S.I.= %f \n", si);
    }
    printf("enter ci rate:");
    scanf("%f", &cirate);
    printf("enter ci time:");
    scanf("%f", &citime);
    printf("enter ci principal:");
    scanf("%f", &ciprincipal);
    printf("enter number of Compounding Periods: ");
    scanf("%f", &cino);
    ci = ciprincipal * pow((1 + cirate / cino),(cino * citime));
    {
        printf("C.I.= %f \n", ci);
    }
    
}