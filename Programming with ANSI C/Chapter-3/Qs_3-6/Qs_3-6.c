#include <stdio.h>
#define PIE 3.14159
int main()
{
    float a,b;
    printf("enter the radius of the circle");
    scanf("%f.4",&a);
    b=PIE*a*a;
    printf("the area of the circle is=%.3f",b);}