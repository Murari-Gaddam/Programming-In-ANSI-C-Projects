#include <stdio.h>

int main() {
    int A,B,C;
    printf("Enter number A: ");
    scanf("%d", &A);
    printf("Enter number B: ");
    scanf("%d", &B);
    printf("Enter number C: ");
    scanf("%d", &C);
    int result =(A>B)?((A>C)?A:C):((B>C)?B:C);
    printf("The biggest number amoung A,B,C is %d",result);

    return 0;
}