#include <stdio.h>

int main(void)
{
    int i, lim = 1000;
    char c;
    char str[1000];

    for (i = 0; i < lim - 1; i++, c = getchar()) {
        if (c != EOF)
            if (c != '\n')
                str[i] = c;
            else break;
        else break;
    }

    return 0;
}

