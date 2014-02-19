/*
 *
 *      1-20.c or detab: This program replaces the tabs by n 
 *  characters.
 *
 *                                                                  */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
#define DEFAULT_N 2


int main(int argc, char* argv[])
{
    char n;
    char c;
    char str[MAX];
    int i = 0, count;

    if (argc < 2) {
        n = DEFAULT_N;
    } else {
        n = atoi(argv[1]);
    }

    while ((c = getchar()) != EOF && i < MAX) {
        if (c == '\t') {
            for (count = 0; count < n; count++) {
                str[i + count] = ' ';
            }
            i += n;
        }
        else {
            str[i++] = c;
        }
    }
    
    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}

