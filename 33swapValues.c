#include <stdio.h>
#include <string.h>

int main () {
    char a[15] = "water";
    char b[15] = "soda";
    printf("Before a: %s\n", a);
    printf("Before b: %s\n\n", b);

    char tempp[15];
    strcpy(tempp, a);
    strcpy(a, b);
    strcpy(b, tempp);

    printf("After a: %s\n", a);
    printf("After b: %s\n\n", b);


    printf("_____________________\n\n\n");

    int x = 1;
    int y = 2;
    printf("Before X: %d\n", x);
    printf("Before Y: %d\n\n", y);

    int temp = x;
    x = y;
    y = temp;
    printf("After X: %d\n", x);
    printf("After Y: %d\n\n\n", y);
    return 0;
}