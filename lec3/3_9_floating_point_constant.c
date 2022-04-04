#include <stdio.h>

int main()
{
    float a = 10.56f; // or 10.56F
    double b = 10.56; // capable of storing more precision value
    long double c = 10.56L; // capable of storing more and more accurate precision

    printf(" In float= %f, In double = %lf, In long double = %Lf ", a,b,c);
    return 0;
}