#include <stdio.h>
 int main()
{
    int i=1, n;
    float sum=0.0;
    printf("enter the n value=");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + (1.0 / i);
        i = i + 1;
    };
    printf("the sum of the harmonic eqation is =%f",sum);
}
