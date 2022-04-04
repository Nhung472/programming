#include <stdio.h>

int main()
{
    char *string = "Hello World\0";
    printf ("The string is %s ", string);
    printf ("Size of A %d ", sizeof("A"));
    return 0;
}