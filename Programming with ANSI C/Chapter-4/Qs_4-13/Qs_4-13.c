#include <stdio.h>

int main() {
    int n,r;
    float p;
    printf("Enter the  number of calls: ");
    scanf("%d", &n);
    r=(n-100);p=250+(r*1.25);
    printf("Extra no of calls is %d\n;",r);
    printf("Total price is equal to :250 +( 1.25 x %d )=%.3f ",r,p);
    return 0;
}