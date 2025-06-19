#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
    float x1, y1, x2, y2, a, b, c,d,e;
    printf("Enter the x coordinate of point on circle A=");
    scanf("%f",&x1);
    printf("Enter the y coordinate of point on circle A=");
    scanf("%f",&y1);
    printf("Enter the x coordinate of point on circle B=");
    scanf("%f",&x2);
    printf("Enter the x coordinate of point on circle B=");
    scanf("%f",&y2);
    a=pow((x1-x2),2);
    b=pow((y1-y2),2);
    c=sqrt(a+b)/2;
    printf("The raduis of circle=%.4f\n",c);
    d=PI*2*c;
    e=PI*c*c;
    printf("The circumference of circle=%.4f\n",d);
    printf("The area of circle=%.4f\n",e);
}