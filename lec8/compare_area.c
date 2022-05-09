/*calculate the triangle's area*/

#include <stdio.h>
#include <math.h>

void main()
{
    float x1=0, y1=0, x2=17, y2=10.3, x3=-5.2, y3=5.1;
    float a, b, c, l, m, n; 
    float p1, p2, area;
    
    
    a = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
    b = sqrt((x1-x3) * (x1-x3) + (y1-y3) * (y1-y3));
    c = sqrt((x2-x3) * (x2-x3) + (y2-y3) * (y2-y3));

    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%f\n", area);
}