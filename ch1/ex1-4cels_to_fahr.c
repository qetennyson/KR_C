#include <stdio.h>

main()
{
    float cels;

    for(cels=300; cels >= 0; cels-=20)
        printf("%.3f \t %.3f\n", cels, (cels*1.80+32));
}