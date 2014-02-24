/* 
 *      1-18.c: This program removes trailing blanks and tabs from each line
 * of input, and deletes entirely blank lines.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void strip(char* str, int size);

#define MAX_CAR 100

int main(void)
{
	char *buffer = malloc(50);
	char continuer = 1;
	int size = 0, msize = MAX_CAR;

	while (continuer) {
		continuer = (size = getline(&buffer, (size_t*) &msize, stdin)) + 1;
        strip(buffer, size);
        puts(buffer);
	}

	return 0;
}

void strip(char* str, int size)
{
	char c;

    size--;

    while (((c = str[--size]) == ' ' || c == '\t') && size >= 0 ) {
        str[size] = 0;
    }
}

