#include <stdio.h>

int main() {
    int binary, digit;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    printf("1's Complement: ");
    while (binary > 0) {
        digit = binary % 10;
        if (digit == 1)
            printf("0");
        else if (digit == 0)
            printf("1");
        else {
            printf("\nInvalid binary digit\n");
            return 1;
        }
        binary /= 10;
    }

    printf("\n");
    return 0;
}
