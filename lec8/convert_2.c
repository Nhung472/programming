/*convert celsius to fahrenheit */
/*way 2*/
#include <stdio.h>
float gettemp();
float cel_to_fah(double);
void result(double, double);
void main()
{
    float tempC = gettemp();
    float tempF = cel_to_fah();
    result(tempC, tempF);
}
float gettemp()
{
    float temp;
    printf("\nEnter temp: ");
    scanf("%f", &temp);
    return temp;
}
float cel_to_fah(double temp)
{
    return temp*1.8+32.0;
}
void result(double tempC, double tempF)
{
    printf("Original: %5.2f C\n", tempC);
    printf("Equivalent: %5.2f F\n", tempF);
}