#include <stdio.h>
#include <string.h>

struct Data {
    int a;
    float b;
    char name[20];
};

int main() {
    struct Data d1 = {1, 2.5, "hello"};
    struct Data d2 = {1, 2.5, "hello"};

    if (memcmp(&d1, &d2, sizeof(struct Data)) == 0)
        printf("Structs are identical\n");
    else
        printf("Structs are different\n");

    return 0;
}
