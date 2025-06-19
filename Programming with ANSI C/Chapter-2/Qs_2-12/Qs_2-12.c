#include <stdio.h>
int main()
{
    float a, b, c, d, e, f;
    printf("Enter the first number=");
    scanf("%f", &a);
    printf("Enter the second number=");
    scanf("%f", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    printf("Addition=%.2f\n", c);
    printf("Substraction=%.2f\n", d);
    printf("Multiplication=%.2f\n", e);
    printf("Division=%.2f\n", f);
}
