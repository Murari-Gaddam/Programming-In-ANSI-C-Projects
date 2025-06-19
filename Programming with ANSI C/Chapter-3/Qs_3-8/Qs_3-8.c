#include <stdio.h>
#include <math.h>
int main()
{
    double a, b;
    printf("enter a number");
    scanf("%lf", &a);
    b=pow(a,2);
    printf("the square of the number is %.5f",b);
    return 0;
}