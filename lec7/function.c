#include<stdio.h>
int max(int a, int b);
int main()
{
    int x, y,m;
    puts("Enter two numbers to find max: ");
    scanf("%d", &x);
    scanf("%d", &y);
    m = max(x, y);
    printf("The max of %d and %d is %d", x, y, m);
    return 0;
}

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}