#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    printf("Enter a real number: ");
    scanf("%f", &n);
    printf("rounding up the number %d\n",(int)ceil(n));
    printf("rounding down the number %d",(int)floor(n));

    return 0;
}