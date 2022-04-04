#include <stdio.h>

int main()
{
    float num1=10;
    float num2=7;

    printf("Add%f\n", num1 + num2);
    printf("Sub %f\n", num1-num2);
    printf("Mul %f\n", num1*num2);
    printf("Div %f\n", num1/num2);
    printf("Modulus %d\n", 10%7);

    float x =3.2;
    float y = ++x;
    float z = x++;
    printf("x = %f; y = %f; z = %f", x, y, z);
    return 0;
 
}