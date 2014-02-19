/*
 *
 *      1-3.c: This program prints the conversion table
 *  of fahrenheit to celsius.
 *
 *                                                          */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.;
    upper = 500.;
    step = 50.;
    fahr = lower;
    printf("celsius\t\tfahr\n");
    while (fahr < upper) {
        celsius = (fahr - 32.0) * (5.0 / 9.0);
        printf("%6.1f\t\t%3.0f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}
