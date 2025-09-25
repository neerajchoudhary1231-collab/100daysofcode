#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    int power = pow(10, digits);
    num = num - first * power - last + last * power + first;
    
    printf("Number after swapping first and last digit: %d\n", num);
    return 0;
}
