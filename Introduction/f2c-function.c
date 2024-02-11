#include <stdio.h>

int convert(int);

/* print Fahrnheit-Celsius table
    for fahr = 0, 20, ... , 300 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper){
        printf("%d\t%d\n", fahr, convert(fahr));
        fahr = fahr + step;
    }

}

int convert(int temp)
{
   int i;
   i = 5 * (temp-32) / 9; 
   return i;
}