#include <stdio.h>

int main()
{
    int x=10, y=12;
    printf("x += y: %d \n", x+=y);
    int x=10, y=12;
    printf("x -= y: %d \n", x-=y);
    int x=10, y=12;
    printf("x *= y: %d \n", x*=y);
    int x=10, y=12;
    printf("x /= y: %d \n", x/=y);
    printf("x %= y: %d \n", x%=y);

    return 0;
}