#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DEFAULT_N "0xDEADBEEF"

int htoi(const char *s);

int main(int argc, char* argv[])
{
    char *s = DEFAULT_N;
    int nb;

    if (argc > 1)
        s = argv[1];

    nb = htoi(s);

    printf("%s -> %u\n", s, nb);

    return 0;
}

int htoi(const char *s)
{
    int i, n, p;
    char copy[8] = {0};
    char chars[] = "0123456789abcdef";

    if (tolower(s[1]) == 'x')                             // Begins by "0[xX]"
        s += 2;

    for (i = 0; i < strlen(s); i++)                       //Lowerize the string
        copy[i] = (char) tolower((int) s[i]);

    for (n = p = 0, i--; i >= 0; i--, p++)
        n += (strchr(chars, copy[i]) - chars) << (4 * p); // n += digit * 16 ^ p

    return n;
}

