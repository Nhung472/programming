/* print Farenheit - Celsius table for fahr = 0, 20, ...,300*/

#include <stdio.h>

int main()
{
    int fahr, celcius;
    int lower, upper, step;
    lower = 0; /*lower limit of temp scale */
    upper = 300; /*upper limit */
    step = 20;  /*step size */
    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
    return 0;
}