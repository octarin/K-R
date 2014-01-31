#include <stdio.h>

// états liés aux strings
#define CHAR 7
#define ESCAPE 6
#define INTO_STR 5

//états liés aux commentaires
#define COM1 4
#define COM2 3

//états de transition code/commentaire
#define RISK_EXIT 2
#define RISK_ENTER 1

//état de code
#define OUT 0

int main(void)
{
    char state = OUT, c, save, savestate;;

    while ((c = getchar()) != EOF) {
        switch (state) {

            case OUT :
                if (c == '/') {
                    state = RISK_ENTER;
                    save = c;
                }
                else if (c == '\'') {
                    state = CHAR;
                    putchar('\'');
                }
                else if (c == '\"') {
                    state = INTO_STR;
                    putchar('\"');
                }
                else
                    putchar(c);
                break;

            case CHAR :
                if (c == '\\') {
                    state = ESCAPE;
                    savestate = CHAR;
                }
                if (c == '\'')
                    state = OUT;
                putchar(c);
                break;

            case ESCAPE :
                putchar(c);
                state = savestate;
                break;

            case INTO_STR :
                if (c == '\\') {
                    state = ESCAPE;
                    savestate = state;
                }
                if (c == '\"')
                    state = OUT;
                putchar(c);
                break;

            case COM1 :
                if (c == '\n') {
                    state = OUT;
                    putchar(c);
                }
                break;

            case COM2 :
                if (c == '*')
                    state = RISK_EXIT;
                break;

            case RISK_EXIT :
                if (c == '/')
                    state = OUT;
                else {
                    state = COM2;
                }
                break;

            case RISK_ENTER :
                if (c == '/')
                    state = COM1;
                else if (c == '*')
                    state = COM2;
                else {
                    state = OUT;
                    putchar('/');
                    putchar(' ');
                }
                break;

        }
    }
}

