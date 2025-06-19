#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a number");
    scanf("%d", &a);
    b=1;
    while (b <= 10)
    {
        c = a * b;
        printf("%d X %d = %d\n5", a, b, c);
        b = b + 1;
    }
}