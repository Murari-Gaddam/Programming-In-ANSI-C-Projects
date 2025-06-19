#include <stdio.h>
#include <math.h>

int main() {
    float r,a,s;
    a=1;
    printf("Number\t\tSquareroot\tSquare\n");
    while(a<=100){printf("%.2f\t\t%.2f\t\t%.2f\n",a,sqrt(a),pow(a,2));a=a+1;}
    return 0;
}