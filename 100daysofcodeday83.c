//day83- 100 days of code
//Create an enum for months and print how many days each month has.

#include <stdio.h>


enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month m;

    printf("Month\t\tDays\n");
    printf("---------------------\n");

    for (m = JANUARY; m <= DECEMBER; m++) {
        printf("%-10d\t", m);
        switch (m) {
            case JANUARY: case MARCH: case MAY: case JULY:
            case AUGUST: case OCTOBER: case DECEMBER:
                printf("31\n");
                break;
            case APRIL: case JUNE: case SEPTEMBER: case NOVEMBER:
                printf("30\n");
                break;
            case FEBRUARY:
                printf("28 or 29\n");
                break;
        }
    }

    return 0;
}