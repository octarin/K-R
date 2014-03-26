/*
 *
 *      2-1.c: This program computes the limits of 
 *      major type identifiers (and potentially the custom
 *      you could do)
 *
 */

#include <stdio.h>

#define stringify(sym) {#sym, sizeof(sym)} // This macro writes the name of the type in a string and his len

int main(void)
{
    struct {
        char *type;
        char len;
    } t[4] = {
        stringify(char),
        stringify(short),
        stringify(int),
        stringify(long)};

    int i;
    
    for (i=0; i<4; i++) {
        printf("%s : %d -> %d\n", t[i].type,
                -(1 << (t[i].len * 7)), (1 << (t[i].len * 7)) - 1);

        printf("unsigned %s : 0 -> %u\n", t[i].type,
                (((unsigned long) (-1)) >> (1 << 31) - (t[i].len * 8)));
    }

    return 0;
}

