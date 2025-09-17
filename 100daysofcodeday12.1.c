// 100days of code day 12.1
#include <stdio.h>

int main() {
    int latedays, sap;
    int fine;
    {
    printf("\t\t\t_ _ _ _ _ _ _ _ _ _ welcome  to library portal _ _ _ _ _ _ _ _ _ _\n\n\n");
    }
    {
    printf("enter your sap id: \n");
    scanf("%d", &sap);
    }
    {
    printf("enter number of latedays: \n");
    scanf("%d", &latedays);
    }
    {
        if(latedays<=5)
        {
            fine=latedays*2;
            printf("you have been fined rupees %d for %d days", fine,latedays);
        }
        else if(latedays>5&&latedays<=10)
        {
            fine=latedays*4;
            printf("you have been fine rupees %d for %d days", fine,latedays);
        }
        else if(latedays>10&&latedays<=30)
        {
            fine=latedays*6;
            printf("you have been fined rupees %d for %d days", fine,latedays);
            printf("\n*******warning*********\n if you didn't return book/books for more than 30 days, your membership will be cancelled.");
        }
        else if(latedays>30)
        {
            printf("*********your membership has been canceled.**********");
        }
        else
        {
            printf("invalid input");
        }
    }
    printf("\nthanks for visiting\n_ _ _ _ _exit_ _ _ _ _");
    return 0;
}