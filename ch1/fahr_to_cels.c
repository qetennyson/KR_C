#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ... 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* low limit of temp table */
    upper = 300; /* high limit of temp table */
    step = 20; /* step size */

    printf("Fahrenheit Celsius\n");
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f \t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}