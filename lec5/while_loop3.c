#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rem, rev=0;
    int n, an;
    printf("Enter any NUmber\n");
    scanf("%d", &n);
    an=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse of %d is %d", an, rev);
    return 0;
}