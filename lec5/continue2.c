#include <stdio.h>
#include <math.h>

int main()
{
    double number;
    while (1)
    {
        printf("\nEnter a positive to calculate the square root (0 to exit):");
        scanf("%lf", &number);

        if (number ==0)
            break;

        if (number < 0)
            continue;
        printf("The square root of %.2lf is %.2lf", number, sqrt(number));
    }
    return 0;
}