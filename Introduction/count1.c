#include <stdio.h>

main()
{
    /* Count program, version 2 */

    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}