//day82- 100 days of code
//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>


enum TrafficLight {
    RED,     
    YELLOW,  
    GREEN    
};

int main() {
    enum TrafficLight light;
    int input;

    printf("Enter traffic light (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &input);

    
    if (input == 0)
        light = RED;
    else if (input == 1)
        light = YELLOW;
    else
        light = GREEN;

    
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input!\n");
    }

    return 0;
}