#include <stdio.h>

int main() {
    int num1, num2;
    char option, control = 'Y';
    float result;

    while (control == 'y' || control == 'Y') {
        printf("Enter 2 integer numbers : ");
        scanf("%d%d", &num1, &num2);
        printf("Enter the operation you want to do (+,-,*,/%%) : ");
        scanf(" %c", &option);
        switch (option) {
        case '+':
            result = num1 + num2;
            printf("Operation  :  %d %c %d = %f \n", num1, option, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Operation  :  %d %c %d = %f \n", num1, option, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Operation  :  %d %c %d = %f \n", num1, option, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("Operation  :  %d %c %d = %f \n", num1, option, num2, result);
            break;
        case '%':
            result = num1 + num2;
            printf("Operation  :  %d %c %d = %f \n", num1, option, num2, result);
            break;
        default:
            printf("You entered wrong operation.\n");
        }

        printf("Do you want to continue (YES(y / Y) - NO(n/N)):");
        scanf(" %c", &control);
    }

    printf("The program has been terminated.\n");

    return 0;
}