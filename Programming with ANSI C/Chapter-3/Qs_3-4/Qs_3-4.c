#include <stdio.h>
int main()
{
    long int x, y;
    int z;
    printf("enter a 6 digit number=");
    scanf("%d", &x);
    printf("enter another 6 digit number=");
    scanf("%d", &y);
    z=x+y;
    printf("the sum of the digits is %d",z);
}