#include <stdio.h>

/* Count characters in input, 1st verison */

main()
{
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}