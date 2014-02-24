/*
 *
 *      1-9.c: This program reprints the standart input
 *  replacing multi blanks by single blanks.
 *
 *                                                          */

#include <stdio.h>

#define IN 1
#define OUT 0
int main(void)
{
    char c;
    char state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (state == IN) {
                putchar(' ');
                state = OUT;
            }
        } else {
            putchar(c);
            state = IN;
        }
    }

    return 0;
}

