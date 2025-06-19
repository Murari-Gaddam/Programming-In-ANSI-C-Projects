#include <stdio.h>
#include <math.h>

int main()
{
    float e,t,d,s,h;
    printf("Enter demand rate: ");
    scanf("%d", &d);
    printf("Enter holding cost(/unit/time): ");
    scanf("%d", &h);
    printf("Enter setup cost: ");
    scanf("%d", &s);
    e=sqrt((2*d*s)/h);
    t=sqrt((2*s)/(d*h));
    printf("the economic order quantity is : %.2f\n",e);
    printf("the optimal time between order is :%.2f\n",t);
    return 0;
}