#include <stdio.h>

main()
{
    int c, nl;

    nl = 0;
    while ((getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}