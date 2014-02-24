#include <stdio.h>

#define S1 "Rincewind"
#define S2 "Twoflowers"

int main(int argc, char *argv[])
{
    char *s1 = S1, *s2 = S2;

    if (argc > 2)
        s2 = argv[2];
    if (argc > 1)
        s1 = argv[1];

    printf("%d\n", any(s1, s2));

    return 0;
}

int any(const char *s1, const char *s2)
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
                return i;

    return -1;
}

