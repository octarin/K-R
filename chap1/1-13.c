/*
 *
 *      1-13.c: This program prints an horizontal histogram of
 *  the length of the words passed from standart input.
 *
 *                                                              */

#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main(void)
{
    char c;
    int *tab = malloc(sizeof(int));
    int state = OUT, index = 0;
    int a, b;

    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t' || c == '\n') && state == IN) {
            tab = realloc(tab, sizeof(int) * (++index + 1));
            tab[index] = 0;
            state = OUT;
        } else if (c != ' ' && c != '\t' && c != '\n') {
            state = IN;
            tab[index]++;
        }
    }

    for (a = 0; a <= index; a++) {
        for (b = 0; b < tab[a]; b++) {
            putchar('|');
        }
        putchar('\n');
    }
    return 0;
}
