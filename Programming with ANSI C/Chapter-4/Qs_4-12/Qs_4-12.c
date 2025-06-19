#include <stdio.h>

int main() {
    int A,B,C,s;
    float a;
    printf("Enter number A: ");
    scanf("%d", &A);
    printf("Enter number B: ");
    scanf("%d", &B);
    printf("Enter number C: ");
    scanf("%d", &C);
    s=A+B+C;
    a=(float)s/3;
    int sm=(A<B)?((A<C)?A:C):((B<C)?B:C);
    int l =(A>B)?((A>C)?A:C):((B>C)?B:C);
    printf("Sum of the number A,B,C is %d\n",s);
    printf("Avarage  of the number A,B,C is %f\n",a);
    printf("The biggest number amoung A,B,C is %d\n",l);
    printf("The smallest number amoung A,B,C is %d\n",sm);

    return 0;
}