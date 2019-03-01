#include <stdio.h>

/* count lines in input */
main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n') 

        /* single quotes mean character constant 
        in this case the value of the newline character */
        
            ++nl;
    printf("%d\n", nl);
}