/*
 *
 *      1-6.c: This program says if the caracter entered
 *  at the standart input equals EOF or differs from it.
 *
 *                                                      */

#include <stdio.h>

int main(void)
{
    char c;
    while (1) {
        c = getchar();
        printf("c est %s EOF\n", c == EOF ? "égal à" : "différent de");
    }
    return 0;
}

