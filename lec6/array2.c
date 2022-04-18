#include <stdio.h>
int main()
{
    const int SIZE=5;
    int a[SIZE];

    int i;
    for (i=0; i< SIZE; i++)
        a[i] =i;
    
    for (i=0; i<SIZE;i++)
        printf("%d", a[i]);
    return 0;
}