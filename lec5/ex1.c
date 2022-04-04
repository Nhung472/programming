#include <stdio.h>

void main()
{
   int a,b,c,larg,small;

   printf("Enter three number\n");
   scanf("%d %d %d",&a,&b, &c);
   larg = a>b?a>c?a:c:b>c?b:c;
   small = a<b?a<c?a:c:b<c?b:c;
   printf("Largest Number is : %d\n",larg);
   printf("Smallest Among 3 Number is : %d",small);
}