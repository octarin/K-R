/*
 *
 *      1-15.c: This program reimplements the 1-3 program
 *  using a function for the conversion.
 *
 *                                                          */

#include <stdio.h>

float convert_fahr_celsius(float fahr);

int main(void)
{
    float fahr;
    float lower, upper, step;

    lower = 0.;
    upper = 500.;
    step = 50.;
    fahr = lower;

    printf("celsius\t\tfahr\n");
    while (fahr < upper) {
        printf("%6.1f\t\t%3.0f\n", fahr, convert_fahr_celsius(fahr));
        fahr += step;
    }
    return 0;
}

float convert_fahr_celsius(float fahr)
{
    return (fahr - 32.0) * (5.0 / 9.0);
}

