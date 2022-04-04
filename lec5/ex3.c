//find smallest, largest in 3 nums ver 2
#include <stdio.h>

void main()
{
   float x, y,z, max, min;
   char ch;
   while (1)
   {
        printf("Enter three number or 'q' to exit: ");
        scanf("%f %f %f",&x,&y, &z);
        scanf("%c", &ch);
        if (ch=='q') break;
        max=(x>y) ? x:y;
        max=(max>z)? max:z;
        min=(x>y) ? y:x;
        min=(min>z)? z:min;
        printf("Largest Number is : %0.2f",max);
        printf("Smallest Number is : %0.2f",min);
   }
}