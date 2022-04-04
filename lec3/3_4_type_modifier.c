#include <stdio.h>
#include <limits.h>

int main() {
    short a1 = -100; 
    long a2 = -100; 
    signed int a3 = -100; 
    unsigned a4 = -100; 
    double b1 = 28.888; 
    long double b2 = 28.888; 
    printf("Short integer: %d, memory size: %d byte\n",a1, sizeof(short int));
    printf("Long integer: %d, memory size: %d byte\n",a2, sizeof(long int));
    printf("Signed integer: %d, range: %d\t%d\n",a3,INT_MIN,INT_MAX);
    printf("Unsigned integer: %u, range: %u\t%u\n",a2,0.000000,UINT_MAX);
    printf("Double: %lf, memory size: %d byte\n",b1, sizeof(double));
    printf("Long double: %Lf, memory size: %d byte\n",b2, sizeof(double long));
}