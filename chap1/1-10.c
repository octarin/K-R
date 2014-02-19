/*
 *
 *      1-10.c: This program replaces each backspace, 
 *  tab and newlines from the standart input by their
 *  equivalent escape sequence.
 *
 *                                                      */

#include <stdio.h>

int main(void)
{
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\b')
            printf("\\b");
        else if (c == '\t')
            printf("\\t");
        else if (c == '\n')
            printf("\\n");
        else
            putchar(c);
    }
    putchar('\n');
    return 0;
}
