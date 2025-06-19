#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the first number=");
    scanf("%d", &a);
    printf("Enter the second number=");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    printf("Sum of the numbers=%d\n", c);
    printf("difference of the numbers=%d", d);
}