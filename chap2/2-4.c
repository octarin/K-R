#include <stdio.h>

#define S2      "We are the knights who say ni !"

void squeeze(char *s1, const char *s2);

int main(void)
{
    char s1[50] = "Hello, world !";
    puts(s1);
    puts(S2);
    squeeze(s1, S2);
    puts(s1);
}

void squeeze(char *s1, const char *s2)
{
    int i, j, k;
    char in;

    for (i = j = 0; s1[i] != '\0'; i++) {
        for (in = k = 0; s2[k] != '\0'; k++)
            if (s1[i] == s2[k]) {
                in = 1;
                break;
            }
        if (in != 1)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}

