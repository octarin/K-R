/*
 *
 *      1-8.c: This program counts the number of blanks,
 *  tabs and newlines entered at the standart input and
 *  displays it.
 *
 *                                                          */

#include <stdio.h>

int main(void)
{
    char c;
    int nb = 0, nt = 0, nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            nb++;
        if (c == '\t')
            nt++;
        if (c == '\n')
            nl++;
    }
    printf("%d\t%d\t%d\n", nb, nt, nl);
    return 0;
}

