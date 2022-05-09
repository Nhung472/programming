#include <stdio.h>
int main()
{
    int x=10;
    int *px=&x;
    printf("x = %d\n", x);
    printf("*px = %d\n", *px);

    *px = 20;
    printf("x = %d\n", x);
    printf("*px = %d\n", *px);
    
    printf("The memory address of x is %p\n", &x);
    printf("The value of the pointer px is %p\n", px);
    printf("The memory address of the pointer px is %p\n", &px);

    return 0;
}