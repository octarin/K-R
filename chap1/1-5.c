/*
 *
 *      1-5.c: This program prints the conversion table of
 *  fahrenheit to celsius in reverse order.
 *
 *                                                             */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    step = 50.;
    upper = 300;
    lower = 0;

    printf("celsius\t\tfahr\n");
    for (fahr = upper; fahr >= lower; fahr -= step) {
        celsius = (fahr - 32.0) * (5.0 / 9.0);
        printf("%6.1f\t\t%3.0f\n", fahr, celsius);
    }

    return 0;
}

