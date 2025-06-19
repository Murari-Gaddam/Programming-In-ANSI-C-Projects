#include <stdio.h>

int main()
{
    int n, o, th, h, t, s;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    th = n / 1000;
    h = (n % 1000) / 100;
    t = (n % 100) / 10;
    o = n % 10;
    s = th + h + t + o;
    printf("the sum of the numbers is the given number is "
           ":%d+%d+%d+%d=%d",
           th, h, t, o, s);
    return 0;
}