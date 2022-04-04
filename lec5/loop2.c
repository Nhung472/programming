#include <stdio.h>

int main()
{
    const int MAX = 10;
    int i;
    for (i=0; i <MAX; i++)
    {
        if (i % 2 ==0)
            printf("%d ",i);
    }
    return 0;
}