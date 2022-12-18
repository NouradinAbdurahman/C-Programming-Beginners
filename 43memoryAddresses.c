#include <stdio.h>

int main() {

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory (house), used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    // int a = 'X';
    // int b = 'Y';
    // int c = 'Z';

    // double a = 'X';
    // double b = 'Y';
    // double c = 'Z';

    // short a = 'X';
    // short b = 'Y';
    // short c = 'Z';


    char a;
    char b[1];

    printf("%lu bytes\n", sizeof(a));
    printf("%lu bytes\n", sizeof(b));
    // printf("%lu bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);

    return 0;
}