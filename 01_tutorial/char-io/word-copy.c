#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */  

/* prints its input one word per line */
main()
{
    int c, state;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (state == IN) {
                state = OUT;
                putchar('\n');
            }
        } else {    
            state = IN;    
            putchar(c);
        }
    }
}
