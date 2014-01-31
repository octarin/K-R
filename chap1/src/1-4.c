/*
 *
 *      1-4.c: This program prints the conversion table
 *  of celsius to fahrenheit.
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
    celsius = lower;
    printf("celsius\t\tfahr\n");
    while (celsius < upper) {
        fahr = celsius / (5.0 / 9.0) + 32.0;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
