#include <stdio.h>

int main()
{
    int n, total = 0;
    printf("Enter a positive number (0 or negative to exit): ");
    while (1)
    {
        scanf("%d", &n);
        if (n <= 0)
            break;
        total += n;
    }
    printf("The total is %d", total);
}