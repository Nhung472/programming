#include <stdio.h>

int main()
{
    int a=10, b=20, c=30, result;
    result=a*b+ ++c;
    printf("The result is: %d", result);
    return 0;
}