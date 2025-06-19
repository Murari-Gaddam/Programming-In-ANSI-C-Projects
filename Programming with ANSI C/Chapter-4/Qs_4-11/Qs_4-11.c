#include <stdio.h>

int main() {
    int n,d,s;
    printf("Enter a number(M): ");
    scanf("%d", &n);
    printf("Enter a number(N): ");
    scanf("%d", &d);
    if(n%d==0){printf("M is a multiple of N");}
    else{printf("M is a not multiple of N");}
    return 0;
}