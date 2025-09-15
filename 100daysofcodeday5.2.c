#include <stdio.h>
int main(){
    int hour, minute, second;
    printf("enter time in seconds:");
    scanf("%d", &second);
 hour = second/3600; //1 hour = 3600 second
 minute = (second%3600)/60; //60 minute = 3600 second
 second = second%60;
 {
 printf("%dhour, %dminute, %dsecond", hour, minute, second);
 }
}