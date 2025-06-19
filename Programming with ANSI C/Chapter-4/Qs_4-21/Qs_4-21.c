#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter the numerator: ");
    scanf("%f", &a);
    printf("Enter a denominator: ");
    scanf("%f", &b);
    c=a/b;
    if(b==0){printf("division is not possible");}
    else{printf("division is possible and the value is %.2f",c);}

    return 0;
}