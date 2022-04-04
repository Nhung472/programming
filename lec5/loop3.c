#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    int i, total =0;
    for (i=1; i<=n; i++)
        total +=i;
    
    printf("The sum of number from 1 to %d is %d\n", n, total);
    return 0;
}