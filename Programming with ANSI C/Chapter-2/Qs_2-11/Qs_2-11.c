#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double s, A, B;
    printf("enter the lenght of side a =");
    scanf("%d", &a);
    printf("enter the lenght of side b =");
    scanf("%d", &b);
    printf("enter the lenght of side c =");
    scanf("%d", &c);
    s = (a + b + c) / 2;
    A = (s * (s - a) * (s - b) * (s - c));
    B = sqrt(A);
    if (A <= 0)
    {
        printf("The area is not valid");
    }
    else
    {
        B = sqrt(A);
        printf("The area of the triangle is=%.2f", B);
    }
}
