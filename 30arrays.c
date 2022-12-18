#include <stdio.h>
int main () {
    
    // array = a data structure that can store many values of the same data type.

    double prices[] = {5.0,3.0,45.0,3.0,9.0,99.0};

    prices[0] = 6.0;
    prices[3] = 23.0;
    prices[5] = 87.0;

    printf("$%.2lf\n", prices[0]);
    printf("$%.2lf\n", prices[1]);
    printf("$%.2lf\n", prices[2]);
    printf("$%.2lf\n", prices[3]);
    printf("$%.2lf\n\n", prices[4]);


    //  print an array with loop
    for (int i = 0; i < (sizeof(prices) / sizeof(prices[0])); i++) {
        printf("$%.2lf\n", prices[i]);
    }
    return 0;
}