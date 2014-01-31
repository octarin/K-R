/*
 *
 *      1-12.c: This program redisplays the standart
 *  input one word per line.
 *
 *                                                      */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    char c;
    char state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else {
            putchar(c);
            state = IN;
        }
    }
    return 0;
}

