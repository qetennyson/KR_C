#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* higher limit of table */
#define STEP 20 /* step size */

main()
{
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));        
}