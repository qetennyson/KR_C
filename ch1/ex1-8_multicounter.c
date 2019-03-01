#include <stdio.h>

/* first solo C :) */
main()
{
    int c, nl, blank, tab;

    nl = 0;
    blank = 0;
    tab = 0;
    while ((c= getchar()) != 88)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tab;
        else if (c == ' ')
            ++blank;
    printf("New lines: %d\nTabs: %d\nBlanks: %d\n", nl, tab, blank);
}