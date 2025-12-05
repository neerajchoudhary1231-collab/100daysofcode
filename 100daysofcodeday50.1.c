// Day 50.1- 100 Days of Code
//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    int d, y;
    char month[3];
    scanf("%2d/%2s/%4d", &d, month, &y);

    char *m;

    if (!strcmp(month, "01")) m = "Jan";
    else if (!strcmp(month, "02")) m = "Feb";
    else if (!strcmp(month, "03")) m = "Mar";
    else if (!strcmp(month, "04")) m = "Apr";
    else if (!strcmp(month, "05")) m = "May";
    else if (!strcmp(month, "06")) m = "Jun";
    else if (!strcmp(month, "07")) m = "Jul";
    else if (!strcmp(month, "08")) m = "Aug";
    else if (!strcmp(month, "09")) m = "Sep";
    else if (!strcmp(month, "10")) m = "Oct";
    else if (!strcmp(month, "11")) m = "Nov";
    else m = "Dec";

    printf("%02d-%s-%04d", d, m, y);
    return 0;
}
