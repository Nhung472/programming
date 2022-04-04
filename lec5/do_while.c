#include <stdio.h>

int main()
{
    int i=1, n;
    printf("Enter any number\n");
    scanf("%d", &n);
    do
    {
        printf("%d", i);
        i++;
    } while (i<=n);
    return 0;
}