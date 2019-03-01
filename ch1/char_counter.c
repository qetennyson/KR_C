#include <stdio.h>

/* count characteres in input; 1st version */

main()
{
    long nc;

    nc = 0;
    while (getchar() != 88)
        ++nc;
    printf("%ld\n", nc);
}