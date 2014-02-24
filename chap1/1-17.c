/*
 *
 *      1-17.c: This program prints all input lines that are longer
 *  than 80 characters.
 *
 */

#include <stdio.h>

#define MAXLINE 1000
#define MAXCAR 80

int getline2(char str[]);

int main(void)
{
    char str[MAXLINE];
    int len;

    while ((len = getline2(str)) > 0)
        if (len > MAXCAR)
            puts(str);

    return 0;

}

int getline2(char str[])
{
    int size = 0;
    char c;

    while ((c = getchar()) != EOF && c != '\n' && size < MAXLINE) {
        str[size++] = c;
    }

    str[--size] = '\0';

    return size;
}

