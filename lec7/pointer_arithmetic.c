#include <stdio.h>
int main()
{
    int i=12, *ip=&i;
    double d = 2.3, *dp = &d;
    char ch='a', *cp=&ch;

    printf("Value of ip=%u\n", ip);
    printf("Value of dp=%u\n", dp);
    printf("Value of cp=%u\n\n", cp);

    printf("Value of ip + 1=%u\n", ip+1);
    printf("Value of dp + 1=%u\n", dp +1);
    printf("Value of cp + 1=%u\n\n", cp +1);

    printf("Value of ip - 1=%u\n", ip - 1);
    printf("Value of dp - 1=%u\n", dp -1);
    printf("Value of cp - 1=%u\n\n", cp - 1);
    return 0;
}