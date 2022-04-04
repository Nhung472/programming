/*find smallest at 3 nums*/
#include <stdio.h>

void main()
{
   float x, y,z, max, min;
   printf("Enter three number\n");
   scanf("%f %f %f",&x,&y, &z);
   max=(x>y) ? x:y;
   max=(max>z)? max:z;
   min=(x>y) ? y:x;
   min=(min>z)? z:min;
   printf("Largest Number is : %0.2f",max);
   printf("Smallest Among 3 Number is : %0.2f",min);
}