#include <stdio.h>
int main()
{
    float a, b, c;
    printf("enter the distance(km) travelled");
    scanf("%f",&a);
    printf("enter the fuel consumed");
    scanf("%f",&b);
    c=a/b;
    printf("the milage(km per litre) is %f",c);
}