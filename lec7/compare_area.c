/*calculate the triangle's area*/

#include <stdio.h>
#include <math.h>
float Length(float x1, float y1, float x2, float y2);
float Area(float a, float b, float c);
void main()
{
    float x1=0.0, y1=0.0, x2=17.0, y2=10.3, x3=-5.2, y3=5.1;
    float x4=0.0, y4=0.0, x5=-5.1, y5=-4.2, x6=20.0, y6=-4.2;
    float a, b, c, l, m, n; 
    float S1=Area(Length(x1,y1,x2,y2), Length(x1,y1,x3,y3), Length(x2,y2,x3,y3));
    float S2=Area(Length(x4,y4,x5,y5), Length(x4,y4,x6,y6), Length(x5,y5,x6,y6));

    if(S1>S2)
        printf("The 1st traingle is larger");
    else if (S1<S2)
        printf("The 1st traingle is smaller");
    else
        printf("Both triangles equal");
    a = Length(x1, y1, x2, y2);
}
float Length(float x1, float y1, float x2, float y2)
{
    return sqrt((x1-x2) * (x1-x2) + (y1-y2)*(y1-y2));
}
float Area(float a, float b, float c)
{
    float p=(a+b+c)/2;
    float Area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%f\n", Area);
    return Area;
}