#include <stdio.h>

/* print Celsius-Fahrenheit table */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;  /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    celsius = lower;

    printf("Celcius to Fahrenheit\n");
    while (celsius <= upper){
        fahr = ((celsius * 9.0) / 5.0 ) + 32.0;
        printf("%3.2f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
