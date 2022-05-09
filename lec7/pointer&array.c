#include<stdio.h>
int main()
{
    int my_arr[5]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        printf("Value of a[%d] = %d\t",i, *(my_arr+i))
        printf("Address of a[%d] = %u\n",i, my_arr+i);
    }
    return 0;
}