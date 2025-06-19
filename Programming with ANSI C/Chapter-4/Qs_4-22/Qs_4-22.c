#include <stdio.h>

int main() {
    float a,b,c,d;
    printf("Enter a number a : ");
    scanf("%f", &a);
    printf("Enter a number b : ");
    scanf("%f", &b);
    printf("Enter a number c : ");
    scanf("%f", &c);
    printf("Enter a number d : ");
    scanf("%f", &d);
    printf("(a+b)*(c/d)=%.2f\n",(a+b)*(c/d));
    printf("(a+b)*c/d=%.2f\n",(a+b)*c/d);
    printf("a+(b*c)/d=%.2f\n",a+(b*c)/d);

    
    return 0;
}