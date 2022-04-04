#include <stdio.h>

int main()
{
    int x=1, y;
    y = (x ==1? 3:0);
    printf("x=%d\n", x);
    printf("y= (x ==1? 3:0) = %d\n", y);
    int a=3, b=2;
    int z = (a>b) ? a:b;
    printf("z max(%d, %d) = %d", a,b,z);
    return 0;
}