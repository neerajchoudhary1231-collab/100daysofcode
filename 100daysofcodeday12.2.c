// 100days of code day 12.2
#include <stdio.h>

int main() {
    int unit, consumerid, rate;
    printf("\t\t_ _ _ _ _ _ _ _ _ _welcome to electricity department_ _ _ _ _ _ _ _ _ _\n\n");
    printf("we are here for you service.\n\n\n");
    
    
    printf("enter your condumer id:");
    scanf("%d", &consumerid);
    printf("enter unit consumed:");
    scanf("%d", &unit);
    if(unit>=0 & unit<=100)
    {
        rate=unit*5;
        printf("dear consumer you have used %d units of rupees %d\n", unit,rate);
    }
    else if(unit>100 & unit<=200)
    {
        rate=unit*7;
        printf("dear consumer you have used %d units of rupees %d\n", unit,rate);
    }
    else if(unit>200 & unit<=300)
    {
        rate=unit*10;
        printf("dear consumer you have consumed %d units of rupees %d\n", unit,rate);
    }
    else if(unit>300)
    {
        rate=unit*12;
        printf("dear consumer you have consumed %d units of rupees %d\n", rate);
    }
    else
    {
        printf("invalid input");
    }
    
    
    return 0;
}