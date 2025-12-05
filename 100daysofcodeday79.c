//day79- 100 days of code
//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}