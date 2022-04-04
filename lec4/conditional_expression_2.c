#include <stdio.h>

int main()
{
    int n=53;
    for (int i=0; i<n;i++)
        printf("%6d%c", i, (i%10==9 || i==n-1) ? '\n' : ' ');
        
}