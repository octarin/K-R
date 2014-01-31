#include <stdio.h>

#define MAXLINE 1000

int getline2(char str[]);
void reverse(char str[]);
int strlen(char str[]);
void strcpy(char dest[], char src[]);

int main(void)
{
    char str[MAXLINE];
    int len;

    while ((len = getline2(str)) > 0) {
        reverse(str);
        puts(str);
    }

    return 0;
}
int getline2(char str[])
{
    int size = 0;
    char c;

    while (((c = getchar()) != EOF) && (c != '\n') && (size < MAXLINE)) {
        str[size++] = c;
    }

    str[size] = '\0';

    return size;
}

void reverse(char str[])
{
    int i = 0, size = strlen(str);
    char buf[1000];

    strcpy(buf, str);

    for (i = 0; i < size - 1; i++) {
        str[i] = buf[size - i - 2];
    }
    str[size - 1] = 0;
}

int strlen(char str[])
{
    int ret = 0;
    while (str[ret++] != '\0');
    return ret;
}

void strcpy(char *dest, char *src)
{
    while (*dest++ = *src++);
}

