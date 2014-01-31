/*
 *
 *      1-14.c: This program prints an histogram
 *  of the frequency of the ascii characters passed 
 *  to his standart input.
 *
 *                                                      */

#include <stdio.h>

int main(void)
{
    int  tab[128];
    char c;
    int a = 0, b = 0;

    for (a = 0; a < 128; a++) {
        tab[a] = 0;
    }

    while ((c = getchar()) != EOF) {
        tab[c]++;
    }

    for (a = 0; a < 128; a++) {
        printf("%d : %c -", a, a);
        for (b = 0; b < tab[a]; b++) {
            printf("||", a);
        }
        putchar('\n');
    }
    
    return 0;
}

