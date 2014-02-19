/*
 *
 *      1-13-bis.c: This program prints a vertical histogram
 *  of the lengths of the words passed from standart input
 *
 *                                                          */

#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main(void)
{
    char c;
    int *tab = malloc(sizeof(int));
    int state = OUT, index = 0;
    int a, b, max = 0;

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

    //Indique la taille du tableau
    index++;

    for (a = 0; a < index; a++) {
        if (tab[a] > max) { max = tab[a]; }
    }

    for (a = max; a > 0; a--) {
        for (b = 0; b < index; b++) {
            if (tab[b] >= a)
                printf("||");
            else
                printf("  ");
        }
        putchar('\n');
    }

    return 0;
}
