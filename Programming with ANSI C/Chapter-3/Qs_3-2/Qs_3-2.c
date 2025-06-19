#include <stdio.h>
int main()
{
    float a = 16.75, b = 15.00, c, d, e, f, g;
    printf("***LIST OF ITEMS***");
    printf("items     price\n");
    printf("Rice      Rs %f\n", a);
    printf("Sugar     Rs %f\n", b);
    printf("Enter the number of kg's of Rice=");
    scanf("%f", &c);
    printf("Enter the number of kg's of Sugar=");
    scanf("%f", &d);
    e = a * c;
    f = b * d;
    printf("Rice      Rs %.2f x %.2f = %.2f\n", a, c, e);
    printf("Sugar     Rs %.2f x %.2f = %.2f\n", b, d, f);
    g = e + f;
    printf("The total price = %.2f\n",g);
}