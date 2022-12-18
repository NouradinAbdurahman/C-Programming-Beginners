#include <stdio.h>
int findMax(int x, int y) {
    return (x > y) ? x : y;
}
int findMin(int x, int y) {
    return (x < y) ? x : y;
}
int main() {
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    int num1 = 3;
    int num2 = 4;
    int max = findMax(num1, num2);
    int min = findMin(num1, num2);

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}