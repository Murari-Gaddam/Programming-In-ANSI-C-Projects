#include <stdio.h>
#include<math.h>
int main() {
    float s,d,a,t,ts;
    printf("Enter the speed of the vehicle:(m/s) ");
    scanf("%f", &s);
    printf("Enter the acceleration of the vehicle:(m/s^2) ");
    scanf("%f", &a);
    printf("Enter the time period:(s) ");
    scanf("%f", &t);
    ts=t*t;
    d=(s*t)+0.5*(a*ts);
    printf("the distance travelled by the vehical is(m) :%.2f ",d);

    return 0;
}