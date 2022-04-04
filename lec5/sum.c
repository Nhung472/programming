/*sum 1 + 1/2 + 1/3 + ...+ 1/n*/
#include <stdio.h>

int main()
{
    int sum=1, i=1, n;
    float sum=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i<=n)
    {
        sum = sum + 1/i;
        i++;
    }
    printf("\nSum of %d is %d", n, sum);
    return 0;
}