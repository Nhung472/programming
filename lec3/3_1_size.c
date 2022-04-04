#include <stdio.h>
int main (void)

{
    printf("char\tshort\tint\tlong\tfloat\tdouble\n");
    printf("%3d\t%3d\t%3d\t%3d\t%3d\t%3d\t%3d\n",
    sizeof(char), sizeof(short), sizeof(int),
    sizeof(long), sizeof(float), sizeof(double));
}
