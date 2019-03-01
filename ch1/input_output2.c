#include <stdio.h>

/* copy input to output, 2nd version */

main()
{
    int c;
    printf(getchar() != EOF);

    while ((c = getchar()) != EOF)
        printf("%d", c);
        putchar(c);
}