#include <stdio.h>

int main()
{
    int fact=1, i=1, n;
    printf("Enter any number \n");
    scanf("%d", &n);
    while(i<=n)
    {
        fact = fact *i;
        i++;
    }
    printf("\nFactorial of %d is %d", n, fact);
    return 0;
}