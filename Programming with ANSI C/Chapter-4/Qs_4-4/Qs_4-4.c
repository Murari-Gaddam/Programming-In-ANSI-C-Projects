#include <stdio.h>

int main() {
    int d,p,y,s;
    printf("Enter the depriciation: ");
    scanf("%d", &d);
    printf("Enter years of service : ");
    scanf("%d", &y);
    printf("Enter purchase price : ");
    scanf("%d", &p);
    s=p-(y*d);
    printf("the salvage value is %d",s);
    return 0;
}