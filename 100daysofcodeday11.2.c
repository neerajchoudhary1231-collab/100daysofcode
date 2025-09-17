#include <stdio.h>

int main() {
    float cp, sp;
    float profit, loss, profitpercentage, losspercentage;
    printf("enter selling price:");
    scanf("%f", &sp);
    printf("enter cost price:");
    scanf("%f", &cp);
    //check profit or loss
    {
        profit=sp-cp;
        profitpercentage=(profit/cp)*100;
        loss=cp-sp;
        losspercentage=(loss/cp)*100;
    }
    {
    if(profit=sp-cp>0)
    {
        printf("%f is profit percentage\n", profitpercentage);
    }
    else
    {
        printf("%f is loss percentage\n", losspercentage);
    }
    }
    
    
    return 0;
}