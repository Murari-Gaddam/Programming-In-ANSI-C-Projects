#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, a, b, c;
    printf("Enter the x coordinate of point A=");
    scanf("%f",&x1);
    printf("Enter the y coordinate of point A=");
    scanf("%f",&y1);
    printf("Enter the x coordinate of point B=");
    scanf("%f",&x2);
    printf("Enter the x coordinate of point B=");
    scanf("%f",&y2);
    a=pow((x1-x2),2);
    b=pow((y1-y2),2);
    c=sqrt(a+b);
    printf("The distance between A and B=%.4f",c);

}