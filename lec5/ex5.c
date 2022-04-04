//print prime num from 1 to n, start a newline every 10 primes
#include <stdio.h>
#include <math.h>

void main()
{
    int n, i, j, count=0;
    printf("\nEnter the number greater than 1: ");
    scanf("%d", &n);
    for(i=2; i<=n;i++)
    {
        int flag=0;
        for(j=2, j<=(int)sqrt(i); j++)
            if(i%j==0) flag=1;
        if(flag==0)
        {
            printf("%d, ", i);
            ++count;
            if (count%10==0) printf("\n");
        }
    }
}