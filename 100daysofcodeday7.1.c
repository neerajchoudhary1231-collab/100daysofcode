#include <stdio.h>
int main() {
     int year;
    printf("enter a year:");
    scanf("%d", &year);
    if(((year%400==0) || (year % 4 == 0)) && (year%100!=0))
    {
        printf("year %d is leap year\n", year);
    } 
    else
    {
        printf("year %d is not leap year\n", year);
    }
    return 0;
}