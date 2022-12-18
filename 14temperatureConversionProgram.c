#include <stdio.h>
int main () {
    char unit;
    double temperature;
    double result;
    printf("IS THE TEMPREATURE IN (F) OR (C)?: ");
    scanf("%c", &unit);
    if (unit == 'C' || unit == 'c') {
        printf("Enter the temprature in Celsius: ");
        scanf("%lf", &temperature);
        result = (temperature * 9 / 5) + 32;
        printf("The temprature in Fehrenheit is: %.2lf\n",result);

    } else if (unit == 'F' || unit == 'f') {
        printf("Enter the temprature in Fehrenheit: ");
        scanf("%lf", &temperature);
        result = ((temperature - 32) * 5 ) / 9;
        printf("The temprature in Celsius is: %.2lf\n", result);
    } else {
        printf("%c is not a Valid unit of measurement\n", unit);
    }
    return 0;
}